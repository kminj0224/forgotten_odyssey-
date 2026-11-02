/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b958  Symbol: update */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012b97e) */
/* WARNING: Removing unreachable block (ram,0x0012b97e) */
/* GameScene::update(float) */

float GameScene::update(float param_1)

{
  undefined4 in_r1;
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  float extraout_s0;
  undefined8 uVar4;
  
  iVar2 = DAT_0012ba78 + 0x12b964;
  **(undefined4 **)(iVar2 + DAT_0012ba7c) = in_r1;
  if (**(int **)(iVar2 + DAT_0012ba80) == 0) {
    if (**(int **)(iVar2 + DAT_0012ba84) - 2U < 0x15) {
                    /* WARNING: Could not recover jumptable at 0x0012b97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(*(code *)(&BYTE_0012b983 +
                               (uint)*(byte *)(**(int **)(iVar2 + DAT_0012ba84) + 0x12b980) * 2))();
      return fVar3;
    }
  }
  if (**(int **)(iVar2 + DAT_0012ba9c) != -1) {
    puVar1 = (undefined8 *)
             (**(int **)(iVar2 + DAT_0012baa0) +
             (**(int **)(iVar2 + DAT_0012ba9c) + DAT_0012baa4) * 8);
    uVar4 = __extendsfdf2(in_r1);
    uVar4 = __adddf3(*(undefined4 *)puVar1,*(undefined4 *)((int)puVar1 + 4),(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
    *puVar1 = uVar4;
    param_1 = extraout_s0;
  }
  return param_1;
}


