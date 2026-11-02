/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154378  Symbol: initWithDictionary */

/* cocos2d::CCParticleSystem::initWithDictionary(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>*) */

CCImage * __thiscall
cocos2d::CCParticleSystem::initWithDictionary(CCParticleSystem *this,CCMutableDictionary *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  CCTextureCache *pCVar5;
  uint uVar6;
  CCImage *this_00;
  CCImage *pCVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auStack_30 [4];
  uchar *local_2c;
  CCImage *local_28;
  char *local_24;
  CCPoint aCStack_20 [12];
  
  local_2c = (uchar *)0x0;
  local_28 = (CCImage *)0x0;
  pcVar2 = (char *)FUN_0015432c(DAT_00154728 + 0x154386);
  iVar3 = atoi(pcVar2);
  iVar3 = (**(code **)(*(int *)this + 0x230))(this,iVar3);
  if (iVar3 == 0) {
LAB_001549f8:
    this_00 = (CCImage *)0x0;
    pCVar7 = this_00;
    goto LAB_001549fa;
  }
  FUN_0015432c(DAT_0015472c + 0x1543b0,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x170) = uVar4;
  FUN_0015432c(DAT_00154730 + 0x1543cc,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x174) = uVar4;
  FUN_0015432c(DAT_00154734 + 0x1543e2,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x154) = uVar4;
  pcVar2 = (char *)FUN_0015432c(DAT_00154738 + 0x1543f8,param_1);
  iVar3 = atoi(pcVar2);
  *(int *)(this + 0x1e4) = iVar3;
  pcVar2 = (char *)FUN_0015432c(DAT_0015473c + 0x15440c,param_1);
  iVar3 = atoi(pcVar2);
  *(int *)(this + 0x1e8) = iVar3;
  FUN_0015432c(DAT_00154740 + 0x154420,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x188) = uVar4;
  FUN_0015432c(DAT_00154744 + 0x154438,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x18c) = uVar4;
  FUN_0015432c(DAT_00154748 + 0x154450,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 400) = uVar4;
  FUN_0015432c(DAT_0015474c + 0x154468,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x194) = uVar4;
  FUN_0015432c(DAT_00154750 + 0x154480,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x198) = uVar4;
  FUN_0015432c(DAT_00154754 + 0x154498,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x19c) = uVar4;
  FUN_0015432c(DAT_00154758 + 0x1544b0,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1a0) = uVar4;
  FUN_0015432c(DAT_0015475c + 0x1544c8,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1a4) = uVar4;
  FUN_0015432c(DAT_00154760 + 0x1544e0,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1a8) = uVar4;
  FUN_0015432c(DAT_00154764 + 0x1544f8,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1ac) = uVar4;
  FUN_0015432c(DAT_00154768 + 0x154510,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1b0) = uVar4;
  FUN_0015432c(DAT_0015476c + 0x154528,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1b4) = uVar4;
  FUN_0015432c(DAT_00154770 + 0x154540,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1b8) = uVar4;
  FUN_0015432c(DAT_00154774 + 0x154558,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1bc) = uVar4;
  FUN_0015432c(DAT_00154778 + 0x154570,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1c0) = uVar4;
  FUN_0015432c(DAT_0015477c + 0x154588,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1c4) = uVar4;
  FUN_0015432c(DAT_00154780 + 0x1545a0,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x178) = uVar4;
  FUN_0015432c(DAT_00154784 + 0x1545b6,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x17c) = uVar4;
  FUN_0015432c(DAT_00154788 + 0x1545ce,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x180) = uVar4;
  FUN_0015432c(DAT_0015478c + 0x1545e6,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x184) = uVar4;
  FUN_0015432c(DAT_00154790 + 0x1545fe,param_1);
  uVar9 = FUN_00153578();
  FUN_0015432c(DAT_00154794 + 0x154610,param_1);
  uVar10 = FUN_00153578();
  pcVar8 = *(code **)(*(int *)this + 0x3c);
  __truncdfsf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = __truncdfsf2((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar8)(this,aCStack_20);
  FUN_0015432c(DAT_00154798 + 0x154648,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x160) = uVar4;
  FUN_0015432c(DAT_0015479c + 0x15465e,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x164) = uVar4;
  FUN_0015432c(DAT_001547a0 + 0x154674,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1c8) = uVar4;
  FUN_0015432c(DAT_001547a4 + 0x15468c,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1cc) = uVar4;
  FUN_0015432c(DAT_001547a8 + 0x1546a4,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1d0) = uVar4;
  FUN_0015432c(DAT_001547ac + 0x1546bc,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x1d4) = uVar4;
  pcVar2 = (char *)FUN_0015432c(DAT_001547b0 + 0x1546d4,param_1);
  iVar3 = atoi(pcVar2);
  *(int *)(this + 0x1f8) = iVar3;
  if (iVar3 == 0) {
    FUN_0015432c(DAT_001547b4 + 0x1546ee,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x108) = uVar4;
    FUN_0015432c(DAT_001547b8 + 0x154704,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x10c) = uVar4;
    FUN_0015432c(DAT_001547bc + 0x15471a,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x110) = uVar4;
    FUN_0015432c(DAT_00154a2c + 0x1547ca,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x114) = uVar4;
    iVar3 = FUN_0015432c(DAT_00154a30 + 0x1547e0,param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_00153578();
      uVar4 = __truncdfsf2();
    }
    *(undefined4 *)(this + 0x120) = uVar4;
    iVar3 = FUN_0015432c(DAT_00154a34 + 0x154800,param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_00153578();
      uVar4 = __truncdfsf2();
    }
    *(undefined4 *)(this + 0x124) = uVar4;
    iVar3 = FUN_0015432c(DAT_00154a38 + 0x154820,param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_00153578();
      uVar4 = __truncdfsf2();
    }
    *(undefined4 *)(this + 0x118) = uVar4;
    iVar3 = FUN_0015432c(DAT_00154a3c + 0x154840,param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_00153578();
      uVar4 = __truncdfsf2();
    }
    *(undefined4 *)(this + 0x11c) = uVar4;
  }
  else {
    if (iVar3 != 1) goto LAB_001549f8;
    FUN_0015432c(DAT_00154a40 + 0x15486a,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x128) = uVar4;
    FUN_0015432c(DAT_00154a44 + 0x154880,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 300) = uVar4;
    FUN_0015432c(DAT_00154a48 + 0x154896,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x130) = uVar4;
    iVar3 = DAT_00154a4c;
    *(undefined4 *)(this + 0x134) = 0;
    FUN_0015432c(iVar3 + 0x1548b0,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x138) = uVar4;
    FUN_0015432c(DAT_00154a50 + 0x1548c6,param_1);
    FUN_00153578();
    uVar4 = __truncdfsf2();
    *(undefined4 *)(this + 0x13c) = uVar4;
  }
  FUN_0015432c(DAT_00154a54 + 0x1548de,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x168) = uVar4;
  FUN_0015432c(DAT_00154a58 + 0x1548f4,param_1);
  FUN_00153578();
  uVar4 = __truncdfsf2();
  *(undefined4 *)(this + 0x16c) = uVar4;
  uVar4 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
  uVar4 = __divsf3(uVar4,*(undefined4 *)(this + 0x168));
  *(undefined4 *)(this + 0x1d8) = uVar4;
  pcVar2 = (char *)FUN_0015432c(DAT_00154a5c + 0x15491e,param_1);
  uVar4 = CCFileUtils::fullPathFromRelativeFile(pcVar2,*(char **)(this + 0x100));
  FUN_001eed40(&local_24,uVar4,auStack_30);
  if (*pcVar2 == '\0') {
LAB_00154968:
    pcVar2 = (char *)FUN_0015432c(DAT_00154a60 + 0x154970,param_1);
    this_00 = (CCImage *)strlen(pcVar2);
    if (this_00 == (CCImage *)0x0) goto LAB_001549d4;
    uVar6 = base64Decode(pcVar2,this_00,&local_2c);
    if (local_2c == (uchar *)0x0) {
      this_00 = (CCImage *)0x0;
    }
    else {
      iVar3 = ZipUtils::ccInflateMemory(local_2c,uVar6,(uchar **)&local_28);
      this_00 = local_28;
      if (local_28 != (CCImage *)0x0) {
        this_00 = (CCImage *)operator_new(0x14);
        CCImage::CCImage(this_00);
        iVar3 = CCImage::initWithImageData(this_00,local_28,iVar3,1,0,0,8);
        if (iVar3 != 0) {
          pCVar5 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
          uVar4 = CCTextureCache::addUIImage(pCVar5,this_00,local_24);
          *(undefined4 *)(this + 0x1e0) = uVar4;
          goto LAB_001549d4;
        }
      }
    }
  }
  else {
    bVar1 = (bool)CCFileUtils::getIsPopupNotify();
    CCFileUtils::setIsPopupNotify(false);
    pCVar5 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
    iVar3 = CCTextureCache::addImage(pCVar5,local_24);
    CCFileUtils::setIsPopupNotify(bVar1);
    if (iVar3 == 0) goto LAB_00154968;
    *(int *)(this + 0x1e0) = iVar3;
    this_00 = (CCImage *)0x0;
LAB_001549d4:
    if (*(CCObject **)(this + 0x1e0) != (CCObject *)0x0) {
      CCObject::retain(*(CCObject **)(this + 0x1e0));
      FUN_001ed6b8(&local_24);
      pCVar7 = (CCImage *)0x1;
      goto LAB_001549fa;
    }
  }
  FUN_001ed6b8(&local_24);
  pCVar7 = (CCImage *)0x0;
LAB_001549fa:
  if (local_2c != (uchar *)0x0) {
    operator_delete__(local_2c);
    local_2c = (uchar *)0x0;
  }
  if (local_28 != (CCImage *)0x0) {
    operator_delete__(local_28);
    local_28 = (CCImage *)0x0;
  }
  if (this_00 != (CCImage *)0x0) {
    CCImage::~CCImage(this_00);
    operator_delete(this_00);
  }
  return pCVar7;
}


