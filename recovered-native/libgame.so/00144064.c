/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144064  Symbol: CCRectFromString */

/* cocos2d::CCRectFromString(char const*) */

cocos2d * __thiscall cocos2d::CCRectFromString(cocos2d *this,char *param_1)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  char *__nptr_02;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s3;
  undefined auStack_54 [4];
  int local_50;
  undefined auStack_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  char **local_40;
  char **local_3c;
  char **local_38;
  char **local_34;
  char **local_30;
  char **local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  uVar4 = *(undefined4 *)(DAT_001441e0 + 0x144074);
  uVar5 = *(undefined4 *)(DAT_001441e0 + 0x144078);
  puVar6 = (undefined4 *)(DAT_001441e0 + 0x14407c);
  *(undefined4 *)this = *(undefined4 *)(DAT_001441e0 + 0x144070);
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = *puVar6;
  if (param_1 != (char *)0x0) {
    FUN_001eed40(&local_50,param_1,auStack_54);
    iVar2 = FUN_001ece70(&local_50,0x7b,0);
    iVar3 = FUN_001ece70(&local_50,0x7d,0);
    if ((iVar3 != -1) && (iVar3 = FUN_001ece70(&local_50,0x7d,iVar3 + 1), iVar3 != -1)) {
      iVar3 = FUN_001ece70(&local_50,0x7d,iVar3 + 1);
    }
    if (iVar3 != -1) {
      ppcVar1 = (char **)(uint)(iVar2 + 1 == 0);
      if (ppcVar1 == (char **)0x0) {
        FUN_001eebe0(auStack_4c,&local_50,iVar2 + 1,(iVar3 - iVar2) + -1);
        FUN_001ee874(&local_50,auStack_4c);
        FUN_001ed6b8(auStack_4c);
        iVar2 = FUN_001ece70(&local_50,0x7d,0);
        if ((iVar2 != -1) && (iVar2 = FUN_001ece70(&local_50,0x2c,iVar2), iVar2 != -1)) {
          FUN_001eebe0(&local_48,&local_50,0,iVar2);
          FUN_001eebe0(&local_44,&local_50,iVar2 + 1,*(int *)(local_50 + -0xc) - iVar2);
          local_40 = ppcVar1;
          local_3c = ppcVar1;
          local_38 = ppcVar1;
          iVar2 = FUN_00143f1c(local_48,&local_40);
          if (iVar2 != 0) {
            local_34 = ppcVar1;
            local_30 = ppcVar1;
            local_2c = ppcVar1;
            iVar2 = FUN_00143f1c(local_44,&local_34);
            if (iVar2 != 0) {
              __nptr = *local_40;
              strtod(__nptr,(char **)0x0);
              __nptr_00 = local_40[1];
              strtod(__nptr_00,(char **)0x0);
              __nptr_01 = *local_34;
              strtod(__nptr_01,(char **)0x0);
              __nptr_02 = local_34[1];
              strtod(__nptr_02,(char **)0x0);
              __truncdfsf2(__nptr,extraout_r1);
              __truncdfsf2(__nptr_00,extraout_r1_00);
              __truncdfsf2(__nptr_01,extraout_r1_01);
              uVar7 = __truncdfsf2(__nptr_02,extraout_r1_02);
              CCRect::CCRect((CCRect *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),
                             extraout_s2,extraout_s3);
              *(undefined4 *)this = local_28;
              *(undefined4 *)(this + 4) = uStack_24;
              *(undefined4 *)(this + 8) = uStack_20;
              *(undefined4 *)(this + 0xc) = local_1c;
            }
            std::
            vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
            ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                       *)&local_34);
          }
          std::
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
          ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                     *)&local_40);
          FUN_001ed6b8(&local_44);
          FUN_001ed6b8(&local_48);
        }
      }
    }
    FUN_001ed6b8(&local_50);
  }
  return this;
}


