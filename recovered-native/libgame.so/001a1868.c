/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1868  Symbol: FUN_001a1868 */

void FUN_001a1868(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_0017c498();
  if ((param_3 != 0) && (iVar1 = FUN_0018fa4c(param_1,0), iVar1 != 0)) {
    if ((param_2 == 0) || (*(int *)(param_2 + 4) != 0xd)) {
      FUN_001a17bc(iVar1,param_2,param_3,0,1,0);
    }
    else {
      FUN_0019b2d4(iVar1,param_2,param_3,0);
    }
    FUN_001906f8(iVar1);
  }
  return;
}


