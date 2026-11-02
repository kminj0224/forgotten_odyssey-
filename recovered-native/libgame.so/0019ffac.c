/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ffac  Symbol: FUN_0019ffac */

undefined4 FUN_0019ffac(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_24;
  
  iVar3 = DAT_001a0090 + 0x19ffb8;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x18);
  FUN_0017c498();
  iVar5 = *(int *)(param_2 + 0x20);
  if (iVar5 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(iVar5 + 0x3c);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = *(int *)(iVar5 + 0x3c);
    if (iVar2 == 0) goto LAB_0019ffe6;
  }
  else {
    *(int *)(iVar5 + 0x3c) = *(int *)(param_1 + 0x10);
LAB_0019ffe6:
    iVar2 = iVar4;
  }
  bVar7 = iVar5 != 0;
  if (iVar2 != 0) {
    if (bVar7) {
      FUN_0019b378(iVar5,iVar2);
    }
    if (iVar2 != 0) goto LAB_001a001c;
  }
  if (bVar7) {
    iVar2 = FUN_0019b654(iVar5);
  }
  if (iVar2 == 0) {
    iVar2 = iVar3 + DAT_001a0094;
  }
LAB_001a001c:
  if (((iVar4 == 0) && (*(int *)(iVar6 + 0xc) == 0)) && (*(int *)(iVar6 + 0x14) == 0)) {
    iVar3 = FUN_0019fcc4(param_1,iVar2);
    if (iVar3 < 0) {
      *(undefined4 *)(iVar5 + 0x3c) = local_24;
      return 0xffffffff;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FUN_0019ae7c(iVar6,iVar5,param_2,iVar2,(*(uint *)(param_1 + 0x20) & 1) != 0);
  if ((bVar1) && (iVar4 == 0)) {
    FUN_0019ff8c(param_1);
  }
  if (bVar7) {
    *(undefined4 *)(iVar5 + 0x3c) = local_24;
  }
  return 0;
}


