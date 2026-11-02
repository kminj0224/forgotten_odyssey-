/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a40e8  Symbol: FUN_001a40e8 */

void FUN_001a40e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_1a;
  
  uVar5 = DAT_001a41dc;
  iVar6 = DAT_001a41d0 + 0x1a40f4;
  iVar7 = iVar6 + DAT_001a41d4;
  if (*(int *)(iVar7 + 0xc) == 0) {
    uVar4 = (***(code ***)(iVar6 + DAT_001a41d8))(200);
    *(undefined4 *)(iVar7 + 0xc) = uVar4;
    local_1a = (char)uVar5;
    if (local_1a == '\x12') {
      *(undefined4 *)(iVar6 + DAT_001a41e0) = 0;
    }
    else if (local_1a == '4') {
      *(undefined4 *)(iVar6 + DAT_001a41e0) = 1;
    }
    else {
      FUN_001a39bc(1,iVar6 + DAT_001a41e4,0);
    }
    iVar1 = DAT_001a41f8;
    iVar7 = DAT_001a41f4;
    iVar8 = iVar6 + DAT_001a41d4;
    if (*(int *)(iVar8 + 0xc) == 0) {
      FUN_001a40d0(iVar6 + DAT_001a41e8);
    }
    else {
      FUN_001a44c0(iVar6 + DAT_001a41f0,iVar6 + DAT_001a41ec);
      uVar5 = FUN_001a44c0(iVar6 + iVar7,iVar6 + iVar1,iVar6 + DAT_001a41fc);
      iVar7 = DAT_001a4200;
      *(undefined4 *)(iVar8 + 0x18) = uVar5;
      uVar5 = FUN_001a44c0(iVar6 + DAT_001a4208,iVar6 + DAT_001a4204,iVar6 + iVar7);
      iVar9 = DAT_001a4210;
      iVar7 = DAT_001a420c;
      *(undefined4 *)(iVar8 + 0x1c) = uVar5;
      iVar3 = DAT_001a421c;
      iVar2 = DAT_001a4218;
      iVar8 = DAT_001a4214;
      FUN_001a44c0(iVar6 + iVar9,iVar6 + iVar1,iVar6 + iVar7);
      FUN_001a44c0(iVar6 + iVar8,iVar6 + iVar2,iVar6 + iVar3);
      iVar8 = iVar6 + DAT_001a4220;
      iVar9 = iVar6 + DAT_001a4224;
      FUN_001a44c0(iVar6 + DAT_001a4228,iVar8,iVar9);
      iVar1 = DAT_001a4234;
      iVar7 = DAT_001a4230;
      FUN_001a44c0(iVar6 + DAT_001a422c,iVar8,iVar9);
      FUN_001a44c0(iVar6 + iVar7,0,*(undefined4 *)(iVar6 + iVar1));
      FUN_001a45b0();
    }
  }
  return;
}


