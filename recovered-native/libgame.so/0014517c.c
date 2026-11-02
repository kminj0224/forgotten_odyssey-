/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014517c  Symbol: enableRetinaDisplay */

/* cocos2d::CCDirector::enableRetinaDisplay(bool) */

uint cocos2d::CCDirector::enableRetinaDisplay(bool param_1)

{
  int iVar1;
  CCDirector *this;
  int iVar2;
  uint uVar3;
  CCObject *this_00;
  int in_r1;
  float extraout_s0;
  float fVar4;
  
  this = (CCDirector *)(uint)param_1;
  if (in_r1 == 0) {
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x74),0x3f800000);
  }
  else {
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x74),0x40000000);
  }
  uVar3 = (uint)(in_r1 != 0);
  if ((iVar2 == 0) && (uVar3 = CCEGLView::canSetContentScaleFactor(), uVar3 != 0)) {
    setContentScaleFactor(this,extraout_s0);
    CCTextureCache::purgeSharedTextureCache();
    if (*(CCObject **)(this + 0x34) != (CCObject *)0x0) {
      fVar4 = (float)CCObject::release(*(CCObject **)(this + 0x34));
      iVar1 = DAT_00145208;
      iVar2 = DAT_00145204;
      *(undefined4 *)(this + 0x34) = 0;
      this_00 = (CCObject *)
                CCLabelTTF::labelWithString
                          ((char *)(iVar2 + 0x1451da),(char *)(iVar1 + 0x1451dc),fVar4);
      *(CCObject **)(this + 0x34) = this_00;
      CCObject::retain(this_00);
    }
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x74),0x40000000);
    uVar3 = 1;
    if (iVar2 == 0) {
      this[0x89] = (CCDirector)0x0;
    }
    else {
      this[0x89] = (CCDirector)0x1;
    }
  }
  return uVar3;
}


