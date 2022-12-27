# Coding Style
This file specifies the way we write code to maintain readability and cohesion.

## C++ (Based on [Google's cppguide](https://google.github.io/styleguide/cppguide.html))
### C++ Version
Currently, the code targets C++ 17. We should not use C++ 20 or above features. This is subject to change.

### File extensions
In general, we name our C++ header files as `.hpp` and our C++ code files as `.cpp`.
Documents should have the `.md` extension.

### File guard
All header files should have #define guards to prevent multiple inclusion. The format of the symbol name should be _\<PROJECT>\_\<PATH>\_\<FILE>\_H_.

To guarantee uniqueness, they should be based on the full path in a project's source tree. For example, the file `foo/src/bar/baz.hpp` in project `foo` should have the following guard:
```cpp
#ifndef FOO_BAR_BAZ_H_
#define FOO_BAR_BAZ_H_

...

#endif  // FOO_BAR_BAZ_H_
```

### Include what you use
If a source or header file refers to a symbol defined elsewhere, the file should directly include a header file which properly intends to provide a declaration or definition of that symbol. It should not include header files for any other reason.

Do not rely on transitive inclusions. This allows people to remove no-longer-needed `#include` statements from their headers without breaking clients. This also applies to related headers - `foo.cpp` should include `bar.hpp` if it uses a symbol from it even if `foo.hpp` includes `bar.hpp`.

### Namespaces
Place code in namespaces. Do not use _using-directives_ i.e. `using namespace foo`. Avoid inline namespaces.

### Structs vs. Classes 
Use a `struct` only for passive objects that carry data; everything else is a `class`.

### Naming
Prefer Pascal case when naming. Prefix class member variables with `m_`, constants with `c_`, and static variables with `s_`. Do not use prefixes on struct variables.

### Braces
Prefer braces on new lines. 
```cpp
// Good!
if (conditional) 
{
    doWork();
}
```
```cpp
// Bad!
if (conditional) { doWork(); }
```

