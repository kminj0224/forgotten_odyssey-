/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145058  Symbol: setGLDefaultValues */

/* cocos2d::CCDirector::setGLDefaultValues() */

void __thiscall cocos2d::CCDirector::setGLDefaultValues(CCDirector *this)

{
  CCObject *this_00;
  float fVar1;
  
  setAlphaBlending(this,true);
  setDepthTest(this,true);
  setProjection(this,*(ccDirectorProjection *)(this + 0x60));
  fVar1 = (float)glClearColor(0,0,0,0x3f800000);
  if (*(int *)(this + 0x34) == 0) {
    this_00 = (CCObject *)
              CCLabelTTF::labelWithString
                        ((char *)(DAT_0014509c + 0x145090),(char *)(DAT_001450a0 + 0x145092),fVar1);
    *(CCObject **)(this + 0x34) = this_00;
    CCObject::retain(this_00);
  }
  return;
}


