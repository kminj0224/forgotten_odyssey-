/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120d0c  Symbol: init */

/* GameScene::init() */

undefined4 __thiscall GameScene::init(GameScene *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  GameScene *pGVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = cocos2d::CCScheduler::sharedScheduler();
  iVar6 = DAT_00120e8c;
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  iVar6 = iVar6 + 0x120d24;
  puVar2 = *(undefined4 **)(iVar6 + DAT_00120e90);
  *puVar2 = 1;
  *(undefined4 *)(this + DAT_00120e94) = 0;
  **(undefined **)(iVar6 + DAT_00120e98) = 0;
  **(undefined **)(iVar6 + DAT_00120e9c) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ea0) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ea4) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ea8) = 0;
  **(undefined **)(iVar6 + DAT_00120eac) = 0;
  **(undefined4 **)(iVar6 + DAT_00120eb0) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  this[0x110] = (GameScene)0x0;
  this[0x111] = (GameScene)0x0;
  this[0x112] = (GameScene)0x0;
  *(undefined4 *)(this + 0x550) = 0;
  *(undefined4 *)(this + DAT_00120eb4) = 0;
  *(undefined4 *)(this + 0x518) = 0;
  this[DAT_00120eb8] = (GameScene)0x0;
  **(undefined4 **)(iVar6 + DAT_00120ebc) = 0;
  **(undefined **)(iVar6 + DAT_00120ec0) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ec4) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ec8) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ecc) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ed0) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ed4) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ed8) = 0;
  **(undefined4 **)(iVar6 + DAT_00120edc) = 0;
  **(undefined4 **)(iVar6 + DAT_00120ee0) = 0;
  uVar8 = (**(code **)(*(int *)this + 0x114))(this,1);
  **(undefined **)(iVar6 + DAT_00120ee4) = 1;
  **(undefined **)(iVar6 + DAT_00120ef0) = 0;
  **(undefined **)(iVar6 + DAT_00120ef4) = 0;
  **(undefined **)(iVar6 + DAT_00120ef8) = 0;
  uVar8 = cocos2d::CCSize::CCSize
                    ((CCSize *)&local_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  *(undefined4 *)(this + 0x114) = local_40;
  *(undefined4 *)(this + 0x118) = local_3c;
  uVar8 = cocos2d::CCSize::CCSize
                    ((CCSize *)&local_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  puVar3 = *(undefined4 **)(iVar6 + DAT_00120efc);
  *puVar3 = local_38;
  puVar3[1] = local_34;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  iVar1 = DAT_00120f04;
  *(undefined4 *)(this + DAT_00120f04) = local_30;
  *(undefined4 *)(this + iVar1 + 4) = local_2c;
  iVar1 = 0x32;
  **(undefined4 **)(iVar6 + DAT_00120f08) = 0;
  pGVar4 = this;
  do {
    *(undefined4 *)(pGVar4 + 0x130) = 0;
    *(undefined4 *)(pGVar4 + 300) = 0;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(pGVar4 + 0x138) = 0;
    pGVar4 = pGVar4 + 0x14;
  } while (iVar1 != 0);
  uVar5 = 7;
  if (**(int **)(iVar6 + DAT_00120f0c) == 1) {
    uVar5 = 4;
  }
  *puVar2 = uVar5;
  fVar7 = (float)cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  fVar7 = (float)cocos2d::CCNode::schedule
                           ((CCNode *)this,*(_func_void_float **)(iVar6 + DAT_00120f10),fVar7);
  cocos2d::CCNode::schedule((CCNode *)this,*(_func_void_float **)(iVar6 + DAT_00120f14),fVar7);
  return 1;
}


