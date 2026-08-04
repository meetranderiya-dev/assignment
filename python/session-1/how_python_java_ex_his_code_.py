#| Feature               | Python                                         | Java                                          | C                                                   |
| --------------------- | ---------------------------------------------- | --------------------------------------------- | --------------------------------------------------- |
| **Type**              | Interpreted                                    | Compiled + Interpreted                        | Compiled                                            |
| **Compilation**       | Converts to bytecode, then executed by PVM     | Compiles to bytecode (`.class`) using `javac` | Compiles directly to machine code                   |
| **Execution**         | Python Virtual Machine (PVM) executes bytecode | Java Virtual Machine (JVM) executes bytecode  | CPU executes machine code directly                  |
| **Speed**             | Slowest                                        | Faster than Python                            | Fastest                                             |
| **Portability**       | Runs where Python is installed                 | "Write Once, Run Anywhere" using JVM          | Must be recompiled for each platform                |
| **Executable File**   | No separate executable by default              | `.class` files                                | `.exe` (Windows) or executable (Linux/macOS)        |
| **Memory Management** | Automatic (Garbage Collector)                  | Automatic (Garbage Collector)                 | Manual (`malloc()` and `free()`)                    |
| **Ease of Learning**  | Easy                                           | Moderate                                      | Difficult                                           |
| **Common Uses**       | AI, Data Science, Web Development, Automation  | Android Apps, Enterprise Applications         | Operating Systems, Embedded Systems, Device Drivers |//
