/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f424  Symbol: vMainProc */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012f43e) */
/* WARNING: Removing unreachable block (ram,0x0012f43e) */
/* MainScene::vMainProc(float) */

void __thiscall MainScene::vMainProc(MainScene *this,float param_1)

{
  undefined4 in_r1;
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = DAT_0012f514;
  removeChildLayer(this);
  iVar2 = iVar2 + 0x12f436;
  if (**(int **)(iVar2 + DAT_0012f518) - 1U < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x0012f43e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&BYTE_0012f443 + (uint)*(byte *)(**(int **)(iVar2 + DAT_0012f518) + 0x12f441) * 2))()
    ;
    return;
  }
  if (**(int **)(iVar2 + DAT_0012f538) != -1) {
    puVar1 = (undefined8 *)
             (**(int **)(iVar2 + DAT_0012f53c) +
             (**(int **)(iVar2 + DAT_0012f538) + DAT_0012f540) * 8);
    uVar3 = __extendsfdf2(in_r1);
    uVar3 = __adddf3(*(undefined4 *)puVar1,*(undefined4 *)((int)puVar1 + 4),(int)uVar3,
                     (int)((ulonglong)uVar3 >> 0x20));
    *puVar1 = uVar3;
  }
  return;
}


