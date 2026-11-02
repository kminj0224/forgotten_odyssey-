/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013087c  Symbol: Story_Call */

/* Story_Layer::Story_Call() */

void __thiscall Story_Layer::Story_Call(Story_Layer *this)

{
  int iVar1;
  undefined4 uVar2;
  CCTextureCache *pCVar3;
  code *pcVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_00130964 + 0x13088c);
  if (*(int *)(this + 0x148) == 0) {
    if (*(char *)(iVar5 + DAT_00130968) == '\0') {
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      if (iVar1 != 0) {
        pcVar4 = *(code **)(*(int *)this + 0xd0);
        uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
        (*pcVar4)(this,uVar2,1);
      }
      this[0x144] = (Story_Layer)0x0;
      vTransScript(false);
      Lode_BackGround(this);
      Lode_Name(this);
      Lode_Character(this);
      LodeSound();
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00130970 + 0x1308e8),iVar5 + DAT_0013096c);
    }
  }
  else if (*(int *)(this + 0x148) == 1) {
    *(undefined4 *)(this + 0x148) = 2;
  }
  if ((*(char *)(iVar5 + DAT_00130968) != '\0') && (*(int *)(this + 0x148) == 0)) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_00130974 + 0x130944));
  }
  pCVar3 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar3);
  pCVar3 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar3);
  return;
}


