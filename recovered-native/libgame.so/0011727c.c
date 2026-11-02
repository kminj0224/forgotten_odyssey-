/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011727c  Symbol: setStatePoint */

/* setStatePoint(std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, char const*, char
   const*) */

undefined8
setStatePoint(basic_string param_1,basic_string param_2,int param_3,char *param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  basic_string bStack_1c;
  int iStack_18;
  
  bStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = FUN_001ece40(param_2,param_5,param_4);
  iVar2 = FUN_001ece40(param_2,in_stack_00000004,0);
  FUN_001eebe0(&bStack_1c,param_2,iVar1 + 3,iVar2 - (iVar1 + 3));
  FUN_001ee874(param_3,&bStack_1c);
  FUN_001ed6b8(&bStack_1c);
  FUN_001ee80c(param_1,param_3);
  return CONCAT44(param_1,param_1);
}


