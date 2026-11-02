/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011d300  Symbol: Market_CPShop_Item1 */

/* New_Notice::Market_CPShop_Item1(int) */

undefined8 __thiscall New_Notice::Market_CPShop_Item1(New_Notice *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = **(int **)(DAT_0011d3a8 + 0x11d30c);
  iVar4 = **(int **)(DAT_0011d3ac + 0x11d310);
  iVar5 = *(int *)((iVar6 + DAT_0011d3b0) * 4 + iVar4);
  piVar8 = (int *)(iVar4 + iVar6 * 2000 + DAT_0011d3b4);
  for (iVar1 = 0; iVar1 < iVar5; iVar1 = iVar1 + 1) {
    if ((*piVar8 == 0xa9) && (param_1 + piVar8[3] <= DAT_0011d3b8)) {
      *(int *)(iVar4 + iVar1 * 0x14 + iVar6 * 2000 + DAT_0011d3bc + 4) = param_1 + piVar8[3];
      goto LAB_0011d396;
    }
    piVar8 = piVar8 + 5;
  }
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (iVar5 <= iVar3) {
      uVar2 = 0;
LAB_0011d3a6:
      return CONCAT44(this,uVar2);
    }
    iVar7 = iVar4 + iVar6 * 2000 + iVar1;
    if ((*(int *)(DAT_0011d3b4 + iVar7) == 0) &&
       (param_1 + *(int *)(iVar7 + DAT_0011d3c0) <= DAT_0011d3b8)) {
      iVar4 = iVar4 + iVar3 * 0x14 + iVar6 * 2000;
      *(undefined4 *)(iVar4 + DAT_0011d3b4) = 0xa9;
      iVar4 = iVar4 + DAT_0011d3bc;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + param_1;
LAB_0011d396:
      uVar2 = 1;
      goto LAB_0011d3a6;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x14;
  } while( true );
}


