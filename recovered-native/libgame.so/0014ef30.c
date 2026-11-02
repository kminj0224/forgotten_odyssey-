/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ef30  Symbol: recreateLabel */

/* cocos2d::CCMenuItemFont::recreateLabel() */

void __thiscall cocos2d::CCMenuItemFont::recreateLabel(CCMenuItemFont *this)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  float fVar5;
  
  piVar1 = *(int **)(this + 0x118);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(DAT_0014ef84 + 0x14ef48),
                                   *(undefined4 *)(DAT_0014ef88 + 0x14ef4a),0xfffffffe);
  }
  pcVar2 = (char *)(**(code **)(*piVar1 + 4))();
  pcVar4 = *(char **)(this + 0x128);
  fVar5 = (float)__floatunsisf(*(undefined4 *)(this + 0x124));
  uVar3 = CCLabelTTF::labelWithString(pcVar2,pcVar4,fVar5);
  (**(code **)(*(int *)this + 0x10c))(this,uVar3);
  return;
}


