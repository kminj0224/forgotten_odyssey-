/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143f1c  Symbol: FUN_00143f1c */

undefined4 FUN_00143f1c(int param_1,int **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  basic_string bStack_20;
  basic_string abStack_1c [2];
  
  if (param_1 != 0) {
    FUN_001eed40(&local_2c,param_1,auStack_30);
    if (*(int *)(local_2c + -0xc) != 0) {
      iVar1 = FUN_001ece70(&local_2c,0x7b,0);
      iVar2 = FUN_001ece70(&local_2c,0x7d,0);
      if (((iVar2 != -1) && (iVar1 + 1 != 0)) && (iVar1 <= iVar2)) {
        FUN_001eebe0(&local_28,&local_2c,iVar1 + 1,(iVar2 - iVar1) + -1);
        if (*(int *)(local_28 + -0xc) != 0) {
          iVar1 = FUN_001ece70(&local_28,0x7b,0);
          iVar2 = FUN_001ece70(&local_28,0x7d,0);
          if ((iVar2 == -1) && ((iVar1 + 1) - iVar1 == (uint)(iVar1 + 1 == 0))) {
            FUN_001ee80c(&local_24,&local_28);
            iVar2 = DAT_00144060 + 0x143fb2;
            iVar1 = 0;
            while (iVar3 = FUN_001ece40(&local_24,iVar2,iVar1), iVar3 != -1) {
              FUN_001eebe0(abStack_1c,&local_24,iVar1,iVar3 - iVar1);
              std::
              vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
              ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                           *)param_2,abStack_1c);
              FUN_001ed6b8(abStack_1c);
              iVar1 = iVar3 + 1;
            }
            FUN_001eebe0(&bStack_20,&local_24,iVar1,*(int *)(local_24 + -0xc) - iVar1);
            std::
            vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
            ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                         *)param_2,&bStack_20);
            FUN_001ed6b8(&bStack_20);
            FUN_001ed6b8(&local_24);
            piVar4 = *param_2;
            piVar6 = param_2[1];
            piVar5 = piVar4;
            if ((((int)piVar6 - (int)piVar4 >> 2 == 2) && (*(int *)(*piVar4 + -0xc) != 0)) &&
               (*(int *)(piVar4[1] + -0xc) != 0)) {
              FUN_001ed6b8(&local_28);
              FUN_001ed6b8(&local_2c);
              return 1;
            }
            for (; piVar5 != piVar6; piVar5 = piVar5 + 1) {
              FUN_001ed6b8(piVar5);
            }
            param_2[1] = piVar4;
          }
        }
        FUN_001ed6b8(&local_28);
      }
    }
    FUN_001ed6b8(&local_2c);
  }
  return 0;
}


