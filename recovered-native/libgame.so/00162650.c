/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162650  Symbol: FUN_00162650 */

undefined4 FUN_00162650(void)

{
  int iVar1;
  char **this;
  deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> *this_00;
  CCImage **ppCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  int iVar7;
  char *pcVar8;
  CCImage *pCVar9;
  undefined4 local_20;
  CCImage **local_1c [2];
  
  iVar1 = DAT_001627a0;
  pcVar8 = (char *)(DAT_001627a0 + 0x16265e);
  local_20 = 0;
  cocos2d::CCThread::createAutoreleasePool();
LAB_00162666:
  while( true ) {
    while( true ) {
      sem_wait((sem_t *)(iVar1 + 0x162662));
      iVar7 = *(int *)(iVar1 + 0x162672);
      pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0x162676));
      ppCVar2 = *(CCImage ***)(iVar7 + 8);
      if (*(CCImage ***)(iVar7 + 0x18) != ppCVar2) break;
      pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x162676));
      if (*pcVar8 != '\0') {
        cocos2d::CCThread::~CCThread((CCThread *)&local_20);
        return 0;
      }
    }
    ppcVar6 = (char **)*ppCVar2;
    if (ppCVar2 == (CCImage **)(*(int *)(iVar7 + 0x10) + -4)) {
      operator_delete(*(void **)(iVar7 + 0xc));
      iVar3 = *(int *)(iVar7 + 0x14);
      *(int *)(iVar7 + 0x14) = iVar3 + 4;
      ppCVar2 = *(CCImage ***)(iVar3 + 4);
      *(CCImage ***)(iVar7 + 0xc) = ppCVar2;
      *(CCImage ***)(iVar7 + 0x10) = ppCVar2 + 0x80;
    }
    else {
      ppCVar2 = ppCVar2 + 1;
    }
    iVar3 = DAT_001627a4;
    *(CCImage ***)(iVar7 + 8) = ppCVar2;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar3 + 0x1626d4));
    pcVar4 = *ppcVar6;
    iVar7 = FUN_001ece40(ppcVar6,DAT_001627a8 + 0x1626ca,0);
    if ((iVar7 == -1) && (iVar7 = FUN_001ece40(ppcVar6,DAT_001627ac + 0x1626de,0), iVar7 == -1))
    break;
    pCVar9 = (CCImage *)0x0;
LAB_001626fa:
    this = (char **)operator_new(0x14);
    cocos2d::CCImage::CCImage((CCImage *)this);
    iVar7 = cocos2d::CCImage::initWithImageFileThreadSafe
                      ((CCImage *)this,pcVar4,(EImageFormat)pCVar9);
    if (iVar7 == 0) goto code_r0x00162714;
    local_1c[0] = (CCImage **)operator_new(0xc);
    *local_1c[0] = (CCImage *)ppcVar6;
    iVar7 = DAT_001627b4;
    local_1c[0][1] = (CCImage *)0x0;
    local_1c[0][2] = (CCImage *)0x0;
    local_1c[0][1] = (CCImage *)this;
    local_1c[0][2] = pCVar9;
    pthread_mutex_lock((pthread_mutex_t *)(iVar7 + 0x16274a));
    this_00 = *(deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> **)
               (iVar7 + 0x162746);
    puVar5 = *(undefined4 **)(this_00 + 0x18);
    if (puVar5 == (undefined4 *)(*(int *)(this_00 + 0x20) + -4)) {
      std::deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>>::_M_push_back_aux
                (this_00,(_ImageInfo **)local_1c);
    }
    else {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = local_1c[0];
      }
      *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 4;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(DAT_001627b8 + 0x16277c));
  }
  iVar7 = FUN_001ece40(ppcVar6,DAT_001627bc + 0x162788,0);
  if ((iVar7 != -1) || (iVar7 = FUN_001ece40(ppcVar6,DAT_001627b0 + 0x1626f2,0), iVar7 != -1)) {
    pCVar9 = (CCImage *)0x1;
    goto LAB_001626fa;
  }
  FUN_001ed6b8(ppcVar6);
  goto LAB_00162798;
code_r0x00162714:
  if (this != (char **)0x0) {
    cocos2d::CCImage::~CCImage((CCImage *)this);
    ppcVar6 = this;
LAB_00162798:
    operator_delete(ppcVar6);
  }
  goto LAB_00162666;
}


