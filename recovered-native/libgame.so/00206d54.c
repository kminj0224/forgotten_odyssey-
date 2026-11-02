/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206d54  Symbol: FUN_00206d54 */

void FUN_00206d54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  wint_t wVar3;
  uint uVar4;
  undefined *puVar5;
  wint_t *pwVar6;
  undefined4 *puVar7;
  
  puVar5 = (undefined *)(param_1 + 0xc);
  wVar3 = 0;
  do {
    iVar1 = wctob(wVar3);
    wVar3 = wVar3 + 1;
    if (iVar1 == -1) {
      *(undefined *)(param_1 + 0xc) = 0;
      goto LAB_00206d90;
    }
    puVar5 = puVar5 + 1;
    *puVar5 = (char)iVar1;
  } while (wVar3 != 0x80);
  *(undefined *)(param_1 + 0xc) = 1;
LAB_00206d90:
  pwVar6 = (wint_t *)(param_1 + 0x8c);
  iVar1 = 0;
  do {
    wVar3 = btowc(iVar1);
    iVar1 = iVar1 + 1;
    pwVar6 = pwVar6 + 1;
    *pwVar6 = wVar3;
  } while (iVar1 != 0x100);
  puVar5 = (undefined *)(param_1 + 0x48f);
  puVar7 = (undefined4 *)(param_1 + 0x49c);
  uVar4 = 0;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = (char)(1 << (uVar4 & 0xff));
    uVar2 = FUN_00206918(param_1);
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 1;
    *puVar7 = uVar2;
  } while (uVar4 != 0x10);
  return;
}


