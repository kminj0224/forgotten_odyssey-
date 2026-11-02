/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff59c  Symbol: update */

/* Image_Fram::update(float) */

void __thiscall Image_Fram::update(Image_Fram *this,float param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  CCRenderTexture *pCVar5;
  CCTexture2D *pCVar6;
  CCSpriteFrame *pCVar7;
  undefined4 uVar8;
  CCTextureCache *pCVar9;
  undefined4 in_r1;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  CCRect aCStack_38 [4];
  CCRect aCStack_28 [5];
  
  if (*(int **)(this + 0x11c) == (int *)0x0) {
    pCVar9 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::removeUnusedTextures(pCVar9);
    pCVar9 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::removeAllTextures(pCVar9);
    cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::purgeCachedData();
    cocos2d::CCNode::unscheduleUpdate((CCNode *)this);
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x11c) + 0xa8))();
    iVar10 = piVar1[7];
    uVar2 = __addsf3(*(undefined4 *)(this + 0x128),DAT_000ff8c8);
    __mulsf3(uVar2,iVar10);
    iVar3 = __fixsfsi();
    uVar2 = __addsf3(*(undefined4 *)(this + 300),DAT_000ff8c8);
    __mulsf3(uVar2,iVar10);
    iVar10 = __fixsfsi();
    iVar11 = *piVar1;
    piVar1 = *(int **)(this + 0x11c);
    iVar4 = (**(code **)(*piVar1 + 0xa0))(piVar1);
    cocos2d::CCNode::getChildByTag((CCNode *)piVar1,*(int *)(*(int *)(iVar4 * 4 + iVar11) + 0x290));
    iVar4 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar4 == 0) {
      pCVar5 = (CCRenderTexture *)
               cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight(iVar3,iVar10,7);
      *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
      *(CCRenderTexture **)(this + 0x118) = pCVar5;
      uVar2 = __addsf3(*(undefined4 *)(this + 0x124),in_r1);
      *(undefined4 *)(this + 0x124) = uVar2;
      cocos2d::CCRenderTexture::begin(pCVar5);
      (**(code **)(**(int **)(this + 0x11c) + 0xe4))();
      cocos2d::CCRenderTexture::end(*(CCRenderTexture **)(this + 0x118),true);
      piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))();
      cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar6);
      piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))();
      piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
      (**(code **)(*piVar1 + 0x118))();
      cocos2d::CCTexture2D::getContentSize();
      piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
      (**(code **)(*piVar1 + 0x118))();
      uVar13 = cocos2d::CCTexture2D::getContentSize();
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),
                 extraout_s2_00,extraout_s3_00);
      pCVar7 = (CCSpriteFrame *)cocos2d::CCSpriteFrame::frameWithTexture(pCVar6,aCStack_28);
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x390),pCVar7);
      piVar1 = (int *)(**(code **)(*(int *)this + 0x90))(this);
      uVar2 = (**(code **)(*piVar1 + 0xa0))();
      uVar12 = *(undefined4 *)(this + 0x120);
      uVar8 = (**(code **)(**(int **)(this + 0x11c) + 0xa0))();
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000ff8cc + 0xff7ba),uVar2,uVar12,uVar8);
    }
    pCVar5 = (CCRenderTexture *)
             cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight(iVar3,iVar10,7);
    *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
    *(CCRenderTexture **)(this + 0x118) = pCVar5;
    uVar2 = __addsf3(*(undefined4 *)(this + 0x124),in_r1);
    *(undefined4 *)(this + 0x124) = uVar2;
    cocos2d::CCRenderTexture::begin(pCVar5);
    (**(code **)(**(int **)(this + 0x11c) + 0xe4))();
    cocos2d::CCRenderTexture::end(*(CCRenderTexture **)(this + 0x118),true);
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
    pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))();
    cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar6);
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
    pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))();
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
    (**(code **)(*piVar1 + 0x118))();
    cocos2d::CCTexture2D::getContentSize();
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0xe8))();
    (**(code **)(*piVar1 + 0x118))();
    uVar13 = cocos2d::CCTexture2D::getContentSize();
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_38,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2,
               extraout_s3);
    pCVar7 = (CCSpriteFrame *)cocos2d::CCSpriteFrame::frameWithTexture(pCVar6,aCStack_38);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x390),pCVar7);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x118));
  }
  return;
}


