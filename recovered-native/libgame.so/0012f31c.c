/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f31c  Symbol: removeChildLayer */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012f342) */
/* WARNING: Removing unreachable block (ram,0x0012f342) */
/* MainScene::removeChildLayer() */

void __thiscall MainScene::removeChildLayer(MainScene *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_0012f404 + 0x12f328 + DAT_0012f408);
  if (*piVar2 != 0) {
    CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::end();
    KG_Remove_Memory();
  }
  iVar1 = *piVar2;
  if (iVar1 - 1U < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x0012f342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&BYTE_0012f347 + (uint)*(byte *)(iVar1 + 0x12f345) * 2))();
    return;
  }
  return;
}


