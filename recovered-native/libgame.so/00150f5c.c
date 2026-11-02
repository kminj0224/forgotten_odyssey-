/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150f5c  Symbol: end */

/* cocos2d::CCRenderTexture::end(bool) */

void __thiscall cocos2d::CCRenderTexture::end(CCRenderTexture *this,bool param_1)

{
  int iVar1;
  CCSize *pCVar2;
  int iVar3;
  CCImage *pCVar4;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  
  glBindFramebufferOES(DAT_00151004,*(undefined4 *)(this + 0x104));
  glPopMatrix();
  CCDirector::sharedDirector();
  CCDirector::getDisplaySizeInPixels();
  iVar1 = CCDirector::sharedDirector();
  CCEGLView::setViewPortInPoints
            (*(CCEGLView **)(iVar1 + 0x14),extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  if (param_1) {
    pCVar4 = *(CCImage **)(this + 0x10c);
    if (pCVar4 != (CCImage *)0x0) {
      CCImage::~CCImage(pCVar4);
      operator_delete(pCVar4);
      *(undefined4 *)(this + 0x10c) = 0;
    }
    pCVar2 = (CCSize *)(**(code **)(**(int **)(this + 0x108) + 0x24))();
    iVar1 = __fixsfsi(*pCVar2);
    iVar3 = __fixsfsi(pCVar2[1]);
    pCVar4 = (CCImage *)operator_new(0x14);
    CCImage::CCImage(pCVar4);
    *(CCImage **)(this + 0x10c) = pCVar4;
    iVar1 = getUIImageFromBuffer(this,pCVar4,0,0,iVar1,iVar3);
    if (iVar1 != 0) {
      VolatileTexture::addDataTexture
                (*(CCTexture2D **)(this + 0x108),*(void **)(*(int *)(this + 0x10c) + 0xc),1,pCVar2);
    }
  }
  return;
}


