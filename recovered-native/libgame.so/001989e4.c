/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001989e4  Symbol: FUN_001989e4 */

int FUN_001989e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = DAT_00198b68 + 0x1989f0;
  if ((param_1 == 0) || (iVar4 = *(int *)(param_1 + 0x24), iVar4 == 0)) {
    FUN_00195ba4(param_1,1,iVar6 + DAT_00198b6c,0,0);
    return 0;
  }
  pcVar3 = *(char **)(iVar4 + 0x10);
  if ((*pcVar3 == '&') && (pcVar3[1] == '#')) {
    if ((pcVar3[2] == 'X') || (pcVar3[2] == 'x')) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 3;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
      iVar4 = 0;
      while (uVar5 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10), uVar5 != 0x3b) {
        if (9 < (uVar5 - 0x30 & 0xff)) {
          if ((uVar5 - 0x61 & 0xff) < 6) {
            iVar1 = -0x57;
LAB_00198a74:
            iVar4 = uVar5 + iVar1 + iVar4 * 0x10;
            goto LAB_00198a86;
          }
          if ((uVar5 - 0x41 & 0xff) < 6) {
            iVar1 = -0x37;
            goto LAB_00198a74;
          }
          uVar2 = 6;
LAB_00198ada:
          FUN_00195ba4(param_1,uVar2,iVar6 + DAT_00198b70,0,0);
          break;
        }
        iVar4 = (uVar5 - 0x30) + iVar4 * 0x10;
LAB_00198a86:
        FUN_0017a4a4(param_1);
      }
    }
    else {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      iVar4 = 0;
      while (uVar5 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10), uVar5 != 0x3b) {
        uVar5 = uVar5 - 0x30;
        if (9 < (uVar5 & 0xff)) {
          uVar2 = 7;
          goto LAB_00198ada;
        }
        iVar4 = uVar5 + iVar4 * 10;
        FUN_0017a4a4(param_1);
      }
    }
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == ';') {
      FUN_0017a4a4(param_1);
    }
    if (iVar4 < 0x100) {
      if ((1 < iVar4 - 9U) && (iVar4 != 0xd)) goto LAB_00198b20;
    }
    else if ((DAT_00198b7c < (uint)(iVar4 + DAT_00198b78)) && (DAT_00198b80 < iVar4 - 0x100U)) {
      bVar7 = (uint)(iVar4 + DAT_00198b84) <= DAT_00198b88;
      goto LAB_00198b4e;
    }
    bVar7 = true;
  }
  else {
    iVar4 = 0;
    FUN_00195ba4(param_1,8,iVar6 + DAT_00198b74,0,0);
LAB_00198b20:
    bVar7 = true;
    if (iVar4 < 0x20) {
      bVar7 = false;
    }
  }
LAB_00198b4e:
  if (!bVar7) {
    FUN_0019784c(param_1,iVar6 + DAT_00198b8c,iVar4);
    return 0;
  }
  return iVar4;
}


