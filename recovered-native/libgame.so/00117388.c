/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00117388  Symbol: Get_Monster_HP */

/* Get_Monster_HP(int) */

undefined4 Get_Monster_HP(int param_1)

{
  void *__src;
  size_t __n;
  int iVar1;
  int iVar2;
  undefined4 auStack_a8 [40];
  
  iVar1 = **(int **)(DAT_00117444 + 0x11739c) + -1 + (**(int **)(DAT_00117440 + 0x117394) + -1) * 10
  ;
  iVar2 = 0;
  if (1 < iVar1) {
    iVar2 = iVar1 >> 1;
  }
  if (**(int **)(DAT_00117440 + 0x117394) == 9) {
    iVar2 = 0x27;
  }
  if (param_1 == 0) {
    iVar1 = DAT_00117448 + 0x1173be;
LAB_001173ea:
    __src = (void *)(iVar1 + 0x30);
  }
  else if (param_1 == 1) {
    __src = (void *)(DAT_0011744c + 0x117418);
  }
  else if (param_1 == 2) {
    __src = (void *)((int)&DAT_00117444 + DAT_00117450);
  }
  else if (param_1 == 3) {
    __src = (void *)(DAT_00117454 + 0x1173f0);
  }
  else {
    if (param_1 == 4) {
      iVar1 = DAT_00117458 + 0x1173ec;
      goto LAB_001173ea;
    }
    if (param_1 == 5) {
      __n = 0x50;
      __src = (void *)((int)&DAT_0011744c + DAT_0011745c);
      goto LAB_00117430;
    }
    if (param_1 == 6) {
      __src = (void *)(DAT_00117460 + 0x117428);
    }
    else if (param_1 == 7) {
      __src = (void *)((int)&DAT_00117454 + DAT_00117464);
    }
    else if (param_1 == 8) {
      __src = (void *)(DAT_00117468 + 0x117480);
    }
    else {
      if (param_1 != 9) {
        return 0;
      }
      __src = (void *)(DAT_0011746c + 0x11742e);
    }
  }
  __n = 0xa0;
LAB_00117430:
  memcpy(auStack_a8,__src,__n);
  return auStack_a8[iVar2];
}


