/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172b6c  Symbol: FUN_00172b6c */

void FUN_00172b6c(int param_1,int param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_00172bfc + 0x172b80 + DAT_00172c00;
  iVar3 = 0;
  iVar5 = 0;
  do {
    bVar1 = *(byte *)(param_1 + iVar3 + 0x1e0);
    uVar4 = (uint)bVar1;
    iVar3 = iVar3 + 1;
    if ((uVar4 - 0x5b < 6) || (0x39 < uVar4 - 0x41)) {
      *(undefined *)(param_2 + iVar5) = 0x5b;
      *(undefined *)(param_2 + iVar5 + 1) = *(undefined *)(iVar2 + (uint)(bVar1 >> 4));
      *(undefined *)(param_2 + iVar5 + 2) = *(undefined *)(iVar2 + (uVar4 & 0xf));
      *(undefined *)(param_2 + iVar5 + 3) = 0x5d;
      iVar5 = iVar5 + 4;
    }
    else {
      *(byte *)(param_2 + iVar5) = bVar1;
      iVar5 = iVar5 + 1;
    }
  } while (iVar3 != 4);
  if (param_3 == (void *)0x0) {
    *(undefined *)(param_2 + iVar5) = 0;
  }
  else {
    *(undefined *)(param_2 + iVar5) = 0x3a;
    *(undefined *)(param_2 + iVar5 + 1) = 0x20;
    __dest = (void *)(param_2 + iVar5 + 2);
    memcpy(__dest,param_3,0x40);
    *(undefined *)((int)__dest + 0x3f) = 0;
  }
  return;
}


