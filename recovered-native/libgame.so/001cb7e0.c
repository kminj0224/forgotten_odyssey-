/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb7e0  Symbol: FUN_001cb7e0 */

undefined8 *
FUN_001cb7e0(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = FUN_001cb4b8(param_2);
  if ((iVar1 != 0) &&
     (uVar4 = FUN_00208064(param_2 + 0x24,param_5,param_3,param_4,param_5),
     (int)((ulonglong)uVar4 >> 0x20) != -1 || (int)uVar4 != -1)) {
    uVar3 = *(undefined4 *)(param_2 + 0x58);
    uVar2 = *(undefined4 *)(param_2 + 0x3c);
    *param_1 = uVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined *)(param_2 + 0x45) = 0;
    *(undefined *)(param_2 + 0x46) = 0;
    *(undefined4 *)(param_2 + 100) = uVar3;
    *(undefined4 *)(param_2 + 0x60) = uVar3;
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x34) = param_6;
    *(undefined4 *)(param_1 + 1) = param_6;
  }
  return param_1;
}


