/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ea40  Symbol: FUN_0018ea40 */

void FUN_0018ea40(int *param_1,int param_2,int param_3,int param_4,code *param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 != (int *)0x0) && (param_5 != (code *)0x0)) && (*param_1 != 0)) {
    iVar4 = 0;
    for (iVar5 = 0; iVar5 < param_1[1]; iVar5 = iVar5 + 1) {
      puVar2 = (undefined4 *)(*param_1 + iVar4);
      if (((undefined4 *)(*param_1 + iVar4))[5] != 0) {
        while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar3;
          if (((((param_2 == 0) || (iVar1 = FUN_0019c30c(param_2,puVar3[1]), iVar1 != 0)) &&
               ((param_3 == 0 || (iVar1 = FUN_0019c30c(param_3,puVar3[2]), iVar1 != 0)))) &&
              ((param_4 == 0 || (iVar1 = FUN_0019c30c(param_4,puVar3[3]), iVar1 != 0)))) &&
             (puVar3[4] != 0)) {
            (*param_5)(puVar3[4],param_6,puVar3[1],puVar3[2],puVar3[3]);
          }
        }
      }
      iVar4 = iVar4 + 0x18;
    }
  }
  return;
}


