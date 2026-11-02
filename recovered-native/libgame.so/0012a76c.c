/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012a76c  Symbol: Start_Loding */

/* GameScene::Start_Loding() */

void __thiscall GameScene::Start_Loding(GameScene *this)

{
  char cVar1;
  short sVar2;
  CCObject *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_0012a810 + 0x12a778;
  iVar5 = **(int **)(iVar6 + DAT_0012a814);
  iVar4 = **(int **)(iVar6 + DAT_0012a818);
  cVar1 = *(char *)(iVar5 + iVar4 + DAT_0012a81c + 4);
  if (cVar1 == '\x05') {
    sVar2 = *(short *)((*(char *)(iVar5 + iVar4 * 0x6c + DAT_0012a824) + 0x21) * 2 +
                      *(int *)(iVar6 + DAT_0012a828));
  }
  else {
    sVar2 = *(short *)((*(char *)(iVar5 + cVar1 * 0xc + iVar4 * 0x6c + DAT_0012a82c) + 0x16) * 2 +
                      *(int *)(iVar6 + DAT_0012a830));
  }
  **(int **)(iVar6 + DAT_0012a820) = (int)sVar2;
  **(GameScene ***)(iVar6 + DAT_0012a834) = this;
  pCVar3 = (CCObject *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012a838 + 0x12a7dc));
  **(CCObject ***)(iVar6 + DAT_0012a83c) = pCVar3;
  cocos2d::CCObject::retain(pCVar3);
  pCVar3 = (CCObject *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012a840 + 0x12a7ee));
  **(CCObject ***)(iVar6 + DAT_0012a844) = pCVar3;
  cocos2d::CCObject::retain(pCVar3);
  pCVar3 = (CCObject *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012a848 + 0x12a800));
  **(CCObject ***)(iVar6 + DAT_0012a84c) = pCVar3;
  cocos2d::CCObject::retain(pCVar3);
  return;
}


