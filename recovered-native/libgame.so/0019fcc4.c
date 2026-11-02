/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fcc4  Symbol: FUN_0019fcc4 */

undefined4 FUN_0019fcc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = DAT_0019fd20 + 0x19fcd0;
  if (((param_2 == 0) || (*(int *)(iVar3 + 0xc) != 0)) || (*(int *)(iVar3 + 0x14) != 0)) {
LAB_0019fd1c:
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_001a4238(param_2);
    *(int *)(iVar3 + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_0019fa0c(DAT_0019fd24,0,param_2);
    }
    else {
      iVar1 = FUN_00189cd8();
      *(int *)(iVar3 + 0x14) = iVar1;
      if (iVar1 != 0) {
        FUN_001a39f0(*(undefined4 *)(iVar3 + 0xc),iVar1,0);
        goto LAB_0019fd1c;
      }
      FUN_001a3260();
      FUN_0019fcac(iVar4 + DAT_0019fd28);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


