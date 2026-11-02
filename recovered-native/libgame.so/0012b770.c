/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b770  Symbol: File_Lode_updata */

/* GameScene::File_Lode_updata() */

void __thiscall GameScene::File_Lode_updata(GameScene *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  CCNode *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  code *pcVar8;
  int iVar9;
  char **ppcVar10;
  
  iVar2 = DAT_0012b93c;
  iVar1 = DAT_0012b918;
  iVar9 = *(int *)(this + DAT_0012b918);
  if (iVar9 == 0xf) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b92c + 0x12b824);
    Monster_Loding(this);
  }
  else if (iVar9 < 0x10) {
    if (iVar9 == 5) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
      (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b924 + 0x12b7de);
      BG_Loding(this);
    }
    else if (iVar9 == 10) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
      (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b928 + 0x12b804);
      Effect_Loding_Img(this);
    }
    else {
      if (iVar9 != 0) goto LAB_0012b910;
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
      (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b920 + 0x12b7be);
      Start_Loding(this);
    }
  }
  else if (iVar9 == 0x19) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b934 + 0x12b864);
    UI_Loding_Img(this);
  }
  else if (iVar9 < 0x1a) {
    if (iVar9 != 0x14) {
LAB_0012b910:
      *(int *)(this + DAT_0012b918) = iVar9 + 1;
      return;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b930 + 0x12b844);
    Hero_Loding(this);
  }
  else {
    if (iVar9 != 0x1e) {
      if (iVar9 == 0x23) {
        pcVar8 = *(code **)(*(int *)this + 0xd0);
        uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
        (*pcVar8)(this,uVar6,1);
        pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                  (pcVar7,(bool)((char)DAT_0012b940 + -0x4e));
        ppcVar10 = *(char ***)(iVar2 + 0x12b8b0);
        if (**ppcVar10 == '\0') {
          bVar3 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar3);
        }
        strcpy(*(char **)(DAT_0012b944 + 0x12b8d0),(char *)(DAT_0012b948 + 0x12b8d2));
        if (*(int *)(*ppcVar10 + (**(int **)(DAT_0012b94c + 0x12b8e0) + DAT_0012b950) * 4 + 4) == 2)
        {
          uVar6 = Tutorial_Layer::node();
          (**(code **)(*(int *)this + 0xcc))(this,uVar6,0x16,0x16);
          return;
        }
        **(undefined4 **)(DAT_0012b954 + 0x12b90c) = 1;
        return;
      }
      goto LAB_0012b910;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b91c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    (**(code **)(*piVar5 + 0x11c))(piVar5,DAT_0012b938 + 0x12b884);
    Lode_Unit(this);
  }
  *(int *)(this + iVar1) = *(int *)(this + iVar1) + 1;
  return;
}


