0x00. C - Hello, World

#ifndef LISTS_H
#ifndef LISTS_H
root@342ed7660a29:/# ls
alx-low_level_programming      bin   home   libx32  printf-1  srv
alx-pre_course                 boot  js     media   proc      sys
alx-system_engineering-devops  c     lib    mnt     root      tmp
alx-zero_day                   dev   lib32  opt     run       usr
bash                           etc   lib64  printf  sbin      var
root@342ed7660a29:/# cd alx-low_level_programming
#ifndef LISTS_H
root@342ed7660a29:/alx-low_level_programming# ls
0x00-hello_world                  0x09-static_libraries
0x01-variables_if_else_while      0x0A-argc_argv
0x02-functions_nested_loops       0x0B-malloc_free
0x03-debugging                    0x0C-more_malloc_free
0x04-more_functions_nested_loops  0x0D-preprocessor
0x05-pointers_arrays_strings      0x0E-structures_typedef
#include "lists.h"
0x06-pointers_arrays_strings      0x0F-function_pointers
0x07-pointers_arrays_strings      0x10-variadic_functions
0x08-recursion                    README.md
root@342ed7660a29:/alx-low_level_programming# mkdir 0x12-singly_linked_lists
root@342ed7660a29:/alx-low_level_programming# vi README.md
root@342ed7660a29:/alx-low_level_programming# cd 0x12-singly_linked_#include "lists.h"
lists
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# ls
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi README.md
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi lists.h
 * @str: The string to be added to the list_t list.
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty lists.h

========== lists.h ==========
lists.h:13: warning: no description found for struct list_s
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi lists.h
        char *dup;
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty lists.h

========== lists.h ==========
lists.h:13: warning: no description found for struct list_s
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi lists.h
#include "lists.h"
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty lists.h

========== lists.h ==========
lists.h:13: warning: no description found for struct list_s
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 0-print_list.c
#include <stdio.h>
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 0-print_list.c

========== 0-print_list.c ==========
print_list
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 1-list_len.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 1-list_len.c

========== 1-list_len.c ==========
list_len
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c
#include <stdio.h>

========== 2-add_node.c ==========
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 3-add_node_end.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 3-add_node_end.c

========== 3-add_node_end.c ==========
add_node_end
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_list#include <stdio.h>
s# vi 4-free_list.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 4-free_list.c

========== 4-free_list.c ==========
free_list
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_listextern printf
s# vi 100-first.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 100-first.c

========== 100-first.c ==========
100-first.c:12: ERROR: space required after that ';' (ctx:VxV)
total: 1 errors, 0 warnings, 12 lines checked
hare
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 100-first.c

========== 100-first.c ==========
100-first.c:12: ERROR: space required after that ';' (ctx:VxV)
total: 1 errors, 0 warnings, 12 lines checked
hare
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 100-first.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 100-first.c

========== 100-first.c ==========
100-first.c:11: ERROR: space prohibited after that open parenthesis '('
100-first.c:12: ERROR: space required after that ';' (ctx:VxV)
total: 2 errors, 0 warnings, 12 lines checked
hare
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 100-first.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 100-first.c

========== 100-first.c ==========
hare
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 101-hello_holberton.asm
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 101-hello_holberton.asm

========== 101-hello_holberton.asm ==========
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git add .
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git commit -m 'singly linked'
[master 9e25568] singly linked

~                                                                   

 9 files changed, 274 insertions(+)
 create mode 100644 0x12-singly_linked_lists/0-print_list.c
 create mode 100644 0x12-singly_linked_lists/1-list_len.c
 create mode 100644 0x12-singly_linked_lists/100-first.c
 create mode 100644 0x12-singly_linked_lists/101-hello_holberton.asm
 create mode 100644 0x12-singly_linked_lists/2-add_node.c
#include <stdlib.h>
 create mode 100644 0x12-singly_linked_lists/3-add_node_end.c
 create mode 100644 0x12-singly_linked_lists/4-free_list.c
#include <stdlib.h>
 create mode 100644 0x12-singly_linked_lists/README.md
 create mode 100644 0x12-singly_linked_lists/lists.h
#include <stdio.h>
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git push
/**
Password for 'https://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@github.com': 
#include <stdlib.h>
warning: redirecting to https://github.com/Ruovagems/alx-low_level_programming.git/
{
Enumerating objects: 13, done.
Counting objects: 100% (13/13), done.
    list_t *head;
Delta compression using up to 2 threads
Compressing objects: 100% (12/12), done.
#include <stdlib.h>
Writing objects: 100% (12/12), 3.47 KiB | 591.00 KiB/s, done.
Total 12 (delta 2), reused 0 (delta 0)
#include <stdio.h>
remote: Resolving deltas: 100% (2/2), completed with 1 local object.
To https://github.com:/Ruovagems/alx-low_level_programming.git
   6e0b772..9e25568  master -> master
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# ls 
0-print_list.c           1-list_len.c      4-free_list.c
100-first.c              2-add_node.c      lists.h
101-hello_holberton.asm  3-add_node_end.c  README.md
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 0-print_list.c 1-list_len.c 4-free_list.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 4-free_list.c 1-list_len.c 0-print_list.c
3 files to edit
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# ls
100-first.c              2-add_node.c      4-free_list.c  README.md
101-hello_holberton.asm  3-add_node_end.c  lists.h
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 0-print_list.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 1-list_len.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 4-free_list.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 0-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 1-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 3-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 4-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 100-main.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
In file included from 2-add_node.c:1:
lists.h:20:1: error: unknown type name ‘size_t’
   20 | size_t print_list(const list_t *h);
      | ^~~~~~
lists.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#include <stddef.h>
    1 | #ifndef LISTS_H
lists.h:21:1: error: unknown type name ‘size_t’
   21 | size_t list_len(const list_t *h);
      | ^~~~~~
lists.h:21:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
2-add_node.c: In function ‘add_node’:
2-add_node.c:19:8: error: implicit declaration of function ‘malloc’ [-Werror=implicit-function-declaration]
   19 |  new = malloc(sizeof(list_t));
      |        ^~~~~~
2-add_node.c:19:8: error: incompatible implicit declaration of built-in function ‘malloc’ [-Werror]
2-add_node.c:3:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘malloc’
    2 | #include <string.h>
  +++ |+#include <stdlib.h>
    3 | 
2-add_node.c:26:3: error: implicit declaration of function ‘free’ [-Werror=implicit-function-declaration]
   26 |   free(new);
      |   ^~~~
2-add_node.c:26:3: error: incompatible implicit declaration of built-in function ‘free’ [-Werror]
2-add_node.c:26:3: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
cc1: all warnings being treated as errors
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# clear
#include <stdio.h>
#include <stdio.h>
 * @head: A pointer to the head of the list_t list.
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c

========== 2-add_node.c ==========
2-add_node.c:13: WARNING: Missing a blank line after declarations
2-add_node.c:28: WARNING: Missing a blank line after declarations
total: 0 errors, 2 warnings, 37 lines checked
_strlen
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c

========== 2-add_node.c ==========
2-add_node.c:13: WARNING: Missing a blank line after declarations
2-add_node.c:28: WARNING: Missing a blank line after declarations
total: 0 errors, 2 warnings, 37 lines checked
_strlen
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c

========== 2-add_node.c ==========
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# ls
0-main.c                 1-list_len.c      3-main.c       lists.h
0-print_list.c           1-main.c          4-free_list.c  README.md
100-first.c              2-add_node.c      4-main.c
100-main.c               2-main.c          a
101-hello_holberton.asm  3-add_node_end.c  b
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
In file included from 2-add_node.c:1:
lists.h:20:1: error: unknown type name ‘size_t’
   20 | size_t print_list(const list_t *h);
      | ^~~~~~
lists.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#include <stddef.h>
    1 | #ifndef LISTS_H
lists.h:21:1: error: unknown type name ‘size_t’
   21 | size_t list_len(const list_t *h);
      | ^~~~~~
lists.h:21:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
2-add_node.c: In function ‘add_node’:
2-add_node.c:19:8: error: implicit declaration of function ‘malloc’ [-Werror=implicit-function-declaration]
   19 |  new = malloc(sizeof(list_t));
      |        ^~~~~~
2-add_node.c:19:8: error: incompatible implicit declaration of built-in function ‘malloc’ [-Werror]
2-add_node.c:3:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘malloc’
    2 | #include <string.h>
  +++ |+#include <stdlib.h>
    3 | 
2-add_node.c:26:3: error: implicit declaration of function ‘free’ [-Werror=implicit-function-declaration]
   26 |   free(new);
      |   ^~~~
2-add_node.c:26:3: error: incompatible implicit declaration of built-in function ‘free’ [-Werror]
2-add_node.c:26:3: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
cc1: all warnings being treated as errors
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
In file included from 3-add_node_end.c:1:
lists.h:20:1: error: unknown type name ‘size_t’
   20 | size_t print_list(const list_t *h);
      | ^~~~~~
lists.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#include <stddef.h>
    1 | #ifndef LISTS_H
lists.h:21:1: error: unknown type name ‘size_t’
   21 | size_t list_len(const list_t *h);
      | ^~~~~~
lists.h:21:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
3-add_node_end.c: In function ‘add_node_end’:
3-add_node_end.c:19:8: error: implicit declaration of function ‘malloc’ [-Werror=implicit-function-declaration]
   19 |  new = malloc(sizeof(list_t));
      |        ^~~~~~
3-add_node_end.c:19:8: error: incompatible implicit declaration of built-in function ‘malloc’ [-Werror]
3-add_node_end.c:3:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘malloc’
    2 | #include <string.h>
  +++ |+#include <stdlib.h>
    3 | 
3-add_node_end.c:26:3: error: implicit declaration of function ‘free’ [-Werror=implicit-function-declaration]
   26 |   free(new);
      |   ^~~~
3-add_node_end.c:26:3: error: incompatible implicit declaration of built-in function ‘free’ [-Werror]
3-add_node_end.c:26:3: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
cc1: all warnings being treated as errors
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
In file included from 3-add_node_end.c:1:
lists.h:20:1: error: unknown type name ‘size_t’
   20 | size_t print_list(const list_t *h);
      | ^~~~~~
lists.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#include <stddef.h>
    1 | #ifndef LISTS_H
lists.h:21:1: error: unknown type name ‘size_t’
   21 | size_t list_len(const list_t *h);
      | ^~~~~~
lists.h:21:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
3-add_node_end.c: In function ‘add_node_end’:
3-add_node_end.c:19:8: error: implicit declaration of function ‘malloc’ [-Werror=implicit-function-declaration]
   19 |  new = malloc(sizeof(list_t));
      |        ^~~~~~
3-add_node_end.c:19:8: error: incompatible implicit declaration of built-in function ‘malloc’ [-Werror]
3-add_node_end.c:3:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘malloc’
    2 | #include <string.h>
  +++ |+#include <stdlib.h>
    3 | 
3-add_node_end.c:26:3: error: implicit declaration of function ‘free’ [-Werror=implicit-function-declaration]
   26 |   free(new);
      |   ^~~~
3-add_node_end.c:26:3: error: incompatible implicit declaration of built-in function ‘free’ [-Werror]
3-add_node_end.c:26:3: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
cc1: all warnings being treated as errors
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
In file included from 3-add_node_end.c:1:
lists.h:20:1: error: unknown type name ‘size_t’
   20 | size_t print_list(const list_t *h);
      | ^~~~~~
lists.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#include <stddef.h>
    1 | #ifndef LISTS_H
lists.h:21:1: error: unknown type name ‘size_t’
   21 | size_t list_len(const list_t *h);
      | ^~~~~~
lists.h:21:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
3-add_node_end.c: In function ‘add_node_end’:
3-add_node_end.c:19:8: error: implicit declaration of function ‘malloc’ [-Werror=implicit-function-declaration]
   19 |  new = malloc(sizeof(list_t));
      |        ^~~~~~
3-add_node_end.c:19:8: error: incompatible implicit declaration of built-in function ‘malloc’ [-Werror]
3-add_node_end.c:3:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘malloc’
    2 | #include <string.h>
  +++ |+#include <stdlib.h>
    3 | 
3-add_node_end.c:26:3: error: implicit declaration of function ‘free’ [-Werror=implicit-function-declaration]
   26 |   free(new);
      |   ^~~~
3-add_node_end.c:26:3: error: incompatible implicit declaration of built-in function ‘free’ [-Werror]
3-add_node_end.c:26:3: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
cc1: all warnings being treated as errors
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# ls
0-main.c                 1-list_len.c      3-main.c       lists.h
0-print_list.c           1-main.c          4-free_list.c  README.md
100-first.c              2-add_node.c      4-main.c
100-main.c               2-main.c          a
101-hello_holberton.asm  3-add_node_end.c  b
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
100-first.c: In function ‘hare’:
100-first.c:12:9: error: expected declaration or statement at end of input
   12 |         "I bore my house upon my back!\n");
#include <stdlib.h>
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git add .
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git commit -m 'task'
[master 7cf5376] task
 12 files changed, 237 insertions(+), 36 deletions(-)
 create mode 100644 0x12-singly_linked_lists/0-main.c
 create mode 100644 0x12-singly_linked_lists/1-main.c
 create mode 100644 0x12-singly_linked_lists/100-main.c
 create mode 100644 0x12-singly_linked_lists/2-main.c
 create mode 100644 0x12-singly_linked_lists/3-main.c
 create mode 100644 0x12-singly_linked_lists/4-main.c
 create mode 100755 0x12-singly_linked_lists/a
 create mode 100755 0x12-singly_linked_lists/b
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git push
Password for 'https://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@github.com': 
warning: redirecting to https://github.com/Ruovagems/alx-low_level_programming.git/
Enumerating objects: 21, done.
Counting objects: 100% (21/21), done.
Delta compression using up to 2 threads
Compressing objects: 100% (15/15), done.
Writing objects: 100% (15/15), 7.12 KiB | 428.00 KiB/s, done.
Total 15 (delta 5), reused 0 (delta 0)
remote: Resolving deltas: 100% (5/5), completed with 2 local objects.
To https://github.com:/Ruovagems/alx-low_level_programming.git
   9e25568..7cf5376  master -> master
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
 * @s : s is a character
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c

========== 2-add_node.c ==========
2-add_node.c:13: ERROR: code indent should use tabs where possible
2-add_node.c:13: WARNING: please, no spaces at the start of a line
2-add_node.c:14: ERROR: code indent should use tabs where possible
2-add_node.c:14: WARNING: please, no spaces at the start of a line
2-add_node.c:15: ERROR: code indent should use tabs where possible
 * @s : s is a character
2-add_node.c:15: WARNING: Missing a blank line after declarations
2-add_node.c:15: WARNING: please, no spaces at the start of a line
2-add_node.c:16: ERROR: code indent should use tabs where possible
2-add_node.c:16: WARNING: please, no spaces at the start of a line
2-add_node.c:17: ERROR: code indent should use tabs where possible
2-add_node.c:17: WARNING: please, no spaces at the start of a line
2-add_node.c:18: ERROR: code indent should use tabs where possible
2-add_node.c:18: WARNING: please, no spaces at the start of a line
2-add_node.c:19: ERROR: code indent should use tabs where possible
2-add_node.c:19: WARNING: please, no spaces at the start of a line
2-add_node.c:20: ERROR: code indent should use tabs where possible
2-add_node.c:20: WARNING: please, no spaces at the start of a line
2-add_node.c:21: ERROR: code indent should use tabs where possible
#include<stdio.h>
2-add_node.c:21: WARNING: please, no spaces at the start of a line
2-add_node.c:22: ERROR: code indent should use tabs where possible
2-add_node.c:22: WARNING: please, no spaces at the start of a line
2-add_node.c:23: ERROR: code indent should use tabs where possible
2-add_node.c:23: WARNING: please, no spaces at the start of a line
2-add_node.c:24: ERROR: code indent should use tabs where possible
2-add_node.c:24: WARNING: please, no spaces at the start of a line
total: 12 errors, 13 warnings, 25 lines checked
/**
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# b
bash: b: command not found
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# 
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 2-add_node.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 2-add_node.c

========== 2-add_node.c ==========
_strlen
add_node
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# rm -r 3-add_node_end.c 100-first.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 100-first.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 100-first.c

========== 100-first.c ==========
myStartupFun
myStartupFun
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# vi 3-add_node_end.c
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# betty 3-add_node_end.c

========== 3-add_node_end.c ==========
_strlen
add_node_end
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git add .
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# gir
bash: gir: command not found
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git commit -m 'task 2,3,5'
[master 97f6f74] task 2,3,5
 6 files changed, 107 insertions(+), 97 deletions(-)
 rewrite 0x12-singly_linked_lists/2-add_node.c (81%)
 rewrite 0x12-singly_linked_lists/3-add_node_end.c (64%)
 create mode 100755 0x12-singly_linked_lists/c
 create mode 100755 0x12-singly_linked_lists/d
 create mode 100755 0x12-singly_linked_lists/first
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# git push
Password for 'https://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@github.com': 
warning: redirecting to https://github.com/Ruovagems/alx-low_level_programming.git/
Enumerating objects: 14, done.
Counting objects: 100% (14/14), done.
Delta compression using up to 2 threads
Compressing objects: 100% (9/9), done.
Writing objects: 100% (9/9), 8.05 KiB | 4.03 MiB/s, done.
Total 9 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 2 local objects.
To https://github.com:/Ruovagems/alx-low_level_programming.git
   7cf5376..97f6f74  master -> master
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# clear
root@342ed7660a29:/alx-low_level_programming/0x12-singly_linked_lists# cd ..
root@342ed7660a29:/alx-low_level_programming# ls
0x00-hello_world                  0x0A-argc_argv
0x01-variables_if_else_while      0x0B-malloc_free
0x02-functions_nested_loops       0x0C-more_malloc_free
0x03-debugging                    0x0D-preprocessor
0x04-more_functions_nested_loops  0x0E-structures_typedef
0x05-pointers_arrays_strings      0x0F-function_pointers
0x06-pointers_arrays_strings      0x10-variadic_functions
0x07-pointers_arrays_strings      0x12-singly_linked_lists
0x08-recursion                    README.md
0x09-static_libraries
root@342ed7660a29:/alx-low_level_programming# cd ..
root@342ed7660a29:/# ls
alx-low_level_programming      bin   home   libx32  printf-1  srv
alx-pre_course                 boot  js     media   proc      sys
alx-system_engineering-devops  c     lib    mnt     root      tmp
alx-zero_day                   dev   lib32  opt     run       usr
bash                           etc   lib64  printf  sbin      var
root@342ed7660a29:/# cd printf-1
root@342ed7660a29:/printf-1# ls
a.out            check_R13.c  get_print.c      print_r.c
check_b.c        check_r.c    handle_print.c   README.md
check_c.c        check_s.c    main.h           tests
check_d.c        check_u.c    print_address.c  _writechar.c
check_hX.c       check_x.c    print_alpha.c
check_o.c        convertor.c  _printf.c
check_percent.c  get_flag.c   print_i.c
root@342ed7660a29:/printf-1# git pull
remote: Repository not found.
fatal: repository 'https://github.com/Ruovagems/printf-1.git/' not found
root@342ed7660a29:/printf-1# cd ..
root@342ed7660a29:/# git clone https://github.com/nmenkiti19/printf.git
fatal: destination path 'printf' already exists and is not an empty directory.
root@342ed7660a29:/# rm -r printf
root@342ed7660a29:/# ls
alx-low_level_programming      bin   home   libx32    proc  sys
Handle the following length modifiers for non-custom conversion specifiers:
l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
h : converts d, i, u, o, x, X conversions in long signed or unsigned ints
10. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.
11. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.
12. It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers.
13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection]

Handle the - flag character for non-custom conversion specifiers.
14. Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:
r : prints the reversed string
15. The flood of print has turned reading into a process of gulping rather than savoring

Handle the following custom conversion specifier:
R : prints the rot13'ed string
16. *

All the above options work well together.

AUTHORS:- KELECHUKWU FAVOUR and NGOZI MENKITI
