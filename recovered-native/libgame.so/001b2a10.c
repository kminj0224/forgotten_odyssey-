/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2a10  Symbol: FUN_001b2a10 */

void FUN_001b2a10(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_24 [2];
  
  iVar2 = param_1[0x69];
  if (param_1[0x42] == 0) {
    local_44 = *(undefined4 *)param_1[6];
    local_40 = ((undefined4 *)param_1[6])[1];
    local_3c = *(undefined4 *)(iVar2 + 0xc);
    local_38 = *(undefined4 *)(iVar2 + 0x10);
    uStack_34 = *(undefined4 *)(iVar2 + 0x14);
    local_30 = *(undefined4 *)(iVar2 + 0x18);
    uStack_2c = *(undefined4 *)(iVar2 + 0x1c);
    uStack_28 = *(undefined4 *)(iVar2 + 0x20);
    local_24[0] = param_1;
    iVar1 = FUN_001b2268(&local_44,0x7f,7,local_24);
    if (iVar1 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
    }
    else {
      local_3c = 0;
      local_38 = 0;
    }
    *(undefined4 *)param_1[6] = local_44;
    *(undefined4 *)(param_1[6] + 4) = local_40;
    *(undefined4 *)(iVar2 + 0xc) = local_3c;
    *(undefined4 *)(iVar2 + 0x10) = local_38;
    *(undefined4 *)(iVar2 + 0x14) = uStack_34;
    *(undefined4 *)(iVar2 + 0x18) = local_30;
    *(undefined4 *)(iVar2 + 0x1c) = uStack_2c;
    *(undefined4 *)(iVar2 + 0x20) = uStack_28;
  }
  else {
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)param_1[6];
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1[6] + 4);
    FUN_001b23d4(iVar2);
    FUN_001b2318(iVar2,0x7f,7);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)(iVar2 + 0x70);
    *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar2 + 0x74);
  }
  return;
}


