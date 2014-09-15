ARM Emulator

This code emulates following ARM processor behaviors.

1. Pipeline: Size 4
2. Reserves memory locations for; Interrupt instructions and user instructions.
3. Counts the cycles for each instruction and total cycles.
4. Data processing instructions: Sets the overflow and carry flags.
5. Branch instructions: Uses stack to store the link data if need.
6. Data transfer instructions
7. Interrupts instructions: Executes the interrupt instruction in the inputted instructions set or accepts hardware instruction before fetching a new instruction.
8. Prints out the registers, user accessible memory, stack memory and the status flags. Please set “debugEnabled” and “instructionLogEnabled” variable for farther information in the output.

P.S. Please set the variables "debugEnabled" and "instructionLogEnabled" for test porpuses.