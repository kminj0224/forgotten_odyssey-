/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3b68  Symbol: Add_Cp */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000d3b7c) */
/* WARNING: Removing unreachable block (ram,0x000d3b7c) */
/* In_App_Layer::Add_Cp(int) */

In_App_Layer * __thiscall In_App_Layer::Add_Cp(In_App_Layer *this,int param_1)

{
  int iVar1;
  In_App_Layer *pIVar2;
  
  if (5 < (uint)param_1) {
    return this;
  }
  iVar1 = *(int *)(**(int **)(DAT_000d3ba8 + 0xd3b78) + DAT_000d3bac);
  switch(param_1) {
  case 0:
    pIVar2 = (In_App_Layer *)(iVar1 + 100);
    goto LAB_000d3ba2;
  case 1:
    param_1 = 600;
    break;
  case 2:
    param_1 = (int)DAT_000d3bb0;
    break;
  case 3:
    param_1 = 4000;
    break;
  case 4:
    param_1 = (int)DAT_000d3bb4;
    break;
  case 5:
    param_1 = (int)DAT_000d3bb8;
  }
  pIVar2 = (In_App_Layer *)(param_1 + iVar1);
LAB_000d3ba2:
  *(In_App_Layer **)(**(int **)(DAT_000d3ba8 + 0xd3b78) + DAT_000d3bac) = pIVar2;
  return (In_App_Layer *)param_1;
}


