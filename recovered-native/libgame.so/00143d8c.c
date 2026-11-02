/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143d8c  Symbol: ~vector */

/* std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
   >::~vector() */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
* __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::~vector(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
          *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4);
  for (iVar1 = *(int *)this; iVar1 != iVar2; iVar1 = iVar1 + 4) {
    FUN_001ed6b8(iVar1);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  return this;
}


