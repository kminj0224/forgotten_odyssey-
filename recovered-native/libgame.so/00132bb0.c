/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00132bb0  Symbol: Story_Call */

/* Ending_Layer::Story_Call() */

void __thiscall Ending_Layer::Story_Call(Ending_Layer *this)

{
  int iVar1;
  undefined4 uVar2;
  CCTextureCache *pCVar3;
  code *pcVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_00132ca8 + 0x132bc0);
  if (*(int *)(this + 0x148) == 0) {
    if (*(char *)(iVar5 + DAT_00132cac) == '\0') {
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      if (iVar1 != 0) {
        pcVar4 = *(code **)(*(int *)this + 0xd0);
        uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
        (*pcVar4)(this,uVar2,1);
      }
      this[0x144] = (Ending_Layer)0x0;
      vTransScript(false);
      Lode_BackGround(this);
      Lode_Name(this);
      Lode_Character(this);
      LodeSound();
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00132cb4 + 0x132c20),iVar5 + DAT_00132cb0);
    }
  }
  else if (*(int *)(this + 0x148) == 1) {
    *(undefined4 *)(this + 0x148) = 2;
  }
  if ((*(char *)(iVar5 + DAT_00132cac) != '\0') && (*(int *)(this + 0x148) == 0)) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_00132cb8 + 0x132c70));
  }
  pCVar3 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar3);
  pCVar3 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar3);
  return;
}


