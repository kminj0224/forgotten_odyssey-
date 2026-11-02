/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb458  Symbol: vTransScript */

/* vTransScript(bool) */

void vTransScript(bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(DAT_000cb5cc + 0xcb464);
  if (((*(char *)((int)piVar4 + DAT_000cb5d0) == '\0') &&
      (((param_1 || (*(char *)((int)piVar4 + DAT_000cb5d4) == '\0')) &&
       (iVar5 = *piVar4, iVar5 != 0)))) &&
     (iVar2 = *(int *)((int)piVar4 + DAT_000cb5d8), iVar2 <= DAT_000cb5dc)) {
    iVar3 = piVar4[iVar2 + 2];
    iVar1 = piVar4[iVar2 + 1];
    *(undefined *)((int)piVar4 + DAT_000cb5e0) = 1;
    iVar2 = DAT_000cb5e8;
    *(undefined4 *)(DAT_000cb5e4 + 0xcb4b6) = 0xffffffff;
    *(undefined4 *)(DAT_000cb5ec + 0xcb4be) = 0xffffffff;
    if (iVar1 < iVar3 + -2) {
      if ((*(byte *)(iVar5 + iVar1) != 0xd) || (*(char *)(iVar5 + iVar1 + 1) != '\n')) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(iVar2 + 0xcb4bc),(uint)*(byte *)(iVar5 + iVar1));
      }
    }
    iVar5 = *(int *)((int)piVar4 + DAT_000cb5d8) + 1;
    *(int *)((int)piVar4 + DAT_000cb5d8) = iVar5;
    if (piVar4[0x560] <= iVar5) {
      *(undefined *)((int)piVar4 + DAT_000cb5d0) = 1;
    }
  }
  return;
}


