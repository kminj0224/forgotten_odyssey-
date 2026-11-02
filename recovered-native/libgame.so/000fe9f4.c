/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe9f4  Symbol: Lethal */

/* Hero2::Lethal() */

Hero2 * __thiscall Hero2::Lethal(Hero2 *this)

{
  int *piVar1;
  int *piVar2;
  CCNode *pCVar3;
  int **ppiVar4;
  code *pcVar5;
  undefined4 *puVar6;
  CCNode **ppCVar7;
  char *pcVar8;
  undefined8 uVar9;
  _ccColor4B local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  CCPoint local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  int local_1c;
  
  ppiVar4 = *(int ***)(DAT_000feb08 + 0xfea00);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar4,1);
  uVar9 = (**(code **)(*piVar1 + 0xa8))();
  this[0x118] = (Hero2)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawScript_Lethal((char *)(DAT_000feb14 + 0xfea3c),(char *)(DAT_000feb18 + 0xfea4a),
                             (char *)(DAT_000feb1c + 0xfea4c),(CCNode *)this,local_30,local_2c,1,2,
                             true);
  local_31 = 0xcc;
  local_34 = (_ccColor4B)0x0;
  local_33 = 0;
  local_32 = 0;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_34,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar2 = *ppiVar4;
  uVar9 = (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2,2);
  if (this[0x118] != (Hero2)0x0) {
    pcVar5 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar5)(piVar1,aCStack_28);
  }
  pcVar8 = (char *)(DAT_000feb28 + 0xfeaa6);
  puVar6 = (undefined4 *)(DAT_000feb30 + 0xfeab2);
  uVar9 = vScript_Unit(pcVar8,(char *)(DAT_000feb2c + 0xfeaae),(CCNode *)this,2,1);
  ppCVar7 = (CCNode **)*puVar6;
  pCVar3 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  vDrawScript_Lethal(pcVar8,(char *)(DAT_000feb38 + 0xfeae0),(char *)(DAT_000feb3c + 0xfead4),pCVar3
                     ,local_20,local_1c,10,DAT_000feb40,true);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000feb40);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


