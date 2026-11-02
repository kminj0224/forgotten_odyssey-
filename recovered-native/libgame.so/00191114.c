/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191114  Symbol: FUN_00191114 */

char * FUN_00191114(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0019116c + 0x19111e;
  iVar5 = iVar4 + DAT_00191170;
  if (*(int *)(iVar5 + 0xc) == 0) {
    *(undefined4 *)(iVar5 + 0xc) = 1;
    uVar2 = FUN_0019c2d0();
    iVar1 = DAT_00191174;
    *(undefined4 *)(iVar5 + 0x10) = uVar2;
    pcVar3 = getenv((char *)(iVar4 + iVar1));
    if (pcVar3 != (char *)0x0) {
      sscanf(pcVar3,(char *)(iVar4 + DAT_00191178),iVar5);
    }
    pcVar3 = getenv((char *)(iVar4 + DAT_0019117c));
    if (pcVar3 != (char *)0x0) {
      sscanf(pcVar3,(char *)(iVar4 + DAT_00191180),iVar4 + DAT_00191170 + 0x14);
      pcVar3 = (char *)0x0;
    }
  }
  else {
    pcVar3 = (char *)0xffffffff;
  }
  return pcVar3;
}


