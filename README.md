# C in 100 Seconds

Source code for the **C in 100 Seconds** YouTube series by Codegiz — short, focused episodes covering C from `hello.c` to data structures, one concept at a time.

Each episode is one self-contained `.c` file (or a tiny module). No build system, no boilerplate — just `gcc`, run, and move on.

- **Watch on YouTube:** https://www.youtube.com/@codegiz
- **Channel:** [Codegiz](https://codegiz.com)

## Episodes

| # | Topic | File |
|---|---|---|
| 01 | Hello, World | [`episode01/hello.c`](episode01/hello.c) |
| 02 | Variables | [`episode02/variables.c`](episode02/variables.c) |
| 03 | Formatted output (`printf`) | [`episode03/format.c`](episode03/format.c) |
| 04 | Arithmetic operators | [`episode04/arithmetic.c`](episode04/arithmetic.c) |
| 05 | `if` / `else` | [`episode05/ifelse.c`](episode05/ifelse.c) |
| 06 | `switch` | [`episode06/switch.c`](episode06/switch.c) |
| 07 | `while` loop | [`episode07/while.c`](episode07/while.c) |
| 08 | `for` loop | [`episode08/forloop.c`](episode08/forloop.c) |
| 09 | Functions | [`episode09/functions.c`](episode09/functions.c) |
| 10 | Arrays | [`episode10/arrays.c`](episode10/arrays.c) |
| 11 | Strings | [`episode11/strings.c`](episode11/strings.c) |
| 12 | `scanf` input | [`episode12/input.c`](episode12/input.c) |
| 13 | `fgets` input | [`episode13/fgets.c`](episode13/fgets.c) |
| 14 | Constants (`const`, `#define`) | [`episode14/constants.c`](episode14/constants.c) |
| 15 | Type casting | [`episode15/casting.c`](episode15/casting.c) |
| 16 | Multi-file projects | [`episode16/`](episode16/) |
| 17 | Pointers | [`episode17/pointers.c`](episode17/pointers.c) |
| 18 | Pointer arithmetic | [`episode18/ptrarith.c`](episode18/ptrarith.c) |
| 19 | Pass by reference | [`episode19/passbyref.c`](episode19/passbyref.c) |
| 20 | `malloc` | [`episode20/malloc.c`](episode20/malloc.c) |
| 21 | `calloc` | [`episode21/calloc.c`](episode21/calloc.c) |
| 22 | Memory leaks | [`episode22/leak.c`](episode22/leak.c) |
| 23 | Structs | [`episode23/structs.c`](episode23/structs.c) |
| 24 | Pointers to structs | [`episode24/structptr.c`](episode24/structptr.c) |
| 25 | Unions | [`episode25/unions.c`](episode25/unions.c) |
| 26 | `typedef` | [`episode26/typedef.c`](episode26/typedef.c) |
| 27 | Function pointers | [`episode27/fnptr.c`](episode27/fnptr.c) |
| 28 | Pointer arrays | [`episode28/ptrarray.c`](episode28/ptrarray.c) |
| 29 | Double pointers | [`episode29/doubleptr.c`](episode29/doubleptr.c) |
| 30 | `void *` | [`episode30/voidptr.c`](episode30/voidptr.c) |
| 31 | Stack vs heap | [`episode31/stackheap.c`](episode31/stackheap.c) |
| 32 | String functions | [`episode32/strings.c`](episode32/strings.c) |
| 33 | Tokenizing (`strtok`) | [`episode33/tokenize.c`](episode33/tokenize.c) |
| 34 | `sprintf` / formatting | [`episode34/format.c`](episode34/format.c) |
| 35 | Reading files | [`episode35/readfile.c`](episode35/readfile.c) |
| 36 | Writing files | [`episode36/writefile.c`](episode36/writefile.c) |
| 37 | Binary file I/O | [`episode37/binary.c`](episode37/binary.c) |
| 38 | Command-line args | [`episode38/args.c`](episode38/args.c) |
| 39 | Error handling (`errno`) | [`episode39/errors.c`](episode39/errors.c) |
| 40 | The preprocessor | [`episode40/preproc.c`](episode40/preproc.c) |
| 41 | `Makefile` basics | [`episode41/`](episode41/) |
| 42 | Linked lists | [`episode42/linked.c`](episode42/linked.c) |
| 43 | Linked-list ops | [`episode43/listops.c`](episode43/listops.c) |
| 44 | Traversal | [`episode44/traverse.c`](episode44/traverse.c) |
| 45 | Doubly linked lists | [`episode45/doubly.c`](episode45/doubly.c) |
| 46 | Stacks | [`episode46/stack.c`](episode46/stack.c) |
| 47 | Queues | [`episode47/queue.c`](episode47/queue.c) |
| 48 | Hash tables | [`episode48/hashtable.c`](episode48/hashtable.c) |
| 49 | Hash maps | [`episode49/hashmap.c`](episode49/hashmap.c) |
| 50 | Binary trees | [`episode50/bintree.c`](episode50/bintree.c) |
| 51 | Tree traversal | [`episode51/traversal.c`](episode51/traversal.c) |
| 52 | Binary search tree | [`episode52/bst.c`](episode52/bst.c) |
| 53 | Bubble sort | [`episode53/bubble.c`](episode53/bubble.c) |
| 54 | Merge sort | [`episode54/merge.c`](episode54/merge.c) |
| 55 | Quick sort | [`episode55/quick.c`](episode55/quick.c) |
| 56 | Dynamic arrays | [`episode56/dynarray.c`](episode56/dynarray.c) |

## Requirements

A C compiler. On macOS / Linux:

```sh
gcc --version          # macOS ships with clang aliased to gcc
# or on Debian/Ubuntu:
sudo apt install build-essential
```

## Run any episode

Single-file episodes — compile and run directly:

```sh
cd episode01
gcc hello.c -o hello
./hello
```

Multi-file episodes (16, 41) — compile both `.c` files together:

```sh
cd episode16
gcc main.c math_utils.c -o demo
./demo
```

Episode 41 uses a Makefile:

```sh
cd episode41
make
./demo
make clean
```

## About this channel

The Codegiz channel is run by **Claude AI**. Tutorials are AI-produced; reviewed and published by Codegiz. Source for every series at github.com/GoCelesteAI.

## License

MIT
