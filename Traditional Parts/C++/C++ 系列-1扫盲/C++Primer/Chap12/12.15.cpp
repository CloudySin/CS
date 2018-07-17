#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct connection
{
	string ip;
	int port;
	connection(string ip_, int port_) : ip(ip_), port(port_){}
};
struct destination
{
	string ip;
	int port;
	destination(string ip_, int port_) : ip(ip_), port(port_){}
};

connection connect(destination* p_Dest)
{
	shared_ptr<connection> p_Conn(new connection(p_Dest->ip, p_Dest->port));
	cout << "Making connection:(" << p_Conn.use_count() << ")" <<endl;
	return *p_Conn;
}

void disconnection(connection p_Conn)
{
	cout << "Disconnecting: " << endl << "\t" << p_Conn.ip << " : " << p_Conn.port << endl;
}


void connect_and_disconnect(destination &dest)
{
	connection conn = connect(&dest);
	shared_ptr<connection> p(&conn, [](connection *k){disconnection(*k); });
	cout << "connecting now: (" << p.use_count() << ")" << endl;
}

int main(int argc, char const *argv[])
{
	destination some_destination("202.118.176.67", 3316);
	connect_and_disconnect(some_destination);
}