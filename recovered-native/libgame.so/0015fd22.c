/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fd22  Symbol: unzGetGlobalComment */

/* cocos2d::unzGetGlobalComment(void*, char*, unsigned long) */

ulong cocos2d::unzGetGlobalComment(void *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint in_stack_ffffffdc;
  
  if (param_1 == (void *)0x0) {
    iVar1 = 0x66;
  }
  else {
    uVar3 = *(uint *)((int)param_1 + 0x40);
    iVar1 = call_zseek64((cocos2d *)param_1,*(zlib_filefunc64_32_def_s **)((int)param_1 + 0x30),
                         (void *)(*(uint *)((int)param_1 + 0x68) + 0x16),
                         (ulonglong)in_stack_ffffffdc << 0x20,
                         *(int *)((int)param_1 + 0x6c) +
                         (uint)(0xffffffe9 < *(uint *)((int)param_1 + 0x68)));
    if (iVar1 == 0) {
      uVar4 = param_3;
      if (uVar3 < param_3) {
        uVar4 = uVar3;
      }
      if (uVar4 == 0) {
LAB_0015fd72:
        if (param_2 == (char *)0x0) {
          return uVar4;
        }
        if (param_3 <= *(uint *)((int)param_1 + 0x40)) {
          return uVar4;
        }
        param_2[*(uint *)((int)param_1 + 0x40)] = '\0';
        return uVar4;
      }
      *param_2 = '\0';
      uVar2 = (**(code **)((int)param_1 + 4))
                        (*(undefined4 *)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x30),
                         param_2,uVar4);
      if (uVar2 == uVar4) goto LAB_0015fd72;
    }
    iVar1 = 1;
  }
  return -iVar1;
}


