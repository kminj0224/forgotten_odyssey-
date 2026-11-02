/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f870  Symbol: unzGetLocalExtrafield */

/* cocos2d::unzGetLocalExtrafield(void*, void*, unsigned int) */

uint cocos2d::unzGetLocalExtrafield(void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_stack_ffffffd4;
  
  if ((param_1 == (void *)0x0) || (iVar4 = *(int *)((int)param_1 + 0xe0), iVar4 == 0)) {
    iVar4 = 0x66;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 0x60);
    uVar3 = *(uint *)(iVar4 + 0x58) - uVar2;
    if (param_2 == (void *)0x0) {
      return uVar3;
    }
    if ((-(uint)(*(uint *)(iVar4 + 0x58) < uVar2) != *(int *)(iVar4 + 100)) || (param_3 <= uVar3)) {
      uVar3 = param_3;
    }
    if (uVar3 == 0) {
      return 0;
    }
    iVar1 = call_zseek64((cocos2d *)(iVar4 + 0x88),*(zlib_filefunc64_32_def_s **)(iVar4 + 0xb4),
                         (void *)(*(uint *)(iVar4 + 0x50) + uVar2),
                         (ulonglong)in_stack_ffffffd4 << 0x20,
                         *(int *)(iVar4 + 0x54) + *(int *)(iVar4 + 100) +
                         (uint)CARRY4(*(uint *)(iVar4 + 0x50),uVar2));
    if ((iVar1 == 0) &&
       (uVar2 = (**(code **)(iVar4 + 0x8c))
                          (*(undefined4 *)(iVar4 + 0xa4),
                           *(zlib_filefunc64_32_def_s **)(iVar4 + 0xb4),param_2,uVar3),
       uVar2 == uVar3)) {
      return uVar3;
    }
    iVar4 = 1;
  }
  return -iVar4;
}


