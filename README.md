# meson-add

## install


```bash
mkdir subprojects
meson wrap install gtest
meson setup build
meson compile -C build
meson test -C build
```
