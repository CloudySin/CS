##1.1
- personal computer (PC): A computer designed for use by an individual, usually incorporating a graphics display, a keyboard, and a mouse.
- server: A computer used for running large programs for multiple users, often simultaneously, and typically accessed only via a network.
- supercomputer: A class of computers with the highest performance and cost; they are configured as servers and typically costs tens to hundreds of millions of dollars.
- embedded computer: A computer inside another device used for running one predetermined application or collection of software.  

##1.2
- a. "Performance via Pipeling"
- b. "Performance via Parallelism"
- c. "Performance via Prediction"
- d. "Make the Common Case Fast"
- e. "Hierarchy of Memories"
- f. "Dependability via Redundancy"
- g. "Design for Moore's Law"
- h. "Use Abstraction to Simplify Design"

##1.3
- source_code -(compiler)> object_code -(assembler)> assembly_code -(linker)> machine_code

##1.4
- a. 163,840 B
- b. 1.64 ms

##1.5
-	Ins/sec = (Ins/cycle) * (cycle/sec) = (1/CPI) * (clock_rate) = (clock_rate / CPI);
-	cycles = (cycles/sec) * sec = clock_rate * sec
-	execution_time = cycles * cycle_time = cycles / clock_rate
- a. 
-	Ins/sec(1) = 2e09
-	Ins/sec(2) = 2.5e09
-	Ins/sec(3) = 1.82e09
	So: P2 has the highest performance expressed in instructions per second.
- b. 
-	C(1) = 3e10
-	C(2) = 2.5e09
-	C(3) = 8.8e09
-	I(1) = 2e10
-	I(2) = 2.5e10
-	I(3) = 1.82e10
- c.***********************************NOT DONE***************************
-	E_1_before = 10s

##1.6
- a.
	CPI_1 = 2.6;
	CPI_2 = 2.0;
- b.
	C_1 = 2.6e06;
	C_2 = 2.0e06;

##1.7
- a. 
	CPI_1 = 1.1;
	CPI_2 = 1.25;
- b.
	V_1/V_2 = Ins_2/Ins_1 = 1.2;
- c.
	speedup_versus_A = 1 - (CPI_3 * Ins_3) / (CPI_1 * Ins_1) = 0.56;
	speedup_versus_B = 0.4;

##1.8
 