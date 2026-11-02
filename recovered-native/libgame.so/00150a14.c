/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150a14  Symbol: initWithWidthAndHeight */

/* cocos2d::CCRenderTexture::initWithWidthAndHeight(int, int, cocos2d::CCTexture2DPixelFormat) */

int * __thiscall
cocos2d::CCRenderTexture::initWithWidthAndHeight
          (CCRenderTexture *this,int param_1,int param_2,CCTexture2DPixelFormat param_3)

{
  int iVar1;
  CCDirector *pCVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  CCTexture2DPixelFormat CVar8;
  size_t __size;
  int **ppiVar9;
  int *piVar10;
  undefined8 uVar11;
  CCSize aCStack_20 [3];
  
  CCConfiguration::sharedConfiguration();
  iVar1 = CCConfiguration::getGlesVersion();
  piVar10 = (int *)0x0;
  if (1 < iVar1) {
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    CCDirector::getContentScaleFactor(pCVar2);
    iVar1 = __fixsfsi();
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    CCDirector::getContentScaleFactor(pCVar2);
    iVar3 = __fixsfsi();
    glGetIntegerv(DAT_00150b74,this + 0x104);
    uVar4 = ccNextPOT(param_1 * iVar1);
    uVar5 = ccNextPOT(param_2 * iVar3);
    __size = uVar4 * uVar5 * 4;
    piVar6 = (int *)malloc(__size);
    piVar10 = piVar6;
    if (piVar6 != (int *)0x0) {
      memset(piVar6,0,__size);
      ppiVar9 = (int **)(this + 0xfc);
      *(CCTexture2DPixelFormat *)(this + 0x110) = param_3;
      piVar10 = (int *)operator_new(0x38);
      CCTexture2D::CCTexture2D((CCTexture2D *)piVar10);
      *(int **)(this + 0x108) = piVar10;
      if (piVar10 != (int *)0x0) {
        CVar8 = *(CCTexture2DPixelFormat *)(this + 0x110);
        __floatsisf(param_1 * iVar1);
        uVar11 = __floatsisf(param_2 * iVar3);
        CCSize::CCSize((CCSize *)aCStack_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
        CCTexture2D::initWithData((CCTexture2D *)piVar10,piVar6,CVar8,uVar4,uVar5,aCStack_20);
        free(piVar6);
        glGenFramebuffersOES(1,this + 0x100);
        glBindFramebufferOES(DAT_00150b78,*(undefined4 *)(this + 0x100));
        uVar7 = (**(code **)(**(int **)(this + 0x108) + 0x20))();
        glFramebufferTexture2DOES(DAT_00150b78,DAT_00150b7c,DAT_00150b80,uVar7,0);
        iVar1 = glCheckFramebufferStatusOES(DAT_00150b78);
        piVar6 = *(int **)(this + 0x108);
        if (iVar1 == DAT_00150b84) {
          CCTexture2D::setAliasTexParameters((CCTexture2D *)piVar6);
          piVar10 = (int *)CCSprite::spriteWithTexture(*(CCTexture2D **)(this + 0x108));
          *ppiVar9 = piVar10;
          CCObject::release(*(CCObject **)(this + 0x108));
          piVar10 = (int *)0x1;
          (**(code **)(**ppiVar9 + 0x34))(*ppiVar9,DAT_00150b88);
          (**(code **)(*(int *)this + 0xc4))(this,*ppiVar9);
          (**(code **)(**ppiVar9 + 0xfc))(*ppiVar9,1);
          glBindFramebufferOES(DAT_00150b78,*(undefined4 *)(this + 0x104));
        }
        else {
          piVar10 = piVar6;
          if (piVar6 != (int *)0x0) {
            piVar10 = (int *)0x0;
            (**(code **)(*piVar6 + 8))(piVar6);
            *(undefined4 *)(this + 0x108) = 0;
          }
        }
      }
    }
  }
  return piVar10;
}


