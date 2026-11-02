/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001417c0  Symbol: draw */

/* cocos2d::CCAtlasNode::draw() */

void __thiscall cocos2d::CCAtlasNode::draw(CCAtlasNode *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  CCNode::draw();
  glDisableClientState(DAT_00141858);
  uVar2 = __floatunsisf(this[DAT_0014185c]);
  uVar2 = __divsf3(uVar2,DAT_00141860);
  uVar3 = __floatunsisf(this[0x12a]);
  uVar3 = __divsf3(uVar3,DAT_00141860);
  uVar4 = __floatunsisf(this[DAT_00141864]);
  uVar4 = __divsf3(uVar4,DAT_00141860);
  uVar5 = __floatunsisf(this[0x128]);
  uVar5 = __divsf3(uVar5,DAT_00141860);
  glColor4f(uVar2,uVar3,uVar4,uVar5);
  if ((*(int *)(this + 0x120) != 1) || (bVar1 = false, *(int *)(this + 0x124) != DAT_00141868)) {
    glBlendFunc(*(int *)(this + 0x120),*(undefined4 *)(this + 0x124));
    bVar1 = true;
  }
  CCTextureAtlas::drawNumberOfQuads(*(CCTextureAtlas **)(this + 0x118),*(uint *)(this + 300),0);
  if (bVar1) {
    glBlendFunc(1,DAT_00141868);
  }
  glEnableClientState(DAT_00141858);
  return;
}


