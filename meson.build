project('add', 'cpp')
src = ['src/main.cc', 'src/add.cc']
exe = 'one_plus_one'

gtest_proj = subproject('gtest')
gtest = gtest_proj.get_variable('gtest_main_dep')
test_src = ['tests/gtest_all.cc', 'src/add.cc']
test_exe = executable(
  'gtest_all',
  test_src,
  dependencies: gtest,
  include_directories: 'src'
)
test('gtest', test_exe)

executable(exe, src)
