# Gentle Introduction to C Programming

A collection of small, focused examples for learning the fundamentals of C programming. Each source file is intended to be read, compiled, and modified while practicing a specific concept.

## What is included

The examples are organized by topic:

| Directory | Topics |
| --- | --- |
| [`intro/`](./intro/) | Basic programs, variables, data types, and simple output |
| [`printf-scanf/`](./printf-scanf/) | Formatted output, input, strings, and `fgets` |
| [`operators/`](./operators/) | Unary operators, type casting, precedence, associativity, and the ternary operator |
| [`control-flow/`](./control-flow/) | `if`, `else if`, `else`, and `switch` statements |
| [`looping/`](./looping/) | `for`, `while`, `do...while`, nested loops, and scope |
| [`functions/`](./functions/) | Function declarations, definitions, arguments, return values, and pass-by-reference |
| [`preprocessors/`](./preprocessors/) | Preprocessor constants, macros, and conditional compilation |
| [`programs/`](./programs/) | Practical examples such as searching, sorting-related exercises, calculators, recursion, and string handling |

The repository also contains [`c-visualizer/`](./c-visualizer/), an interactive browser-based simulator for supported `for` loops and conditional statements. See its [README](./c-visualizer/README.md) for setup and usage details.

## Requirements

For the C examples, install a C compiler:

- macOS: Clang is included with Xcode Command Line Tools.
- Linux: GCC or Clang can be installed through your distribution's package manager.
- Windows: Use a C toolchain such as MinGW or LLVM.

The visualizer has separate requirements. It uses Node.js **22.13.0 or newer** and npm.

## Compile and run an example

From the repository root, compile a source file to an executable:

```bash
clang intro/main.c -o intro/main
```

Run it:

```bash
./intro/main
```

GCC can be used instead:

```bash
gcc intro/main.c -o intro/main
./intro/main
```

For examples that use the math library, link it with `-lm`:

```bash
clang programs/min-max.c -o programs/min-max -lm
./programs/min-max
```

You can compile any other example by replacing the source and output paths. Many examples read input from the terminal, so follow the prompts after starting the executable.

## Compile from VS Code

The repository includes VS Code build and debug configurations in [`.vscode/`](./.vscode/). Open a `.c` file, then use **Run and Debug** to build and debug the active file with Clang and LLDB.

## Suggested learning path

1. Start with [`intro/main.c`](./intro/main.c) and [`intro/void.c`](./intro/void.c).
2. Practice input and output in [`printf-scanf/`](./printf-scanf/).
3. Learn operators in [`operators/`](./operators/).
4. Continue with conditions in [`control-flow/`](./control-flow/) and loops in [`looping/`](./looping/).
5. Move on to functions and preprocessing.
6. Apply the concepts in [`programs/`](./programs/).
7. Use [`c-visualizer/`](./c-visualizer/) to step through supported loops and conditionals visually.

## Notes

- The examples are independent programs; there is no single root build system.
- Some compiled executables are present alongside their source files. Recompile them locally when making changes.
- The examples are educational and may intentionally demonstrate language behavior or common beginner mistakes. Review compiler warnings and experiment with the code.

## License

No root-level license is currently specified. See [`c-visualizer/LICENSE`](./c-visualizer/LICENSE) for the visualizer's license.
