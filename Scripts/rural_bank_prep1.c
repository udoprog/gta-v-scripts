#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
var uLocal_12 = 0;
var uLocal_13 = 0;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
float fLocal_21 = 0f;
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
int iLocal_28 = 0;
var uLocal_29 = 0;
var uLocal_30 = 0;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
vector3 vLocal_49 = {0f, 0f, 0f};
vector3 vLocal_52 = {0f, 0f, 0f};
vector3 vLocal_55 = {0f, 0f, 0f};
vector3 vLocal_58 = {0f, 0f, 0f};
vector3 vLocal_61 = {0f, 0f, 0f};
vector3 vLocal_64 = {0f, 0f, 0f};
vector3 vLocal_67 = {0f, 0f, 0f};
vector3 vLocal_70 = {0f, 0f, 0f};
vector3 vLocal_73 = {0f, 0f, 0f};
vector3 vLocal_76 = {0f, 0f, 0f};
vector3 vLocal_79 = {0f, 0f, 0f};
struct<8> Local_82 = {
	0, 0, -1, 0, 0, 0, 0, 0
};
var uLocal_90 = 0;
var uLocal_91 = 1000;
var uLocal_92 = 1000;
var uLocal_93 = 0;
struct<2> Local_94[3];
struct<2> Local_101[3];
var uLocal_108[2] = {0, 0};
struct<14> Local_111[9];
var *uLocal_238 = NULL;
var uLocal_239 = 0;
var uLocal_240 = 0;
var uLocal_241 = 0;
var uLocal_242 = 0;
var uLocal_243 = 0;
var uLocal_244 = 0;
var uLocal_245 = 0;
var uLocal_246 = 0;
var uLocal_247 = 0;
var uLocal_248 = 0;
var uLocal_249 = 0;
var uLocal_250 = 0;
var uLocal_251 = 0;
var uLocal_252 = 0;
var uLocal_253 = 0;
var uLocal_254 = 0;
var uLocal_255 = 0;
var uLocal_256 = 0;
var uLocal_257 = 0;
var uLocal_258 = 0;
var uLocal_259 = 0;
var uLocal_260 = 0;
var uLocal_261 = 0;
var uLocal_262 = 0;
var uLocal_263 = 0;
var uLocal_264 = 0;
var uLocal_265 = 0;
var uLocal_266 = 0;
var uLocal_267 = 0;
var uLocal_268 = 0;
var uLocal_269 = 0;
var uLocal_270 = 0;
var uLocal_271 = 0;
var uLocal_272 = 0;
var uLocal_273 = 0;
var uLocal_274 = 0;
var uLocal_275 = 0;
var uLocal_276 = 0;
var uLocal_277 = 0;
var uLocal_278 = 0;
var uLocal_279 = 0;
var uLocal_280 = 0;
var uLocal_281 = 0;
var uLocal_282 = 0;
var uLocal_283 = 0;
var uLocal_284 = 0;
var uLocal_285 = 0;
var uLocal_286 = 0;
var uLocal_287 = 0;
var uLocal_288 = 0;
var uLocal_289 = 0;
var uLocal_290 = 0;
var uLocal_291 = 0;
var uLocal_292 = 0;
var uLocal_293 = 0;
var uLocal_294 = 0;
var uLocal_295 = 0;
var uLocal_296 = 0;
var uLocal_297 = 0;
var uLocal_298 = 0;
var uLocal_299 = 0;
var uLocal_300 = 0;
var uLocal_301 = 0;
var uLocal_302 = 0;
var uLocal_303 = 0;
var uLocal_304 = 0;
var uLocal_305 = 0;
var uLocal_306 = 0;
var uLocal_307 = 0;
var uLocal_308 = 0;
var uLocal_309 = 0;
var uLocal_310 = 0;
var uLocal_311 = 0;
var uLocal_312 = 0;
var uLocal_313 = 0;
var uLocal_314 = 0;
var uLocal_315 = 0;
var uLocal_316 = 0;
var uLocal_317 = 0;
var uLocal_318 = 0;
var uLocal_319 = 0;
var uLocal_320 = 0;
var uLocal_321 = 0;
var uLocal_322 = 0;
var uLocal_323 = 0;
var uLocal_324 = 0;
var uLocal_325 = 0;
var uLocal_326 = 0;
var uLocal_327 = 0;
var uLocal_328 = 0;
var uLocal_329 = 0;
var uLocal_330 = 0;
var uLocal_331 = 0;
var uLocal_332 = 0;
var uLocal_333 = 0;
var uLocal_334 = 0;
var uLocal_335 = 0;
var uLocal_336 = 0;
var uLocal_337 = 0;
var uLocal_338 = 0;
var uLocal_339 = 0;
var uLocal_340 = 0;
var uLocal_341 = 0;
var uLocal_342 = 0;
var uLocal_343 = 0;
var uLocal_344 = 0;
var uLocal_345 = 0;
var uLocal_346 = 0;
var uLocal_347 = 0;
var uLocal_348 = 0;
var uLocal_349 = 0;
var uLocal_350 = 0;
var uLocal_351 = 0;
var uLocal_352 = 0;
var uLocal_353 = 0;
var uLocal_354 = 0;
var uLocal_355 = 0;
var uLocal_356 = 0;
var uLocal_357 = 0;
var uLocal_358 = 0;
var uLocal_359 = 0;
var uLocal_360 = 0;
var uLocal_361 = 0;
var uLocal_362 = 0;
var uLocal_363 = 0;
var uLocal_364 = 0;
var uLocal_365 = 0;
var uLocal_366 = 0;
var uLocal_367 = 0;
var uLocal_368 = 0;
var uLocal_369 = 0;
var uLocal_370 = 0;
var uLocal_371 = 0;
var uLocal_372 = 0;
var uLocal_373 = 0;
var uLocal_374 = 0;
var uLocal_375 = 0;
var uLocal_376 = 0;
var uLocal_377 = 0;
var uLocal_378 = 0;
var uLocal_379 = 0;
var uLocal_380 = 0;
var uLocal_381 = 0;
var uLocal_382 = 0;
var uLocal_383 = 0;
var uLocal_384 = 0;
var uLocal_385 = 0;
var uLocal_386 = 0;
var uLocal_387 = 0;
var uLocal_388 = 0;
var uLocal_389 = 0;
var uLocal_390 = 0;
var uLocal_391 = 0;
var uLocal_392 = 0;
var uLocal_393 = 0;
var uLocal_394 = 0;
var uLocal_395 = 0;
var uLocal_396 = 0;
var uLocal_397 = 0;
var uLocal_398 = 0;
var uLocal_399 = 0;
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
struct<6> Local_403 = {
	0, 3, 0, 0, 0, 0
};
var uLocal_409 = 0;
var uLocal_410 = 1092616192;
var uLocal_411 = 1101004800;
var uLocal_412 = 0;
var uLocal_413 = 0;
var uLocal_414 = 0;
var uLocal_415 = 0;
var uLocal_416 = 0;
var uLocal_417 = 0;
var uLocal_418 = 0;
var uLocal_419 = 0;
var uLocal_420 = 3;
var uLocal_421 = 0;
var uLocal_422 = 0;
var uLocal_423 = 0;
var uLocal_424 = 0;
var uLocal_425 = 0;
var uLocal_426 = 0;
var uLocal_427 = 0;
int iLocal_428 = 0;
var uLocal_429[3] = {0, 0, 0};
int iLocal_433 = 0;
int iLocal_434 = 0;
int iLocal_435 = 0;
int iLocal_436 = 0;
int iLocal_437 = 0;
float fLocal_438 = 0f;
float fLocal_439 = 0f;
float fLocal_440 = 0f;
float fLocal_441 = 0f;
int iLocal_442 = 0;
int iLocal_443 = 0;
int iLocal_444 = 0;
int iLocal_445 = 0;
int iLocal_446 = 0;
int iLocal_447 = 0;
var uLocal_448 = 0;
var uLocal_449 = 0;
int iLocal_450 = 0;
int iLocal_451 = 0;
bool bLocal_452 = 0;
int iLocal_453 = 0;
int iLocal_454 = 0;
int iLocal_455 = 0;
bool bLocal_456 = 0;
bool bLocal_457 = 0;
int iLocal_458 = 0;
int iLocal_459 = 0;
vector3 vLocal_460 = {0f, 0f, 0f};
float fLocal_463 = 0f;
float fLocal_464 = 0f;
float fLocal_465 = 0f;
int iLocal_466 = 0;
int iLocal_467 = 0;
int iLocal_468 = 0;
int iLocal_469 = 0;
bool bLocal_470 = 0;
int iLocal_471 = 0;
int iLocal_472 = 0;
int iLocal_473 = 0;
int iLocal_474 = 0;
char cLocal_475[64] = "";
var uLocal_483 = 0;
var uLocal_484 = 0;
var uLocal_485 = 0;
var uLocal_486 = 0;
var uLocal_487 = 0;
var uLocal_488 = 0;
var uLocal_489 = 0;
var uLocal_490 = 0;
char *sLocal_491 = NULL;
int iLocal_492 = 0;
int iLocal_493 = 0;
var *uLocal_494 = NULL;
var uLocal_495 = 0;
var uLocal_496 = 0;
var uLocal_497 = 0;
var uLocal_498 = 0;
var uLocal_499 = 0;
var uLocal_500 = 0;
var uLocal_501 = 0;
var uLocal_502 = 0;
var uLocal_503 = 0;
var uLocal_504 = 0;
var uLocal_505 = 0;
var uLocal_506 = 0;
var uLocal_507 = 0;
var uLocal_508 = 0;
var uLocal_509 = 0;
var uLocal_510 = 0;
var uLocal_511 = 0;
var uLocal_512 = 0;
var uLocal_513 = 0;
var uLocal_514 = 0;
var uLocal_515 = 0;
var uLocal_516 = 0;
var uLocal_517 = 0;
var uLocal_518 = 0;
var uLocal_519 = 0;
var uLocal_520 = 0;
var uLocal_521 = 0;
var uLocal_522 = 0;
var uLocal_523 = 0;
var uLocal_524 = 0;
var uLocal_525 = 0;
var uLocal_526 = 0;
var uLocal_527 = 0;
var uLocal_528 = 0;
var uLocal_529 = 0;
var uLocal_530 = 0;
var uLocal_531 = 0;
var uLocal_532 = 0;
var uLocal_533 = 0;
var uLocal_534 = 0;
var uLocal_535 = 0;
var uLocal_536 = 0;
var uLocal_537 = 0;
var uLocal_538 = 0;
var uLocal_539 = 0;
var uLocal_540 = 0;
var uLocal_541 = 0;
var uLocal_542 = 0;
var uLocal_543 = 0;
var uLocal_544 = 0;
var uLocal_545 = 0;
var uLocal_546 = 0;
var uLocal_547 = 0;
var uLocal_548 = 0;
var uLocal_549 = 0;
var uLocal_550 = 0;
var uLocal_551 = 0;
var uLocal_552 = 0;
var uLocal_553 = 0;
var uLocal_554 = 0;
var uLocal_555 = 0;
var uLocal_556 = 0;
var uLocal_557 = 0;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 0;
var uLocal_565 = 0;
var uLocal_566 = 0;
var uLocal_567 = 0;
var uLocal_568 = 0;
var uLocal_569 = 0;
var uLocal_570 = 0;
var uLocal_571 = 0;
var uLocal_572 = 0;
var uLocal_573 = 0;
var uLocal_574 = 0;
var uLocal_575 = 0;
var uLocal_576 = 0;
var uLocal_577 = 0;
var uLocal_578 = 0;
var uLocal_579 = 0;
var uLocal_580 = 0;
var uLocal_581 = 0;
var uLocal_582 = 0;
var uLocal_583 = 0;
var uLocal_584 = 0;
var uLocal_585 = 0;
var uLocal_586 = 0;
var uLocal_587 = 0;
var uLocal_588 = 0;
var uLocal_589 = 0;
var uLocal_590 = 0;
var uLocal_591 = 0;
var uLocal_592 = 0;
var uLocal_593 = 0;
var uLocal_594 = 0;
var uLocal_595 = 0;
var uLocal_596 = 0;
var uLocal_597 = 0;
var uLocal_598 = 0;
var uLocal_599 = 0;
var uLocal_600 = 0;
var uLocal_601 = 0;
var uLocal_602 = 0;
var uLocal_603 = 0;
var uLocal_604 = 0;
var uLocal_605 = 0;
var uLocal_606 = 0;
var uLocal_607 = 0;
var uLocal_608 = 0;
var uLocal_609 = 0;
var uLocal_610 = 0;
var uLocal_611 = 0;
var uLocal_612 = 0;
var uLocal_613 = 0;
var uLocal_614 = 0;
var uLocal_615 = 0;
var uLocal_616 = 0;
var uLocal_617 = 0;
var uLocal_618 = 0;
var uLocal_619 = 0;
var uLocal_620 = 0;
var uLocal_621 = 0;
var uLocal_622 = 0;
var uLocal_623 = 0;
var uLocal_624 = 0;
var uLocal_625 = 0;
var uLocal_626 = 0;
var uLocal_627 = 0;
var uLocal_628 = 0;
var uLocal_629 = 0;
var uLocal_630 = 0;
var uLocal_631 = 0;
var uLocal_632 = 0;
var uLocal_633 = 0;
var uLocal_634 = 0;
var uLocal_635 = 0;
var uLocal_636 = 0;
var uLocal_637 = 0;
var uLocal_638 = 0;
var uLocal_639 = 0;
var uLocal_640 = 0;
var uLocal_641 = 0;
var uLocal_642 = 0;
var uLocal_643 = 0;
var uLocal_644 = 0;
var uLocal_645 = 10;
var uLocal_646 = 0;
var uLocal_647 = 0;
var uLocal_648 = 0;
var uLocal_649 = 0;
var uLocal_650 = 0;
var uLocal_651 = 0;
var uLocal_652 = 0;
var uLocal_653 = 0;
var uLocal_654 = 0;
var uLocal_655 = 0;
var uLocal_656 = 0;
var uLocal_657 = 0;
var uLocal_658 = 0;
var uLocal_659 = 0;
var uLocal_660 = 0;
var uLocal_661 = 0;
var uLocal_662 = 0;
var uLocal_663 = 0;
var uLocal_664 = 0;
var uLocal_665 = 0;
var uLocal_666 = 0;
var uLocal_667 = 0;
var uLocal_668 = 0;
var uLocal_669 = 0;
var uLocal_670 = 0;
var uLocal_671 = 0;
var uLocal_672 = 0;
var uLocal_673 = 0;
var uLocal_674 = 0;
var uLocal_675 = 0;
var uLocal_676 = 0;
var uLocal_677 = 0;
var uLocal_678 = 0;
var uLocal_679 = 0;
var uLocal_680 = 0;
var uLocal_681 = 0;
var uLocal_682 = 0;
var uLocal_683 = 0;
var uLocal_684 = 0;
var uLocal_685 = 0;
var uLocal_686 = 0;
var uLocal_687 = 0;
var uLocal_688 = 0;
var uLocal_689 = 0;
var uLocal_690 = 0;
var uLocal_691 = 0;
var uLocal_692 = 0;
var uLocal_693 = 0;
var uLocal_694 = 0;
var uLocal_695 = 0;
var uLocal_696 = 10;
var uLocal_697 = 0;
var uLocal_698 = 0;
var uLocal_699 = 0;
var uLocal_700 = 0;
var uLocal_701 = 0;
var uLocal_702 = 0;
var uLocal_703 = 0;
var uLocal_704 = 0;
var uLocal_705 = 0;
var uLocal_706 = 0;
var uLocal_707 = 0;
var uLocal_708 = 0;
var uLocal_709 = 0;
var uLocal_710 = 0;
var uLocal_711 = 0;
var uLocal_712 = 0;
var uLocal_713 = 0;
var uLocal_714 = 0;
var uLocal_715 = 0;
var uLocal_716 = 0;
var uLocal_717 = 0;
var uLocal_718 = 0;
var uLocal_719 = 0;
var uLocal_720 = 0;
var uLocal_721 = 0;
var uLocal_722 = 0;
var uLocal_723 = 0;
var uLocal_724 = 0;
var uLocal_725 = 0;
var uLocal_726 = 0;
var uLocal_727 = 0;
var uLocal_728 = 0;
var uLocal_729 = 0;
var uLocal_730 = 0;
var uLocal_731 = 0;
var uLocal_732 = 0;
var uLocal_733 = 0;
var uLocal_734 = 0;
var uLocal_735 = 0;
var uLocal_736 = 0;
var uLocal_737 = 0;
var uLocal_738 = 0;
var uLocal_739 = 0;
var uLocal_740 = 0;
var uLocal_741 = 0;
var uLocal_742 = 0;
var uLocal_743 = 0;
var uLocal_744 = 0;
var uLocal_745 = 0;
var uLocal_746 = 0;
var uLocal_747 = 0;
var uLocal_748 = 0;
var uLocal_749 = 0;
var uLocal_750 = 0;
var uLocal_751 = 0;
var uLocal_752 = 0;
var uLocal_753 = 0;
var uLocal_754 = 0;
var uLocal_755 = 0;
var uLocal_756 = 0;
var uLocal_757 = 0;
var uLocal_758 = 0;
var uLocal_759 = 0;
var uLocal_760 = 0;
var uLocal_761 = 0;
var uLocal_762 = 0;
var uLocal_763 = 0;
var uLocal_764 = 0;
var uLocal_765 = 0;
var uLocal_766 = 0;
var uLocal_767 = 20;
var uLocal_768 = 0;
var uLocal_769 = 0;
var uLocal_770 = 0;
var uLocal_771 = 0;
var uLocal_772 = 0;
var uLocal_773 = 0;
var uLocal_774 = 0;
var uLocal_775 = 0;
var uLocal_776 = 0;
var uLocal_777 = 0;
var uLocal_778 = 0;
var uLocal_779 = 0;
var uLocal_780 = 0;
var uLocal_781 = 0;
var uLocal_782 = 0;
var uLocal_783 = 0;
var uLocal_784 = 0;
var uLocal_785 = 0;
var uLocal_786 = 0;
var uLocal_787 = 0;
var uLocal_788 = 0;
var uLocal_789 = 0;
var uLocal_790 = 0;
var uLocal_791 = 0;
var uLocal_792 = 0;
var uLocal_793 = 0;
var uLocal_794 = 0;
var uLocal_795 = 0;
var uLocal_796 = 0;
var uLocal_797 = 0;
var uLocal_798 = 0;
var uLocal_799 = 0;
var uLocal_800 = 0;
var uLocal_801 = 0;
var uLocal_802 = 0;
var uLocal_803 = 0;
var uLocal_804 = 0;
var uLocal_805 = 0;
var uLocal_806 = 0;
var uLocal_807 = 0;
var uLocal_808 = 0;
var uLocal_809 = 0;
var uLocal_810 = 0;
var uLocal_811 = 0;
var uLocal_812 = 0;
var uLocal_813 = 0;
var uLocal_814 = 0;
var uLocal_815 = 0;
var uLocal_816 = 0;
var uLocal_817 = 0;
var uLocal_818 = 0;
var uLocal_819 = 0;
var uLocal_820 = 0;
var uLocal_821 = 0;
var uLocal_822 = 0;
var uLocal_823 = 0;
var uLocal_824 = 0;
var uLocal_825 = 0;
var uLocal_826 = 0;
var uLocal_827 = 0;
var uLocal_828 = 0;
var uLocal_829 = 0;
var uLocal_830 = 0;
var uLocal_831 = 0;
var uLocal_832 = 0;
var uLocal_833 = 0;
var uLocal_834 = 0;
var uLocal_835 = 0;
var uLocal_836 = 0;
var uLocal_837 = 0;
var uLocal_838 = 0;
var uLocal_839 = 0;
var uLocal_840 = 0;
var uLocal_841 = 0;
var uLocal_842 = 0;
var uLocal_843 = 0;
var uLocal_844 = 0;
var uLocal_845 = 0;
var uLocal_846 = 0;
var uLocal_847 = 0;
var uLocal_848 = 0;
var uLocal_849 = 0;
var uLocal_850 = 0;
var uLocal_851 = 0;
var uLocal_852 = 0;
var uLocal_853 = 0;
var uLocal_854 = 0;
var uLocal_855 = 0;
var uLocal_856 = 0;
var uLocal_857 = 0;
var uLocal_858 = 0;
var uLocal_859 = 0;
var uLocal_860 = 0;
var uLocal_861 = 0;
var uLocal_862 = 0;
var uLocal_863 = 0;
var uLocal_864 = 0;
var uLocal_865 = 0;
var uLocal_866 = 0;
var uLocal_867 = 0;
var uLocal_868 = 20;
var uLocal_869 = 0;
var uLocal_870 = 0;
var uLocal_871 = 0;
var uLocal_872 = 0;
var uLocal_873 = 0;
var uLocal_874 = 0;
var uLocal_875 = 0;
var uLocal_876 = 0;
var uLocal_877 = 0;
var uLocal_878 = 0;
var uLocal_879 = 0;
var uLocal_880 = 0;
var uLocal_881 = 0;
var uLocal_882 = 0;
var uLocal_883 = 0;
var uLocal_884 = 0;
var uLocal_885 = 0;
var uLocal_886 = 0;
var uLocal_887 = 0;
var uLocal_888 = 0;
var uLocal_889 = 0;
var uLocal_890 = 0;
var uLocal_891 = 0;
var uLocal_892 = 0;
var uLocal_893 = 0;
var uLocal_894 = 0;
var uLocal_895 = 0;
var uLocal_896 = 0;
var uLocal_897 = 0;
var uLocal_898 = 0;
var uLocal_899 = 0;
var uLocal_900 = 0;
var uLocal_901 = 0;
var uLocal_902 = 0;
var uLocal_903 = 0;
var uLocal_904 = 0;
var uLocal_905 = 0;
var uLocal_906 = 0;
var uLocal_907 = 0;
var uLocal_908 = 0;
var uLocal_909 = 0;
var uLocal_910 = 0;
var uLocal_911 = 0;
var uLocal_912 = 0;
var uLocal_913 = 0;
var uLocal_914 = 0;
var uLocal_915 = 0;
var uLocal_916 = 0;
var uLocal_917 = 0;
var uLocal_918 = 0;
var uLocal_919 = 0;
var uLocal_920 = 0;
var uLocal_921 = 0;
var uLocal_922 = 0;
var uLocal_923 = 0;
var uLocal_924 = 0;
var uLocal_925 = 0;
var uLocal_926 = 0;
var uLocal_927 = 0;
var uLocal_928 = 0;
var uLocal_929 = 0;
var uLocal_930 = 0;
var uLocal_931 = 0;
var uLocal_932 = 0;
var uLocal_933 = 0;
var uLocal_934 = 0;
var uLocal_935 = 0;
var uLocal_936 = 0;
var uLocal_937 = 0;
var uLocal_938 = 0;
var uLocal_939 = 0;
var uLocal_940 = 0;
var uLocal_941 = 0;
var uLocal_942 = 0;
var uLocal_943 = 0;
var uLocal_944 = 0;
var uLocal_945 = 0;
var uLocal_946 = 0;
var uLocal_947 = 0;
var uLocal_948 = 0;
var uLocal_949 = 0;
var uLocal_950 = 0;
var uLocal_951 = 0;
var uLocal_952 = 0;
var uLocal_953 = 0;
var uLocal_954 = 0;
var uLocal_955 = 0;
var uLocal_956 = 0;
var uLocal_957 = 0;
var uLocal_958 = 0;
var uLocal_959 = 0;
var uLocal_960 = 0;
var uLocal_961 = 0;
var uLocal_962 = 0;
var uLocal_963 = 0;
var uLocal_964 = 0;
var uLocal_965 = 0;
var uLocal_966 = 0;
var uLocal_967 = 0;
var uLocal_968 = 0;
var uLocal_969 = 30;
var uLocal_970 = 0;
var uLocal_971 = 0;
var uLocal_972 = 0;
var uLocal_973 = 0;
var uLocal_974 = 0;
var uLocal_975 = 0;
var uLocal_976 = 0;
var uLocal_977 = 0;
var uLocal_978 = 0;
var uLocal_979 = 0;
var uLocal_980 = 0;
var uLocal_981 = 0;
var uLocal_982 = 0;
var uLocal_983 = 0;
var uLocal_984 = 0;
var uLocal_985 = 0;
var uLocal_986 = 0;
var uLocal_987 = 0;
var uLocal_988 = 0;
var uLocal_989 = 0;
var uLocal_990 = 0;
var uLocal_991 = 0;
var uLocal_992 = 0;
var uLocal_993 = 0;
var uLocal_994 = 0;
var uLocal_995 = 0;
var uLocal_996 = 0;
var uLocal_997 = 0;
var uLocal_998 = 0;
var uLocal_999 = 0;
var uLocal_1000 = 0;
var uLocal_1001 = 0;
var uLocal_1002 = 0;
var uLocal_1003 = 0;
var uLocal_1004 = 0;
var uLocal_1005 = 0;
var uLocal_1006 = 0;
var uLocal_1007 = 0;
var uLocal_1008 = 0;
var uLocal_1009 = 0;
var uLocal_1010 = 0;
var uLocal_1011 = 0;
var uLocal_1012 = 0;
var uLocal_1013 = 0;
var uLocal_1014 = 0;
var uLocal_1015 = 0;
var uLocal_1016 = 0;
var uLocal_1017 = 0;
var uLocal_1018 = 0;
var uLocal_1019 = 0;
var uLocal_1020 = 0;
var uLocal_1021 = 0;
var uLocal_1022 = 0;
var uLocal_1023 = 0;
var uLocal_1024 = 0;
var uLocal_1025 = 0;
var uLocal_1026 = 0;
var uLocal_1027 = 0;
var uLocal_1028 = 0;
var uLocal_1029 = 0;
var uLocal_1030 = 0;
var uLocal_1031 = 0;
var uLocal_1032 = 0;
var uLocal_1033 = 0;
var uLocal_1034 = 0;
var uLocal_1035 = 0;
var uLocal_1036 = 0;
var uLocal_1037 = 0;
var uLocal_1038 = 0;
var uLocal_1039 = 0;
var uLocal_1040 = 0;
var uLocal_1041 = 0;
var uLocal_1042 = 0;
var uLocal_1043 = 0;
var uLocal_1044 = 0;
var uLocal_1045 = 0;
var uLocal_1046 = 0;
var uLocal_1047 = 0;
var uLocal_1048 = 0;
var uLocal_1049 = 0;
var uLocal_1050 = 0;
var uLocal_1051 = 0;
var uLocal_1052 = 0;
var uLocal_1053 = 0;
var uLocal_1054 = 0;
var uLocal_1055 = 0;
var uLocal_1056 = 0;
var uLocal_1057 = 0;
var uLocal_1058 = 0;
var uLocal_1059 = 0;
var uLocal_1060 = 0;
var uLocal_1061 = 0;
var uLocal_1062 = 0;
var uLocal_1063 = 0;
var uLocal_1064 = 0;
var uLocal_1065 = 0;
var uLocal_1066 = 0;
var uLocal_1067 = 0;
var uLocal_1068 = 0;
var uLocal_1069 = 0;
var uLocal_1070 = 0;
var uLocal_1071 = 0;
var uLocal_1072 = 0;
var uLocal_1073 = 0;
var uLocal_1074 = 0;
var uLocal_1075 = 0;
var uLocal_1076 = 0;
var uLocal_1077 = 0;
var uLocal_1078 = 0;
var uLocal_1079 = 0;
var uLocal_1080 = 0;
var uLocal_1081 = 0;
var uLocal_1082 = 0;
var uLocal_1083 = 0;
var uLocal_1084 = 0;
var uLocal_1085 = 0;
var uLocal_1086 = 0;
var uLocal_1087 = 0;
var uLocal_1088 = 0;
var uLocal_1089 = 0;
var uLocal_1090 = 0;
var uLocal_1091 = 0;
var uLocal_1092 = 0;
var uLocal_1093 = 0;
var uLocal_1094 = 0;
var uLocal_1095 = 0;
var uLocal_1096 = 0;
var uLocal_1097 = 0;
var uLocal_1098 = 0;
var uLocal_1099 = 0;
var uLocal_1100 = 0;
var uLocal_1101 = 0;
var uLocal_1102 = 0;
var uLocal_1103 = 0;
var uLocal_1104 = 0;
var uLocal_1105 = 0;
var uLocal_1106 = 0;
var uLocal_1107 = 0;
var uLocal_1108 = 0;
var uLocal_1109 = 0;
var uLocal_1110 = 0;
var uLocal_1111 = 0;
var uLocal_1112 = 0;
var uLocal_1113 = 0;
var uLocal_1114 = 0;
var uLocal_1115 = 0;
var uLocal_1116 = 0;
var uLocal_1117 = 0;
var uLocal_1118 = 0;
var uLocal_1119 = 0;
var uLocal_1120 = 0;
var uLocal_1121 = 0;
var uLocal_1122 = 0;
var uLocal_1123 = 0;
var uLocal_1124 = 0;
var uLocal_1125 = 0;
var uLocal_1126 = 0;
var uLocal_1127 = 0;
var uLocal_1128 = 0;
var uLocal_1129 = 0;
var uLocal_1130 = 0;
var uLocal_1131 = 0;
var uLocal_1132 = 0;
var uLocal_1133 = 0;
var uLocal_1134 = 0;
var uLocal_1135 = 0;
var uLocal_1136 = 0;
var uLocal_1137 = 0;
var uLocal_1138 = 0;
var uLocal_1139 = 0;
var uLocal_1140 = 0;
var uLocal_1141 = 0;
var uLocal_1142 = 0;
var uLocal_1143 = 0;
var uLocal_1144 = 0;
var uLocal_1145 = 0;
var uLocal_1146 = 0;
var uLocal_1147 = 0;
var uLocal_1148 = 0;
var uLocal_1149 = 0;
var uLocal_1150 = 5;
var uLocal_1151 = 0;
var uLocal_1152 = 0;
var uLocal_1153 = 0;
var uLocal_1154 = 0;
var uLocal_1155 = 0;
var uLocal_1156 = 0;
var uLocal_1157 = 0;
var uLocal_1158 = 0;
var uLocal_1159 = 0;
var uLocal_1160 = 0;
var uLocal_1161 = 0;
var uLocal_1162 = 0;
var uLocal_1163 = 0;
var uLocal_1164 = 0;
var uLocal_1165 = 0;
var uLocal_1166 = 0;
var uLocal_1167 = 0;
var uLocal_1168 = 0;
var uLocal_1169 = 0;
var uLocal_1170 = 0;
var uLocal_1171 = 0;
var uLocal_1172 = 0;
var uLocal_1173 = 0;
var uLocal_1174 = 0;
var uLocal_1175 = 0;
var uLocal_1176 = 0;
var uLocal_1177 = 0;
var uLocal_1178 = 0;
var uLocal_1179 = 0;
var uLocal_1180 = 0;
var uLocal_1181 = 7;
var uLocal_1182 = 0;
var uLocal_1183 = 0;
var uLocal_1184 = 0;
var uLocal_1185 = 0;
var uLocal_1186 = 0;
var uLocal_1187 = 0;
var uLocal_1188 = 0;
var uLocal_1189 = 0;
var uLocal_1190 = 0;
var uLocal_1191 = 0;
var uLocal_1192 = 0;
var uLocal_1193 = 0;
var uLocal_1194 = 0;
var uLocal_1195 = 0;
var uLocal_1196 = 0;
var uLocal_1197 = 0;
var uLocal_1198 = 0;
var uLocal_1199 = 0;
var uLocal_1200 = 0;
var uLocal_1201 = 0;
var uLocal_1202 = 0;
var uLocal_1203 = 0;
var uLocal_1204 = 0;
var uLocal_1205 = 0;
var uLocal_1206 = 0;
var uLocal_1207 = 0;
var uLocal_1208 = 0;
var uLocal_1209 = 0;
var uLocal_1210 = 0;
var uLocal_1211 = 0;
var uLocal_1212 = 0;
var uLocal_1213 = 0;
var uLocal_1214 = 0;
var uLocal_1215 = 0;
var uLocal_1216 = 0;
var uLocal_1217 = 0;
var uLocal_1218 = 0;
var uLocal_1219 = 0;
var uLocal_1220 = 0;
var uLocal_1221 = 0;
var uLocal_1222 = 0;
var uLocal_1223 = 0;
var uLocal_1224 = 0;
var uLocal_1225 = 0;
var uLocal_1226 = 0;
var uLocal_1227 = 0;
var uLocal_1228 = 0;
var uLocal_1229 = 0;
var uLocal_1230 = 0;
var uLocal_1231 = 5;
var uLocal_1232 = 0;
var uLocal_1233 = 0;
var uLocal_1234 = 0;
var uLocal_1235 = 0;
var uLocal_1236 = 0;
var uLocal_1237 = 0;
var uLocal_1238 = 0;
var uLocal_1239 = 0;
var uLocal_1240 = 0;
var uLocal_1241 = 0;
var uLocal_1242 = 0;
var uLocal_1243 = 0;
var uLocal_1244 = 0;
var uLocal_1245 = 0;
var uLocal_1246 = 0;
var uLocal_1247 = 0;
var uLocal_1248 = 0;
var uLocal_1249 = 0;
var uLocal_1250 = 0;
var uLocal_1251 = 0;
var uLocal_1252 = 0;
var uLocal_1253 = 0;
var uLocal_1254 = 0;
var uLocal_1255 = 0;
var uLocal_1256 = 0;
var uLocal_1257 = 3;
var uLocal_1258 = 0;
var uLocal_1259 = 0;
var uLocal_1260 = 0;
var uLocal_1261 = 0;
var uLocal_1262 = 0;
var uLocal_1263 = 0;
var uLocal_1264 = 0;
var uLocal_1265 = 0;
var uLocal_1266 = 0;
var uLocal_1267 = 0;
var uLocal_1268 = 0;
var uLocal_1269 = 0;
var uLocal_1270 = 0;
var uLocal_1271 = 0;
var uLocal_1272 = 0;
var uLocal_1273 = 16;
var uLocal_1274 = 0;
var uLocal_1275 = 0;
var uLocal_1276 = 0;
var uLocal_1277 = 0;
var uLocal_1278 = 0;
var uLocal_1279 = 0;
var uLocal_1280 = 0;
var uLocal_1281 = 0;
var uLocal_1282 = 0;
var uLocal_1283 = 0;
var uLocal_1284 = 0;
var uLocal_1285 = 0;
var uLocal_1286 = 0;
var uLocal_1287 = 0;
var uLocal_1288 = 0;
var uLocal_1289 = 0;
var uLocal_1290 = 0;
var uLocal_1291 = 0;
var uLocal_1292 = 0;
var uLocal_1293 = 0;
var uLocal_1294 = 0;
var uLocal_1295 = 0;
var uLocal_1296 = 0;
var uLocal_1297 = 0;
var uLocal_1298 = 0;
var uLocal_1299 = 0;
var uLocal_1300 = 0;
var uLocal_1301 = 0;
var uLocal_1302 = 0;
var uLocal_1303 = 0;
var uLocal_1304 = 0;
var uLocal_1305 = 0;
var uLocal_1306 = 0;
var uLocal_1307 = 0;
var uLocal_1308 = 0;
var uLocal_1309 = 0;
var uLocal_1310 = 0;
var uLocal_1311 = 0;
var uLocal_1312 = 0;
var uLocal_1313 = 0;
var uLocal_1314 = 0;
var uLocal_1315 = 0;
var uLocal_1316 = 0;
var uLocal_1317 = 0;
var uLocal_1318 = 0;
var uLocal_1319 = 0;
var uLocal_1320 = 0;
var uLocal_1321 = 0;
var uLocal_1322 = 0;
var uLocal_1323 = 0;
var uLocal_1324 = 0;
var uLocal_1325 = 0;
var uLocal_1326 = 0;
var uLocal_1327 = 0;
var uLocal_1328 = 0;
var uLocal_1329 = 0;
var uLocal_1330 = 0;
var uLocal_1331 = 0;
var uLocal_1332 = 0;
var uLocal_1333 = 0;
var uLocal_1334 = 0;
var uLocal_1335 = 0;
var uLocal_1336 = 0;
var uLocal_1337 = 0;
var uLocal_1338 = 0;
var uLocal_1339 = 0;
var uLocal_1340 = 0;
var uLocal_1341 = 0;
var uLocal_1342 = 0;
var uLocal_1343 = 0;
var uLocal_1344 = 0;
var uLocal_1345 = 0;
var uLocal_1346 = 0;
var uLocal_1347 = 0;
var uLocal_1348 = 0;
var uLocal_1349 = 0;
var uLocal_1350 = 0;
var uLocal_1351 = 0;
var uLocal_1352 = 0;
var uLocal_1353 = 0;
var uLocal_1354 = 0;
var uLocal_1355 = 0;
var uLocal_1356 = 0;
var uLocal_1357 = 0;
var uLocal_1358 = 0;
var uLocal_1359 = 0;
var uLocal_1360 = 0;
var uLocal_1361 = 0;
var uLocal_1362 = 0;
var uLocal_1363 = 0;
var uLocal_1364 = 0;
var uLocal_1365 = 0;
var uLocal_1366 = 0;
var uLocal_1367 = 0;
var uLocal_1368 = 0;
var uLocal_1369 = 0;
var uLocal_1370 = 0;
var uLocal_1371 = 0;
var uLocal_1372 = 0;
var uLocal_1373 = 10;
var uLocal_1374 = 0;
var uLocal_1375 = 0;
var uLocal_1376 = 0;
var uLocal_1377 = 0;
var uLocal_1378 = 0;
var uLocal_1379 = 0;
var uLocal_1380 = 0;
var uLocal_1381 = 0;
var uLocal_1382 = 0;
var uLocal_1383 = 0;
var uLocal_1384 = 0;
var uLocal_1385 = 0;
var uLocal_1386 = 0;
var uLocal_1387 = 0;
var uLocal_1388 = 0;
var uLocal_1389 = 0;
var uLocal_1390 = 0;
var uLocal_1391 = 0;
var uLocal_1392 = 0;
var uLocal_1393 = 0;
var uLocal_1394 = 0;
var uLocal_1395 = 0;
var uLocal_1396 = 0;
var uLocal_1397 = 0;
var uLocal_1398 = 0;
var uLocal_1399 = 0;
var uLocal_1400 = 0;
var uLocal_1401 = 0;
var uLocal_1402 = 0;
var uLocal_1403 = 0;
var uLocal_1404 = 0;
var uLocal_1405 = 0;
var uLocal_1406 = 0;
var uLocal_1407 = 0;
var uLocal_1408 = 0;
var uLocal_1409 = 0;
var uLocal_1410 = 0;
var uLocal_1411 = 0;
var uLocal_1412 = 0;
var uLocal_1413 = 0;
var uLocal_1414 = 0;
var uLocal_1415 = 0;
var uLocal_1416 = 0;
var uLocal_1417 = 0;
var uLocal_1418 = 0;
var uLocal_1419 = 0;
var uLocal_1420 = 0;
var uLocal_1421 = 0;
var uLocal_1422 = 0;
var uLocal_1423 = 0;
var uLocal_1424 = 5;
var uLocal_1425 = 0;
var uLocal_1426 = 0;
var uLocal_1427 = 0;
var uLocal_1428 = 0;
var uLocal_1429 = 0;
var uLocal_1430 = 0;
var uLocal_1431 = 0;
var uLocal_1432 = 0;
var uLocal_1433 = 0;
var uLocal_1434 = 0;
var uLocal_1435 = 0;
var uLocal_1436 = 0;
var uLocal_1437 = 0;
var uLocal_1438 = 0;
var uLocal_1439 = 0;
var uLocal_1440 = 0;
var uLocal_1441 = 0;
var uLocal_1442 = 0;
var uLocal_1443 = 0;
var uLocal_1444 = 0;
var uLocal_1445 = 0;
var uLocal_1446 = 0;
var uLocal_1447 = 0;
var uLocal_1448 = 0;
var uLocal_1449 = 0;
var uLocal_1450 = 5;
var uLocal_1451 = 0;
var uLocal_1452 = 0;
var uLocal_1453 = 0;
var uLocal_1454 = 0;
var uLocal_1455 = 0;
var uLocal_1456 = 0;
var uLocal_1457 = 0;
var uLocal_1458 = 0;
var uLocal_1459 = 0;
var uLocal_1460 = 0;
var uLocal_1461 = 0;
var uLocal_1462 = 0;
var uLocal_1463 = 0;
var uLocal_1464 = 0;
var uLocal_1465 = 0;
var uLocal_1466 = 0;
var uLocal_1467 = 0;
var uLocal_1468 = 0;
var uLocal_1469 = 0;
var uLocal_1470 = 0;
var uLocal_1471 = 0;
var uLocal_1472 = 0;
var uLocal_1473 = 0;
var uLocal_1474 = 0;
var uLocal_1475 = 0;
var uLocal_1476 = 0;
var uLocal_1477 = 0;
var uLocal_1478 = 0;
int iLocal_1479 = 0;
int iLocal_1480 = 0;
int iLocal_1481 = 0;
int iLocal_1482 = 0;
int iLocal_1483 = 0;
int iLocal_1484 = 0;
int iLocal_1485 = 0;
float fLocal_1486[3] = {0f, 0f, 0f};
bool bLocal_1490 = 0;
int iLocal_1491 = 0;
int iLocal_1492 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = ui::_0x4A9923385BDB9DAD();
	uLocal_47 = ui::_get_blip_info_id_iterator();
	vLocal_49 = {1358.197f, 3618.234f, 33.89066f};
	vLocal_52 = {0f, 5f, -0.5f};
	vLocal_55 = {4f, 3f, -0.5f};
	vLocal_58 = {4f, -3f, -0.5f};
	vLocal_61 = {0f, -5f, -0.5f};
	vLocal_64 = {-4f, -3f, -0.5f};
	vLocal_67 = {-4f, 3f, -0.5f};
	vLocal_70 = {0f, 2f, -0.5f};
	vLocal_73 = {4f, 0f, -0.5f};
	vLocal_76 = {0f, -2.2f, -0.5f};
	vLocal_79 = {-4f, 0f, -0.5f};
	iLocal_451 = joaat("weapon_assaultrifle");
	vLocal_460 = {0f, 0f, 0f};
	iLocal_466 = 30000;
	bLocal_470 = true;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
	sLocal_491 = "rural_prep_park";
	if (player::has_force_cleanup_occurred(3)) {
		func_319();
		func_315();
	}
	gameplay::set_mission_flag(1);
	func_255();
	gameplay::set_this_script_can_remove_blips_created_by_any_script(1);
	while (true) {
		unk1::_0x208784099002BC30("M_ThePaletoScorePrep", 0);
		func_254(&uLocal_494);
		if (iLocal_1480 == 0 && entity::does_entity_exist(Local_94[0 /*2*/]) &&
			vehicle::is_vehicle_driveable(Local_94[0 /*2*/], 0) && !ped::is_ped_injured(player::player_ped_id()) &&
			!ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0) &&
			system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
						   entity::get_entity_coords(Local_94[0 /*2*/], 1)) < 5625f) {
			iVar0 = 0;
			if (!Local_82.f_7 && ped::is_ped_on_foot(player::player_ped_id()) &&
				weapon::is_ped_armed(player::player_ped_id(), 6)) {
				iVar1 = 0;
				weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed")) {
					iVar2 = 0;
					weapon::get_ammo_in_clip(player::player_ped_id(), iVar1, &iVar2);
					if (iVar2 < weapon::get_max_ammo_in_clip(player::player_ped_id(), iVar1, 1)) {
						iVar0 = 1;
					}
				}
			}
			if (!iVar0) {
				func_234(&Local_82, Local_94[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else {
			func_232(&Local_82, 0, 0);
		}
		func_231();
		func_198();
		if (!iLocal_1484) {
			func_144();
			func_1();
		}
		system::wait(0);
	}
}

// Position - 0x27D
void func_1() {
	switch (iLocal_1480) {
	case 0: func_142(); break;

	case 1: func_108(); break;

	case 2: func_8(); break;

	case 3: func_2(); break;
	}
}

// Position - 0x2C1
void func_2() {
	switch (iLocal_1481) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::do_screen_fade_in(800);
		}
		cam::set_gameplay_cam_relative_heading(0f);
		iLocal_1481++;
		break;

	case 1: func_3(); break;
	}
}

// Position - 0x302
void func_3() {
	if (vehicle::is_vehicle_driveable(Local_94[0 /*2*/], 0)) {
		decorator::decor_set_bool(Local_94[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	func_4(0, 0);
	func_315();
}

// Position - 0x32F
void func_4(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_7(0) && Global_69948.f_1 == 1 && func_6(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_7(0)) {
		iVar0 = func_5();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0x405
int func_5() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43A
int func_6(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0x478
bool func_7(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x4A3
void func_8() {
	int iVar0;

	if (!iLocal_442) {
		if (entity::does_entity_exist(iLocal_428) && vehicle::is_vehicle_driveable(iLocal_428, 0) &&
			entity::does_entity_belong_to_this_script(iLocal_428, 1)) {
			func_84(iLocal_428, 0, 145);
			entity::set_vehicle_as_no_longer_needed(&iLocal_428);
			iLocal_442 = 1;
		}
	}
	pathfind::_0x07FB139B592FA687(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1481) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::do_screen_fade_in(800);
		}
		func_83(724, 0);
		audio::trigger_music_event("RHP1_TRUCK");
		unk1::_0x293220DA1B46CEBC(3f, 5f, 4);
		iLocal_1481++;
		break;

	case 1:
		if (func_40(&Local_403, vLocal_49, 0.1f, 0.1f, 2f, 1, Local_94[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1,
					-1) ||
			ui::does_blip_exist(Local_403.f_5) &&
				entity::is_entity_in_angled_area(Local_94[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f,
												 3621.605f, 33.72731f, 5f, 0, 1, 0)) {
			func_38(Local_94[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
			vehicle::set_vehicle_is_considered_by_player(Local_94[0 /*2*/], 0);
			func_33(&Local_403, 1, 0);
			func_32(1, 724);
			bLocal_452 = false;
			iLocal_453 = 0;
			iLocal_1481++;
		}
		break;

	case 2:
		bLocal_457 = true;
		iVar0 = 0;
		while (iVar0 <= 9 - 1) {
			if (func_31(Local_111[iVar0 /*14*/])) {
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(Local_111[iVar0 /*14*/], 1),
														  entity::get_entity_coords(player::player_ped_id(), 1),
														  1) < 400f) {
					if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
						ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
					}
					bLocal_457 = false;
				}
				else {
					entity::set_ped_as_no_longer_needed(&Local_111[iVar0 /*14*/]);
				}
			}
			iVar0++;
		}
		if (bLocal_457) {
			ai::task_clear_look_at(player::player_ped_id());
			iLocal_1481++;
		}
		else if (!bLocal_452) {
			ui::clear_prints();
			unk1::_0x293220DA1B46CEBC(3f, 5f, 4);
			func_30("RHP_KILL", 7500, 1);
			bLocal_452 = true;
		}
		break;

	case 3:
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
			if (ui::is_message_being_displayed()) {
				ui::clear_prints();
			}
			if (func_29(player::player_ped_id()) == 2) {
				func_28(&uLocal_238, 0, player::player_ped_id(), "Trevor", 0, 1);
				if (bLocal_452) {
					if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0)) {
						iLocal_1481 = 4;
					}
				}
				else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0)) {
					iLocal_1481 = 4;
				}
			}
			else if (func_29(player::player_ped_id()) == 0) {
				func_28(&uLocal_238, 0, player::player_ped_id(), "Michael", 0, 1);
				if (bLocal_452) {
					if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0)) {
						iLocal_1481 = 4;
					}
				}
				else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0)) {
					iLocal_1481 = 4;
				}
			}
			if (iLocal_1481 == 4) {
				system::settimera(0);
			}
		}
		else if (!iLocal_453 && func_10()) {
			unk1::_0x293220DA1B46CEBC(3f, 7f, 4);
			audio::trigger_music_event("RHP1_END");
			func_30("RHP_EXIT", 7500, 1);
			iLocal_453 = 1;
		}
		break;

	case 4:
		if (!func_9() || system::timera() > 6000) {
			func_3();
		}
		break;
	}
}

// Position - 0x7ED
int func_9() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x80F
int func_10() {
	if (ui::is_message_being_displayed()) {
		return 0;
	}
	if (ui::is_subtitle_preference_switched_on()) {
		if (func_9() && !func_11()) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x83F
int func_11() {
	if (Global_16756 == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x856
bool func_12(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_13(sParam2, iParam4, 0);
}

// Position - 0x8AA
int func_13(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_26();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_25(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_24();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&G_SleepModeOnOn25, 20);
			gameplay::clear_bit(&G_SleepModeOffOn11, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_18();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_17()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_16()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
					return 0;
				}
			}
			func_15();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_14();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_26();
	}
	return 0;
}

// Position - 0xB76
void func_14() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0xBA7
void func_15() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&G_SleepModeOffOn11, 16);
}

// Position - 0xC3C
bool func_16() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0xC63
bool func_17() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0xCFC
void func_18() {
	if (func_23(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_19();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0xD9E
int func_19() {
	func_20();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xDB7
void func_20() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_22(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_29(player::player_ped_id());
			if (func_21(iVar0) && (!func_23(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_21(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0xEB4
bool func_21(int iParam0) { return iParam0 < 3; }

// Position - 0xEC0
int func_22(int iParam0) {
	if (func_21(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xEEA
bool func_23(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xEF8
void func_24() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0xF4F
bool func_25(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xF8A
void func_26() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0xFE1
void func_27(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x1037
void func_28(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x10D2
int func_29(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_22(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x110F
void func_30(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x1128
bool func_31(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1173
void func_32(int iParam0, int iParam1) {
	int iVar0;

	if (Global_55830) {
	}
	Global_55830 = 0;
	if (iParam0) {
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 4) {
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] > 0) {
				if (Global_67918[iVar0 /*9*/] == iParam1) {
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x120D
void func_33(int *iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_bit_set(uParam0->f_13, 30)) {
		iParam1 = 1;
	}
	func_37(uParam0);
	iVar0 = 0;
	while (iVar0 < 3) {
		if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
			ui::remove_blip(&uParam0->f_1[iVar0]);
		}
		func_36(iVar0, uParam0);
		func_35(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31) {
		if (iVar0 != 8) {
			gameplay::clear_bit(&uParam0->f_13, iVar0);
			gameplay::clear_bit(&uParam0->f_14, iVar0);
		}
		iVar0++;
	}
	if (ui::does_blip_exist(*uParam0)) {
		ui::remove_blip(uParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!ped::is_ped_injured(iParam0->f_17[iVar0])) {
			ped::set_ped_can_play_ambient_anims(iParam0->f_17[iVar0], 1);
			ped::set_ped_can_play_ambient_base_anims(iParam0->f_17[iVar0], 1);
			if (iParam2) {
				ped::set_ped_config_flag(iParam0->f_17[iVar0], 32, 1);
				ped::set_ped_config_flag(iParam0->f_17[iVar0], 305, 0);
			}
			ped::set_ped_config_flag(iParam0->f_17[iVar0], 268, 0);
			if (iParam1) {
				if (ped::is_ped_group_member(iParam0->f_17[iVar0], func_34()) &&
					iParam0->f_17[iVar0] != player::player_ped_id()) {
					ped::remove_ped_from_group(iParam0->f_17[iVar0]);
				}
			}
			if (!gameplay::is_bit_set(iParam0->f_13, 29)) {
				ped::set_ped_using_action_mode(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (player::is_player_playing(player::player_id())) {
		ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 1);
		ped::set_ped_can_play_ambient_base_anims(player::player_ped_id(), 1);
	}
	if (player::is_player_playing(player::player_id())) {
		if (iParam2) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		}
	}
	iParam0->f_21 = 0;
}

// Position - 0x13BE
var func_34() { return player::get_player_group(player::get_player_index()); }

// Position - 0x13CE
void func_35(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::clear_bit(&uParam1->f_13, 17); break;

	case 1: gameplay::clear_bit(&uParam1->f_13, 18); break;

	case 2: gameplay::clear_bit(&uParam1->f_13, 19); break;
	}
}

// Position - 0x1416
void func_36(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::clear_bit(&uParam1->f_13, 14); break;

	case 1: gameplay::clear_bit(&uParam1->f_13, 15); break;

	case 2: gameplay::clear_bit(&uParam1->f_13, 16); break;
	}
}

// Position - 0x145E
void func_37(var *uParam0) {
	if (ui::does_blip_exist(uParam0->f_5)) {
		ui::remove_blip(&uParam0->f_5);
	}
}

// Position - 0x1479
int func_38(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_39(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1608
void func_39(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x1629
int func_40(var *uParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, char *sParam9, char *sParam10,
			char *sParam11, int iParam12, int iParam13, int iParam14, int iParam15) {
	return func_41(uParam0, vParam1, vParam4, func_82(), func_82(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_81(),
				   func_81(), func_81(), func_81(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0,
				   0, 0, 1, 1065353216);
}

// Position - 0x1678
int func_41(int *iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, int iParam13,
			int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char *sParam19, char *sParam20,
			char *sParam21, char *sParam22, char *sParam23, char *sParam24, int iParam25, bool bParam26, char *sParam27,
			int iParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34,
			int iParam35, float fParam36) {
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_80(uParam0);
	func_79(uParam0);
	func_78();
	if (func_62(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23,
				uParam0->f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26)) {
		func_61(sParam20);
		func_61(sParam21);
		func_61(sParam22);
		func_61(sParam23);
		if (cam::is_screen_faded_in()) {
			bVar1 = false;
			if (vehicle::is_vehicle_driveable(iParam18, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iParam18, 0)) {
					gameplay::set_bit(&uParam0->f_13, 3);
					if (!gameplay::is_bit_set(uParam0->f_13, 9)) {
						gameplay::clear_bit(&uParam0->f_13, 4);
					}
					if (gameplay::is_bit_set(uParam0->f_13, 23)) {
						gameplay::clear_bit(&uParam0->f_13, 23);
					}
					gameplay::set_bit(&uParam0->f_13, 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5) {
				if (func_59(uParam0, iParam29)) {
					gameplay::set_bit(&uParam0->f_13, 3);
					if (!gameplay::is_bit_set(uParam0->f_13, 9)) {
						gameplay::clear_bit(&uParam0->f_13, 4);
					}
					gameplay::set_bit(&uParam0->f_13, 9);
					bVar1 = true;
				}
			}
			else {
				bVar1 = true;
			}
			if (bVar1) {
				func_61(sParam24);
				func_61(sParam27);
				func_61("MORE_SEATS");
				if (bParam26 && player::is_player_wanted_level_greater(player::player_id(), 0)) {
					if (ui::does_blip_exist(uParam0->f_5)) {
						ui::remove_blip(&uParam0->f_5);
						func_61(sParam19);
					}
					if (ui::does_blip_exist(*uParam0)) {
						ui::remove_blip(uParam0);
					}
					if (!func_57(iParam0, 1) && !func_56(iParam0) && !gameplay::is_bit_set(iParam0->f_13, 0)) {
						if (bParam30) {
							func_55(iParam0, "LOSE_WANTED", 0);
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_53(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						gameplay::set_bit(&iParam0->f_13, 0);
						gameplay::clear_bit(&iParam0->f_13, 1);
					}
				}
				else {
					if (gameplay::is_bit_set(iParam0->f_13, 0)) {
						func_61("LOSE_WANTED");
						gameplay::clear_bit(&iParam0->f_13, 0);
						gameplay::set_bit(&iParam0->f_13, 1);
					}
					if (gameplay::is_bit_set(iParam0->f_13, 1)) {
						if (!func_57(iParam0, 1)) {
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_53(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							gameplay::clear_bit(&iParam0->f_13, 1);
						}
					}
					if (!ui::does_blip_exist(iParam0->f_5)) {
						if (ui::does_blip_exist(*iParam0)) {
							ui::remove_blip(iParam0);
						}
						iParam0->f_5 = func_52(vVar3, 0);
						if (iParam31 != -1) {
							ui::set_blip_sprite(iParam0->f_5, iParam31);
						}
						if (iParam35) {
							func_51(iParam0->f_5, iParam0);
						}
					}
					else if (!func_50(vVar3, ui::get_blip_coords(iParam0->f_5), 0.1f, 0)) {
						ui::set_blip_coords(iParam0->f_5, vVar3);
						if (iParam35) {
							func_51(iParam0->f_5, iParam0);
						}
					}
					if (!func_57(iParam0, 2)) {
						if (!gameplay::is_bit_set(iParam0->f_13, 2)) {
							func_55(iParam0, sParam19, 0);
							gameplay::set_bit(&iParam0->f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5) {
						if (gameplay::is_bit_set(iParam0->f_13, 13)) {
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5) {
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3) {
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5) {
						iVar7 = 2;
					}
					if (iParam28) {
						entity::is_entity_at_coord(player::player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (entity::is_entity_in_angled_area(player::player_ped_id(), vParam7, vParam10, fParam36, 0,
															 iVar6, iVar7)) {
							bVar1 = true;
						}
					}
					else if (entity::is_entity_at_coord(player::player_ped_id(), vParam1, vParam4, iParam13, iVar6,
														iVar7)) {
						bVar1 = true;
					}
					if (bVar1) {
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3) {
							if (!ped::is_ped_injured(iParam0->f_17[iVar2])) {
								if (iParam14 == 4 || iParam14 == 5) {
									iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
									if (!ped::is_ped_in_vehicle(iParam0->f_17[iVar2], iVar0, 0)) {
										bVar1 = false;
									}
								}
								else if (iParam18 != 0) {
									if (!ped::is_ped_in_vehicle(iParam0->f_17[iVar2], iParam18, 0)) {
										bVar1 = false;
									}
								}
								else if (!ped::is_ped_group_member(iParam0->f_17[iVar2], func_34()) ||
										 !func_48(iParam0->f_17[iVar2], 1)) {
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1) {
							if (func_45(iParam0)) {
								func_61(sParam19);
								func_61(sParam24);
								func_61(sParam20);
								func_61(sParam21);
								func_61(sParam22);
								func_61(sParam23);
								func_61("LOSE_WANTED");
								func_61("MORE_SEATS");
								func_61(sParam27);
								func_33(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iParam18)) {
				if (bParam26 && player::is_player_wanted_level_greater(player::player_id(), 0) &&
					!gameplay::is_bit_set(iParam0->f_13, 9) && !gameplay::is_bit_set(iParam0->f_13, 22)) {
					func_61(sParam24);
					func_61(sParam27);
					if (ui::does_blip_exist(iParam0->f_5) || ui::does_blip_exist(*iParam0)) {
						ui::remove_blip(&iParam0->f_5);
						ui::remove_blip(iParam0);
						func_61(sParam19);
					}
					if (!func_57(iParam0, 1) && !func_56(iParam0) && !gameplay::is_bit_set(iParam0->f_13, 0)) {
						if (bParam30) {
							func_55(iParam0, "LOSE_WANTED", 0);
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_53(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						gameplay::set_bit(&iParam0->f_13, 0);
						gameplay::clear_bit(&iParam0->f_13, 1);
					}
				}
				else {
					if (gameplay::is_bit_set(iParam0->f_13, 0)) {
						func_61("LOSE_WANTED");
						gameplay::clear_bit(&iParam0->f_13, 0);
						gameplay::set_bit(&iParam0->f_13, 1);
					}
					if (gameplay::is_bit_set(iParam0->f_13, 1)) {
						if (!func_57(iParam0, 1)) {
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_53(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							gameplay::clear_bit(&iParam0->f_13, 1);
						}
					}
					if (vehicle::is_vehicle_driveable(iParam18, 0)) {
						if (!ui::does_blip_exist(*iParam0)) {
							if (ui::does_blip_exist(iParam0->f_5)) {
								ui::remove_blip(&iParam0->f_5);
								func_61(sParam19);
							}
							*iParam0 = func_42(iParam18, 0, 0);
							ui::set_blip_display(*iParam0, 2);
							if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								func_51(*iParam0, iParam0);
							}
						}
						if (!func_57(iParam0, 2)) {
							if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
								func_55(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 3);
								gameplay::clear_bit(&iParam0->f_13, 4);
							}
							else if (gameplay::is_bit_set(iParam0->f_13, 9)) {
								if (!gameplay::is_string_null(sParam27)) {
									if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
										func_55(iParam0, sParam27, 0);
										gameplay::set_bit(&iParam0->f_13, 4);
									}
								}
								else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
									func_55(iParam0, sParam24, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
								if (!gameplay::is_bit_set(iParam0->f_13, 23)) {
									if (!ped::is_ped_injured(iParam0->f_17[0])) {
										func_53(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									gameplay::set_bit(&iParam0->f_13, 23);
								}
							}
						}
					}
				}
			}
			else {
				if (ui::does_blip_exist(iParam0->f_5)) {
					ui::remove_blip(&iParam0->f_5);
					func_61(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5) {
					if (iParam29 > 0) {
						if (!func_57(iParam0, 2)) {
							if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
								if (!gameplay::is_bit_set(iParam0->f_13, 13)) {
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3) {
										if (!ped::is_ped_injured(iParam0->f_17[iVar2])) {
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = gameplay::get_random_int_in_range(0, iVar8);
									if (!ped::is_ped_injured(iParam0->f_17[iVar9])) {
										func_53(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_55(iParam0, "MORE_SEATS", 0);
									gameplay::set_bit(&iParam0->f_13, 13);
								}
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
								func_55(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 3);
								gameplay::clear_bit(&iParam0->f_13, 4);
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								if (gameplay::is_bit_set(iParam0->f_13, 9)) {
									func_55(iParam0, sParam27, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
							}
						}
					}
					else if (!func_57(iParam0, 2)) {
						if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
							func_55(iParam0, sParam24, 0);
							gameplay::set_bit(&iParam0->f_13, 3);
							gameplay::clear_bit(&iParam0->f_13, 4);
						}
						else if (gameplay::is_bit_set(iParam0->f_13, 9)) {
							if (!gameplay::is_string_null(sParam27)) {
								if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
									func_55(iParam0, sParam27, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								func_55(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else {
		if (gameplay::is_bit_set(iParam0->f_13, 0)) {
			gameplay::clear_bit(&iParam0->f_13, 0);
		}
		func_61(sParam19);
		func_61(sParam24);
		func_61(sParam27);
		func_61(sParam24);
		func_61("LOSE_WANTED");
		if (ui::does_blip_exist(iParam0->f_5)) {
			ui::remove_blip(&iParam0->f_5);
		}
		if (ui::does_blip_exist(*iParam0)) {
			ui::remove_blip(iParam0);
		}
	}
	gameplay::clear_bit(&iParam0->f_13, 11);
	gameplay::clear_bit(&iParam0->f_13, 12);
	return 0;
}

// Position - 0x1FD2
int func_42(int iParam0, int iParam1, int iParam2) { return func_43(iParam0, !iParam1, iParam2); }

// Position - 0x1FE5
int func_43(int iParam0, int iParam1, bool bParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_44(network::network_is_game_in_progress(), 1f, 1f));
		if (!bParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_44(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_44(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x2089
var func_44(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x20A0
bool func_45(var *uParam0) {
	if (gameplay::is_bit_set(uParam0->f_13, 12)) {
		if (func_47(player::player_ped_id())) {
			if (func_46(1, 0, 1) || gameplay::is_bit_set(uParam0->f_13, 7)) {
				return true;
			}
		}
	}
	else if (func_46(1, 0, 1) || gameplay::is_bit_set(uParam0->f_13, 7)) {
		return true;
	}
	return false;
}

// Position - 0x20FE
int func_46(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_minigame_in_progress()) {
		return 0;
	}
	if (iParam0) {
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return 0;
		}
	}
	iVar0 = 0;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			return 0;
		}
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iParam0) {
			if (entity::is_entity_dead(iVar0, 0)) {
				return 0;
			}
		}
		if (iParam2) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
					return 0;
				}
			}
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_upright_value(iVar0) < 0.95f || entity::get_entity_upright_value(iVar0) > 1.011f) {
				return 0;
			}
		}
	}
	else if (iParam1) {
		return 0;
	}
	if (!player::is_player_ready_for_cutscene(player::player_id())) {
		return 0;
	}
	if (!player::can_player_start_mission(player::player_id())) {
		return 0;
	}
	return 1;
}

// Position - 0x21E3
bool func_47(int iParam0) {
	float fVar0;

	if (!ped::is_ped_injured(iParam0)) {
		fVar0 = entity::get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f) {
			return true;
		}
	}
	return false;
}

// Position - 0x221A
int func_48(int iParam0, int iParam1) {
	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) && iParam1) {
			if (func_49(player::player_ped_id(), iParam0)) {
				ped::set_group_separation_range(func_34(), 50f);
				return 1;
			}
		}
		else if (ped::is_ped_group_member(iParam0, func_34())) {
			ped::set_group_separation_range(func_34(), 50f);
			return 1;
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0x2285
bool func_49(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_sitting_in_any_vehicle(iParam0)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam0, 0);
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!ped::is_ped_injured(iParam1)) {
					if (ped::is_ped_sitting_in_vehicle(iParam1, iVar0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x22CD
int func_50(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2348
void func_51(int iParam0, var *uParam1) {
	if (ui::does_blip_exist(iParam0)) {
		if (ui::does_blip_exist(uParam1->f_6)) {
			ui::set_blip_route(uParam1->f_6, 0);
		}
		ui::_0x3DDA37128DD1ACA8(0);
		ui::_0x67EEDEA1B9BAFD94();
		uParam1->f_6 = iParam0;
		ui::set_blip_route(iParam0, 1);
	}
}

// Position - 0x2383
int func_52(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_44(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x23AF
void func_53(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_54(iParam2), 1);
}

// Position - 0x23C6
int func_54(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: return "SPEECH_PARAMS_STANDARD";

	case 1: return "SPEECH_PARAMS_ALLOW_REPEAT";

	case 2: return "SPEECH_PARAMS_BEAT";

	case 3: return "SPEECH_PARAMS_FORCE";

	case 4: return "SPEECH_PARAMS_FORCE_FRONTEND";

	case 5: return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";

	case 6: return "SPEECH_PARAMS_FORCE_NORMAL";

	case 7: return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";

	case 8: return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";

	case 9: return "SPEECH_PARAMS_FORCE_SHOUTED";

	case 10: return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";

	case 11: return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";

	case 12: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";

	case 13: return "SPEECH_PARAMS_MEGAPHONE";

	case 14: return "SPEECH_PARAMS_HELI";

	case 15: return "SPEECH_PARAMS_FORCE_MEGAPHONE";

	case 16: return "SPEECH_PARAMS_FORCE_HELI";

	case 17: return "SPEECH_PARAMS_INTERRUPT";

	case 18: return "SPEECH_PARAMS_INTERRUPT_SHOUTED";

	case 19: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";

	case 20: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";

	case 21: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";

	case 22: return "SPEECH_PARAMS_INTERRUPT_FRONTEND";

	case 23: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";

	case 24: return "SPEECH_PARAMS_ADD_BLIP";

	case 25: return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";

	case 26: return "SPEECH_PARAMS_ADD_BLIP_FORCE";

	case 27: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";

	case 28: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";

	case 29: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";

	case 30: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";

	case 31: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";

	case 32: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";

	case 33: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";

	case 34: return "SPEECH_PARAMS_SHOUTED";

	case 35: return "SPEECH_PARAMS_SHOUTED_CLEAR";

	case 36: return "SPEECH_PARAMS_SHOUTED_CRITICAL";

	default:
	}
	iVar0 = 0;
	return iVar0;
}

// Position - 0x25BB
void func_55(var *uParam0, char *sParam1, int iParam2) {
	if (!iParam2) {
		if (!gameplay::is_string_null(sParam1)) {
			if (!gameplay::are_strings_equal(sParam1, "")) {
				func_30(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = gameplay::get_game_timer();
}

// Position - 0x25F2
int func_56(int *iParam0) {
	if (!ped::is_ped_injured(iParam0->f_16)) {
		if (audio::is_ambient_speech_playing(iParam0->f_16)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2616
int func_57(int *iParam0, int iParam1) {
	if (iParam1 != 1 || ui::is_subtitle_preference_switched_on()) {
		if (ui::is_message_being_displayed()) {
			return 1;
		}
		if (func_58(iParam0)) {
			return 1;
		}
	}
	if (iParam1 != 2 || ui::is_subtitle_preference_switched_on()) {
		if (func_9() && !func_11()) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x266E
bool func_58(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar1 = gameplay::get_game_timer();
	iVar0 = iVar1 - uParam0->f_10;
	if (iVar0 < 35) {
		return true;
	}
	return false;
}

// Position - 0x2691
bool func_59(var *uParam0, int iParam1) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_60(iVar0, uParam0, iParam1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x26C2
bool func_60(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3) {
			if (entity::does_entity_exist(uParam1->f_17[iVar2])) {
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = vehicle::get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0) {
			if (iVar1 >= iParam2) {
				if (iParam2 > 1) {
					if (!vehicle::_0xF7F203E31F96F6A1(iParam0, 1)) {
						return true;
					}
				}
				else {
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0) {
			if (iVar0 > 1) {
				if (!vehicle::_0xF7F203E31F96F6A1(iParam0, 1)) {
					return true;
				}
			}
			else {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2756
void func_61(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		ui::clear_this_print(sParam0);
	}
}

// Position - 0x276E
bool func_62(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char *sParam7,
			 float fParam8, bool bParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14,
			 var uParam15, int iParam16, bool bParam17) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	int iVar31;
	int iVar32;

	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
			iVar3++;
		}
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			if (!gameplay::is_bit_set(uParam0->f_13, 29) && !gameplay::is_bit_set(uParam0->f_13, 28)) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					ped::set_ped_using_action_mode(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2) {
					gameplay::set_bit(&uParam0->f_13, 28);
				}
			}
		}
		else if (!gameplay::is_bit_set(uParam0->f_13, 29) && gameplay::is_bit_set(uParam0->f_13, 28)) {
			if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
				ped::set_ped_using_action_mode(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2) {
				gameplay::clear_bit(&uParam0->f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0) {
		return true;
	}
	if (gameplay::is_bit_set(uParam0->f_13, 26)) {
		bVar23 = false;
		if (!entity::does_entity_exist(uParam0->f_21)) {
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 =
				vehicle::get_closest_vehicle(entity::get_entity_coords(player::player_ped_id(), 1), 50f, 0, iVar25);
			if (vehicle::is_vehicle_driveable(iVar24, 0)) {
				uParam0->f_21 = iVar24;
			}
		}
		if (vehicle::is_vehicle_driveable(uParam0->f_21, 0)) {
			if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
							   entity::get_entity_coords(uParam0->f_21, 1)) < 400f) {
				if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					if (!player::is_player_wanted_level_greater(player::player_id(), 0) || !bParam17) {
						if (func_60(uParam0->f_21, uParam0, iVar3)) {
							iVar0 = 0;
							while (iVar0 < 3) {
								if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
									ped::set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
									if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
										ped::remove_ped_from_group(uParam0->f_17[iVar0]);
									}
									if (ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470) == 7 &&
										!func_77(uParam0->f_17[iVar0], uParam0->f_21)) {
										if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0])) {
											ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 1);
											ai::task_enter_vehicle(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0,
																   1f, 1, 0);
											ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else {
							bVar23 = true;
						}
					}
					else {
						bVar23 = true;
					}
				}
				else {
					bVar23 = true;
				}
			}
			else {
				bVar23 = true;
			}
		}
		else {
			bVar23 = true;
		}
		if (bVar23) {
			gameplay::clear_bit(&uParam0->f_13, 26);
			iVar0 = 0;
			while (iVar0 < 3) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					if (!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]) && !uParam0->f_15) {
						ai::clear_ped_tasks(uParam0->f_17[iVar0]);
					}
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
						if (func_75(uParam0, uParam0->f_17[iVar0], fParam8, 1)) {
							ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!gameplay::is_bit_set(uParam0->f_13, 26)) {
		if (!func_74(uParam0) && ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) &&
			!entity::does_entity_exist(iParam10)) {
			iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar13, 0)) {
				if (!gameplay::is_bit_set(uParam0->f_13, 13)) {
					if (iParam16 == 4 || iParam16 == 5) {
					}
					if (!func_57(uParam0, 2)) {
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3) {
							if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = gameplay::get_random_int_in_range(0, iVar26);
						if (!ped::is_ped_injured(uParam0->f_17[iVar27])) {
							func_53(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_55(uParam0, "MORE_SEATS", 0);
						gameplay::set_bit(&uParam0->f_13, 13);
					}
				}
				iVar12 = 1;
			}
		}
		else {
			iVar12 = 0;
			gameplay::clear_bit(&uParam0->f_13, 13);
			func_61("MORE_SEATS");
		}
		if (!entity::does_entity_exist(iParam10)) {
			if (!ped::is_ped_injured(uParam0->f_17[0]) || !ped::is_ped_injured(uParam0->f_17[1]) ||
				!ped::is_ped_injured(uParam0->f_17[2])) {
				if (!gameplay::is_bit_set(uParam0->f_13, 31)) {
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) && !func_57(uParam0, 2)) {
						iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (func_73(iVar13, uParam0)) {
							func_55(uParam0, "CMN_VEHSUIT", 0);
							gameplay::set_bit(&uParam0->f_13, 31);
						}
					}
				}
				else if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					gameplay::clear_bit(&uParam0->f_13, 31);
					func_61("CMN_VEHSUIT");
				}
			}
		}
		if (vehicle::is_vehicle_driveable(iParam10, 0)) {
			if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iParam10)) {
				if (controls::is_control_just_pressed(0, 75)) {
					gameplay::set_bit(&uParam0->f_13, 21);
				}
			}
			else if (gameplay::is_bit_set(uParam0->f_13, 21)) {
				gameplay::clear_bit(&uParam0->f_13, 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
						ped::set_ped_dies_in_water(uParam0->f_17[iVar0], 1);
					}
					else {
						ped::set_ped_dies_in_water(uParam0->f_17[iVar0], 0);
					}
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
						iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (vehicle::is_vehicle_driveable(iVar13, 0)) {
							if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
								if (!func_74(uParam0) && ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
									if (!func_72(uParam0->f_17[iVar0])) {
										ped::remove_ped_from_group(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !entity::is_entity_dead(iVar13, 0)) {
							if (ped::is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iVar13)) {
								if (entity::is_entity_in_water(iVar13) && !vehicle::is_vehicle_on_all_wheels(iVar13)) {
									vVar28 = {entity::get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f) {
										ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
						if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
							iVar13 = ped::get_vehicle_ped_is_in(uParam0->f_17[iVar0], 0);
							if (!entity::is_entity_dead(iVar13, 0)) {
								if (vehicle::is_vehicle_driveable(iParam10, 0)) {
									if (iVar13 != iParam10) {
										if (!ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iVar13)) {
											if (entity::get_entity_speed(iVar13) > 5f) {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else {
									if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
										iVar31 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
									}
									if (vehicle::is_vehicle_driveable(iVar31, 0)) {
										if (iVar13 != iVar31) {
											if (entity::get_entity_speed(iVar13) > 5f) {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
						iVar32 = ped::get_vehicle_ped_is_using(player::player_ped_id());
						if (entity::does_entity_exist(iVar32)) {
							if (func_60(iVar32, uParam0, 0)) {
								if (func_71(iVar0, uParam0) || !gameplay::is_bit_set(uParam0->f_13, 27)) {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
									func_35(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3) {
										gameplay::set_bit(&uParam0->f_13, 27);
									}
								}
							}
							else if (!func_71(iVar0, uParam0)) {
								if (entity::get_entity_model(iVar32) == joaat("sentinel2")) {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 4);
								}
								else {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 2);
								}
								func_70(iVar0, uParam0);
							}
						}
					}
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34()) &&
						!func_69(uParam0->f_17[iVar0], iParam10) && !func_68(uParam0->f_17[iVar0], iParam10)) {
						if (func_75(uParam0, uParam0->f_17[iVar0], fParam8, iParam11)) {
							if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
								if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
									!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
									!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
									!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0])) {
									iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7) {
										ai::clear_ped_tasks(uParam0->f_17[iVar0]);
									}
									ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_34());
									bVar11 = false;
								}
							}
						}
						if (bVar11) {
							if (!ui::does_blip_exist(uParam0->f_1[iVar0])) {
								uParam0->f_11 = gameplay::get_game_timer();
								uParam0->f_1[iVar0] = func_42(uParam0->f_17[iVar0], 0, 0);
								ui::set_blip_display(uParam0->f_1[iVar0], 2);
								if (bParam9) {
									func_51(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
						if (func_48(uParam0->f_17[iVar0], 1) || func_69(uParam0->f_17[iVar0], iParam10) || iParam12 ||
							vehicle::is_vehicle_driveable(iParam10, 0) &&
								!ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0)) {
							if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
								ui::remove_blip(&uParam0->f_1[iVar0]);
								func_61(uVar15[iVar0]);
							}
						}
						else {
							if (bParam9) {
								func_51(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (vehicle::is_vehicle_driveable(iParam10, 0)) {
						if (!ped::is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iParam10)) {
							if (entity::is_entity_at_entity(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) &&
								!gameplay::is_bit_set(uParam0->f_13, 11) &&
								!(bParam17 && player::is_player_wanted_level_greater(player::player_id(), 0) &&
								  !ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0))) {
								if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
									if (!ped::is_ped_in_vehicle(uParam0->f_17[iVar0], iParam10, 0)) {
										if (!func_48(uParam0->f_17[iVar0], 1)) {
											if (func_47(uParam0->f_17[iVar0])) {
												iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7) {
													ai::task_leave_any_vehicle(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else {
									if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
										if (!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
											!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
											!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]) &&
											!fire::is_entity_on_fire(iParam10)) {
											ped::remove_ped_from_group(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_77(uParam0->f_17[iVar0], iParam10)) {
										if (!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
											!ped::is_ped_jumping_out_of_vehicle(player::player_ped_id()) &&
											!func_67(uParam0->f_17[iVar0], 2f) &&
											!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
											!fire::is_entity_on_fire(iParam10)) {
											ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 1);
											if (gameplay::is_bit_set(uParam0->f_13, 10)) {
												ped::set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
											}
											ai::task_enter_vehicle(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1,
																   0);
											ped::set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], 0);
										}
									}
									else if (ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0)) {
										uParam0->f_1[iVar0] = func_42(uParam0->f_17[iVar0], 0, 0);
										ui::set_blip_display(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
								if (func_75(uParam0, uParam0->f_17[iVar0], fParam8, iParam11)) {
									if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
										!ai::is_ped_getting_up(uParam0->f_17[iVar0])) {
										iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7) {
											ai::clear_ped_tasks(uParam0->f_17[iVar0]);
										}
										ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 0);
										ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_34());
									}
								}
							}
						}
						else if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iParam10)) {
							if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_34())) {
								if (!gameplay::is_bit_set(uParam0->f_13, 21)) {
									ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_34());
								}
							}
							else if (gameplay::is_bit_set(uParam0->f_13, 21)) {
								ped::remove_ped_from_group(uParam0->f_17[iVar0]);
								gameplay::set_bit(&uParam0->f_13, 21);
							}
						}
						else if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_34()) &&
								 !fire::is_entity_on_fire(iParam10)) {
							ped::remove_ped_from_group(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
					ui::remove_blip(&uParam0->f_1[iVar0]);
					func_61(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_57(uParam0, 2)) {
			if (iVar1 > 0) {
				iVar0 = 0;
				while (iVar0 < 3) {
					if (iVar7[iVar0]) {
						if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
							if (func_72(uParam0->f_17[iVar0]) ||
								entity::is_entity_at_entity(uParam0->f_17[iVar0], player::player_ped_id(), uParam0->f_8,
															uParam0->f_8, uParam0->f_8, 0, 1, 0)) {
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
						if (!entity::is_entity_at_entity(uParam0->f_17[iVar0], player::player_ped_id(),
														 uParam0->f_8 * 0.85f, uParam0->f_8 * 0.85f, uParam0->f_8, 0, 1,
														 0) &&
							!func_72(uParam0->f_17[iVar0])) {
						}
					}
					iVar0++;
				}
			}
			iVar5 = gameplay::get_game_timer();
			if (iVar5 - uParam0->f_11 > 1500 || iVar3 == 1) {
				if (iVar1 > 0) {
					if (uParam0->f_12 < iVar1) {
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1) {
							if (!gameplay::is_bit_set(uParam0->f_13, 5)) {
								func_55(uParam0, sParam7, 0);
								gameplay::set_bit(&uParam0->f_13, 5);
								uParam0->f_12 = iVar1;
							}
							else {
								uParam0->f_12 = iVar1;
							}
						}
						else {
							iVar0 = 0;
							while (iVar0 < 3) {
								if (iVar7[iVar0]) {
									if (!func_66(iVar0, uParam0)) {
										if (!gameplay::is_string_null(uVar19[iVar0])) {
											if (!gameplay::are_strings_equal(uVar19[iVar0], "")) {
												func_64(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_63(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_66(iVar0, uParam0)) {
											func_55(uParam0, uVar15[iVar0], 0);
											func_63(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else {
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else {
					uParam0->f_12 = 0;
				}
			}
		}
		gameplay::clear_bit(&uParam0->f_13, 10);
		if (iVar6 && !iVar12) {
			iVar0 = 0;
			while (iVar0 < 3) {
				if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
					ui::remove_blip(&uParam0->f_1[iVar0]);
					func_61(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_61("MORE_SEATS");
			return true;
		}
	}
	return false;
}

// Position - 0x37DF
void func_63(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::set_bit(&uParam1->f_13, 14); break;

	case 1: gameplay::set_bit(&uParam1->f_13, 15); break;

	case 2: gameplay::set_bit(&uParam1->f_13, 16); break;
	}
}

// Position - 0x3827
void func_64(var *uParam0, char *sParam1, char *sParam2, int iParam3) {
	if (!iParam3) {
		if (!gameplay::is_string_null(sParam1)) {
			if (!gameplay::are_strings_equal(sParam1, "")) {
				func_65(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = gameplay::get_game_timer();
}

// Position - 0x3860
void func_65(char *sParam0, char *sParam1, int iParam2, int iParam3) {
	iParam3 = iParam3;
	ui::begin_text_command_print(sParam0);
	ui::add_text_component_substring_text_label(sParam1);
	ui::end_text_command_print(iParam2, 1);
}

// Position - 0x387F
int func_66(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: return gameplay::is_bit_set(uParam1->f_13, 14);

	case 1: return gameplay::is_bit_set(uParam1->f_13, 15);

	case 2: return gameplay::is_bit_set(uParam1->f_13, 16);

	default:
	}
	return 0;
}

// Position - 0x38C8
int func_67(int iParam0, float fParam1) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(iParam0, 0);
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_speed(iVar0) > fParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x38FF
int func_68(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (!ped::is_ped_group_member(iParam0, func_34())) {
			iVar0 = ped::set_exclusive_phone_relationships(iParam0);
			if (vehicle::is_vehicle_driveable(iParam1, 0)) {
				if (entity::is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0)) {
					if (iVar0 == iParam1) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x3966
int func_69(int iParam0, int iParam1) {
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::does_entity_exist(iParam1)) {
			if (vehicle::is_vehicle_driveable(iParam1, 0)) {
				if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x399B
void func_70(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::set_bit(&uParam1->f_13, 17); break;

	case 1: gameplay::set_bit(&uParam1->f_13, 18); break;

	case 2: gameplay::set_bit(&uParam1->f_13, 19); break;
	}
}

// Position - 0x39E3
int func_71(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: return gameplay::is_bit_set(uParam1->f_13, 17);

	case 1: return gameplay::is_bit_set(uParam1->f_13, 18);

	case 2: return gameplay::is_bit_set(uParam1->f_13, 19);

	default:
	}
	return 0;
}

// Position - 0x3A2C
int func_72(int iParam0) {
	int iVar0;
	int iVar1;

	if (player::is_player_playing(player::player_id())) {
		iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (!ped::is_ped_injured(iParam0)) {
				iVar1 = ped::get_vehicle_ped_is_using(iParam0);
				if (vehicle::is_vehicle_driveable(iVar1, 0)) {
					if (iVar0 == iVar1) {
						if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, 20f, 20f, 20f, 0, 1, 0) &&
							entity::is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0)) {
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x3AB9
bool func_73(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (entity::get_entity_model(iParam0) == joaat("bus") || entity::get_entity_model(iParam0) == joaat("coach")) {
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3) {
				if (!ped::is_ped_injured(uParam1->f_17[iVar2])) {
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = vehicle::get_ped_in_vehicle_seat(iParam0, 0, 0);
			if (!ped::is_ped_injured(iVar3)) {
				if (iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1] || iVar3 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			iVar4 = vehicle::get_ped_in_vehicle_seat(iParam0, 1, 0);
			if (!ped::is_ped_injured(iVar4)) {
				if (iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1] || iVar4 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			iVar5 = vehicle::get_ped_in_vehicle_seat(iParam0, 2, 0);
			if (!ped::is_ped_injured(iVar5)) {
				if (iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1] || iVar5 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			if (iVar1 < iVar0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3C19
bool func_74(var *uParam0) {
	int iVar0;

	if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_60(iVar0, uParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3C48
bool func_75(var *uParam0, int iParam1, float fParam2, int iParam3) {
	int iVar0;

	if (!ped::is_ped_injured(iParam1)) {
		if (ped::is_ped_sitting_in_any_vehicle(iParam1)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam1, 0);
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iVar0)) {
						if (func_74(uParam0)) {
							return true;
						}
					}
					else if (iParam3) {
						return true;
					}
				}
				else if (entity::is_entity_at_entity(player::player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)) {
					return true;
				}
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)) {
			if (!iParam3) {
				iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
				if (entity::does_entity_exist(iVar0)) {
					if (func_60(iVar0, uParam0, 0)) {
						if (vehicle::is_vehicle_driveable(iVar0, 0)) {
							if (func_76(iVar0)) {
								return true;
							}
						}
					}
				}
				else {
					return true;
				}
			}
			else {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3D26
bool func_76(int iParam0) {
	float fVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		fVar0 = entity::get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f) {
			return true;
		}
	}
	return false;
}

// Position - 0x3D5E
int func_77(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			iVar0 = ped::get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x3D8E
void func_78() {
	int iVar0;
	int iVar1;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		iVar0 = ped::set_exclusive_phone_relationships(player::player_ped_id());
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
			if (!ped::is_ped_injured(iVar1)) {
				if (iVar1 != player::player_ped_id()) {
					if (entity::is_entity_a_mission_entity(iVar1)) {
						if (!ped::is_ped_headtracking_entity(iVar1, player::player_ped_id())) {
							ai::task_look_at_entity(iVar1, player::player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

// Position - 0x3DFB
void func_79(var *uParam0) {
	int iVar0;

	if (!gameplay::is_bit_set(uParam0->f_13, 25)) {
		if (player::is_player_playing(player::player_id())) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 32, 0);
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 305, 1);
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 268, 1);
					ped::set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		gameplay::set_bit(&uParam0->f_13, 25);
	}
}

// Position - 0x3E9E
void func_80(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
			if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
				if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
					ped::set_ped_can_play_ambient_anims(uParam0->f_17[iVar0], 0);
					ped::set_ped_can_play_ambient_base_anims(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (player::is_player_playing(player::player_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
				ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 0);
				ped::set_ped_can_play_ambient_base_anims(player::player_ped_id(), 0);
			}
		}
	}
}

// Position - 0x3F34
char *func_81() {
	var uVar0;

	return uVar0;
}

// Position - 0x3F3E
Vector3 func_82() {
	vector3 vVar0;

	return vVar0;
}

// Position - 0x3F4A
void func_83(int iParam0, int iParam1) {
	int iVar0;

	Global_55832 = iParam0;
	if (!Global_55830) {
		Global_55830 = 1;
	}
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] == iParam0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

// Position - 0x3F94
int func_84(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	char *sVar1;

	if (iParam1 == 0) {
		sVar1 = entity::get_entity_script(iParam0, &uVar0);
		if (!gameplay::is_string_null_or_empty(sVar1)) {
			if (gameplay::get_hash_key(sVar1) == gameplay::get_hash_key("vehicle_gen_controller")) {
				return 0;
			}
		}
	}
	func_85(iParam0, iParam2);
	return 1;
}

// Position - 0x3FD4
void func_85(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_90(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_86(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x41D7
void func_86(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_89(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_88(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_87(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x4481
int func_87(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x4531
int func_88(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x460B
void func_89(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x46BB
int func_90(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_106(iParam0, 0, 0) ||
		func_106(iParam0, 1, 0) || func_106(iParam0, 2, 0) || func_105(iParam0) != 145 || func_104(iParam0) ||
		func_103(iParam0) || func_102(iParam0) || func_101(iParam0) || !func_91(entity::get_entity_model(iParam0))) {
		if (func_103(iParam0)) {
		}
		if (func_103(iParam0)) {
		}
		if (func_106(iParam0, 0, 0)) {
		}
		if (func_106(iParam0, 1, 0)) {
		}
		if (func_106(iParam0, 2, 0)) {
		}
		if (func_105(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x4798
int func_91(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_92(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0x4949
int func_92(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_100()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_99() && !func_98() && !func_97() && !func_96() && !func_100()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_97()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_95(iParam0)) {
			return 0;
		}
	}
	if (!func_93(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x4AD7
int func_93(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_94()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x4BA3
int func_94() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x4BB7
int func_95(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x58FA
int func_96() { return 0; }

// Position - 0x5903
int func_97() { return 1; }

// Position - 0x590C
int func_98() { return 1; }

// Position - 0x5915
int func_99() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x592E
bool func_100() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x59E9
int func_101(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_92(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x5A2F
int func_102(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x5A6A
bool func_103(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x5AE6
int func_104(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x5BCE
int func_105(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x5C31
bool func_106(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_107(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x5CA2
bool func_107(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x5D7A
void func_108() {
	int iVar0;

	switch (iLocal_1481) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::do_screen_fade_in(800);
		}
		iVar0 = 0;
		while (iVar0 <= 8) {
			if (func_31(Local_111[iVar0 /*14*/])) {
				if (!iLocal_450) {
					func_28(&uLocal_238, 1, Local_111[iVar0 /*14*/], "ArmyPed", 0, 1);
					func_140();
					audio::_play_ambient_speech1(Local_111[iVar0 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
					iLocal_450 = 1;
				}
			}
			iVar0++;
		}
		ped::set_relationship_between_groups(5, 1862763509, iLocal_493);
		unk1::_0x293220DA1B46CEBC(3f, 5f, 4);
		iLocal_1481++;
		break;

	case 1:
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
			unk1::_0x293220DA1B46CEBC(3f, 5f, 4);
			func_111(0f, 0f, 0f, -1f, 0, 145);
			if (ui::does_blip_exist(Local_94[0 /*2*/].f_1)) {
				ui::remove_blip(&Local_94[0 /*2*/].f_1);
			}
			func_110(2);
			iLocal_1481 = 0;
		}
		else if (func_31(Local_94[0 /*2*/]) && !ui::does_blip_exist(Local_94[0 /*2*/].f_1)) {
			Local_94[0 /*2*/].f_1 = func_109(Local_94[0 /*2*/], 0, 0);
		}
		break;
	}
}

// Position - 0x5E94
int func_109(int iParam0, int iParam1, int iParam2) { return func_43(iParam0, !iParam1, iParam2); }

// Position - 0x5EA7
int func_110(int iParam0) {
	if (iLocal_1479 == 0) {
		iLocal_1482 = iParam0;
		iLocal_1479 = 1;
		return 1;
	}
	return 0;
}

// Position - 0x5EC7
void func_111(vector3 vParam0, float *fParam3, int iParam4, int iParam5) {
	vector3 vVar0;
	float *fVar3;

	if (entity::does_entity_exist(Global_93635.f_4)) {
		if (vehicle::is_vehicle_driveable(Global_93635.f_4, 0)) {
			if (func_139(24) != Global_93635.f_4) {
				if (iParam4 == 1) {
					if (func_136(entity::get_entity_coords(Global_93635.f_4, 1), iParam5, &vVar0, &fVar3)) {
						vParam0 = {vVar0};
						fParam3 = fVar3;
					}
				}
				func_112(Global_93635.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

// Position - 0x5F42
void func_112(int iParam0, vector3 vParam1, float *fParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_135(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_86(iParam0, &Var0);
		if (func_134(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_128(iParam5, &Var0, vParam1, fParam4, func_105(iParam0));
		func_113(iParam5, iParam0, 0);
	}
}

// Position - 0x606B
void func_113(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_125(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_114();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_139(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_85(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x6188
var func_114() {
	int *iVar0;

	func_124(&iVar0, time::get_clock_seconds());
	func_123(&iVar0, time::get_clock_minutes());
	func_122(&iVar0, time::get_clock_hours());
	func_117(&iVar0, time::get_clock_day_of_month());
	func_116(&iVar0, time::get_clock_month());
	func_115(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x61CE
void func_115(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x6254
void func_116(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x6287
void func_117(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_121(*uParam0);
	iVar1 = func_119(*uParam0);
	if (iParam1 < 1 || iParam1 > func_118(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x62D8
int func_118(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x637A
var func_119(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_120(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x639F
int func_120(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x63B6
int func_121(var uParam0) { return uParam0 & 15; }

// Position - 0x63C3
void func_122(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x63FD
void func_123(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x6438
void func_124(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x6474
bool func_125(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_126(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_126(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_126(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_126(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_126(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_126(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_126(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_126(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_126(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_100()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_100()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_134(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_134(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_134(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x7B6B
int func_126(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_21(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_127(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x7BAD
void func_127(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x7E09
void func_128(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_125(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_133(iParam0);
			func_132(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_129(iParam0, 1);
		}
	}
}

// Position - 0x7F08
void func_129(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_131(iParam0, 0)) {
			func_130(iParam0, 1, 0);
			func_130(iParam0, 2, 0);
			func_130(iParam0, 3, 0);
			func_130(iParam0, 4, 0);
			func_130(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_130(iParam0, 0, 0);
	}
}

// Position - 0x7F65
void func_130(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x7FA0
int func_131(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x7FC3
void func_132(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0x8091
void func_133(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_125(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_129(iParam0, 0);
		}
	}
}

// Position - 0x810B
bool func_134(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x8152
void func_135(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_133(iParam0);
	func_129(iParam0, 0);
}

// Position - 0x8179
bool func_136(vector3 vParam0, int iParam3, var *uParam4, float *fParam5) {
	int iVar0;

	iVar0 = func_137(vParam0, iParam3, 1);
	switch (iVar0) {
	case 0:
		*uParam4 = {-827.351f, 157.785f, 68.2143f};
		*fParam5 = 85.1509f;
		return true;

	case 1:
	case 2:
		*uParam4 = {1992.523f, 3813.916f, 31.1008f};
		*fParam5 = 122.1498f;
		return true;

	case 3:
		*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
		*fParam5 = 303.2098f;
		return true;

	case 4:
		*uParam4 = {118.1067f, -1325.906f, 28.3706f};
		*fParam5 = 123.5016f;
		return true;

	case 5:
		*uParam4 = {-18.118f, -1455.126f, 29.5004f};
		*fParam5 = 273.2822f;
		return true;

	case 6:
		*uParam4 = {1.5947f, 543.4017f, 173.4644f};
		*fParam5 = 310.7556f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x828F
int func_137(vector3 vParam0, int iParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1) {
		if (Global_86862[iVar0 /*10*/].f_7 != 263) {
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145) {
				if (func_138(iVar0) || iParam4 == 0) {
					fVar1 = gameplay::get_distance_between_coords(vParam0, Global_86862[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2) {
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x831E
var func_138(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x8336
int func_139(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x8352
void func_140() {
	Global_14611 = 0;
	func_141();
}

// Position - 0x8362
void func_141() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x8383
void func_142() {
	switch (iLocal_1481) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::do_screen_fade_in(800);
		}
		while (Global_91491 == 12) {
			system::wait(0);
		}
		if (func_31(Local_94[0 /*2*/]) && !ui::does_blip_exist(Local_94[0 /*2*/].f_1)) {
			if (ui::get_blip_from_entity(Local_94[0 /*2*/]) != 0) {
				Local_94[0 /*2*/].f_1 = ui::get_blip_from_entity(Local_94[0 /*2*/]);
			}
			else {
				Local_94[0 /*2*/].f_1 = func_109(Local_94[0 /*2*/], 0, 0);
			}
		}
		unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
		func_30("RHP_GOODS", 7500, 1);
		audio::trigger_music_event("RHP1_START");
		func_143("RHP_HELP", -1);
		iLocal_434 = 0;
		iLocal_1481++;
		break;

	case 1:
		if (bLocal_456) {
			iLocal_450 = 0;
			func_110(1);
			iLocal_1481 = 0;
		}
		break;
	}
}

// Position - 0x8458
void func_143(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x846F
void func_144() {
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (entity::does_entity_exist(Local_101[iLocal_447 /*2*/])) {
			if (ped::is_ped_injured(Local_101[iLocal_447 /*2*/])) {
				func_197(&Local_101[iLocal_447 /*2*/], 1, 0, 1);
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (entity::does_entity_exist(Local_94[iLocal_447 /*2*/])) {
			if (!vehicle::is_vehicle_driveable(Local_94[iLocal_447 /*2*/], 0)) {
				if (iLocal_447 == 0) {
					func_186(3);
				}
				func_185(&Local_94[iLocal_447 /*2*/]);
			}
			else if (Local_94[iLocal_447 /*2*/] == Local_94[0 /*2*/]) {
				if (func_184(&Local_94[0 /*2*/])) {
					func_186(4);
					func_185(&Local_94[0 /*2*/]);
				}
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1) {
		if (entity::does_entity_exist(Local_111[iLocal_447 /*14*/])) {
			if (bLocal_456) {
				func_183(Local_111[iLocal_447 /*14*/], &Local_111[iLocal_447 /*14*/].f_2, -1, 0, 0, 0, 400f, 0, -1, -1,
						 1);
			}
			if (ped::is_ped_injured(Local_111[iLocal_447 /*14*/])) {
				if (Local_111[iLocal_447 /*14*/].f_10 == 0) {
					func_182(719, 1, 0);
					Local_111[iLocal_447 /*14*/].f_10 = 1;
				}
				entity::set_ped_as_no_longer_needed(&Local_111[iLocal_447 /*14*/]);
			}
		}
		if (func_31(Local_111[iLocal_447 /*14*/]) && gameplay::get_game_timer() - iLocal_455 > 8000 && bLocal_456 &&
			!audio::is_ambient_speech_playing(Local_111[iLocal_447 /*14*/]) &&
			!ped::is_ped_in_any_vehicle(Local_111[iLocal_447 /*14*/], 0)) {
			if (entity::get_entity_health(Local_111[iLocal_447 /*14*/]) < 110) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "DYING_MOAN", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (entity::get_entity_health(Local_111[iLocal_447 /*14*/]) < 140) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "DYING_HELP", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (ped::is_ped_going_into_cover(Local_111[iLocal_447 /*14*/])) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "TAKE_COVER", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (ai::is_ped_running(Local_111[iLocal_447 /*14*/])) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "COVER_ME", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (ped::is_ped_shooting(Local_111[iLocal_447 /*14*/])) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "COVER_YOU", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (!weapon::is_ped_weapon_ready_to_shoot(Local_111[iLocal_447 /*14*/])) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "RELOADING", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
			else if (func_181(Local_111[iLocal_447 /*14*/], -828834893, 1) ||
					 func_181(Local_111[iLocal_447 /*14*/], 451360105, 1)) {
				audio::_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
				iLocal_455 = gameplay::get_game_timer();
			}
		}
		iLocal_447++;
	}
	if (player::get_player_wanted_level(player::player_id()) > 0) {
		player::set_police_radar_blips(1);
	}
	else {
		player::set_police_radar_blips(0);
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(player::player_ped_id())) {
		if (entity::is_entity_in_angled_area(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f,
											 21.45629f, 30f, 0, 1, 0) &&
			ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
			player::set_max_wanted_level(5);
			player::set_player_wanted_level(player::player_id(), 4, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
		}
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(player::player_ped_id())) {
		if (iLocal_1480 > 0) {
			if (gameplay::get_distance_between_coords(entity::get_entity_coords(Local_94[0 /*2*/], 1),
													  entity::get_entity_coords(player::player_ped_id(), 1),
													  1) > 650f) {
				func_186(5);
			}
			else if (gameplay::get_distance_between_coords(entity::get_entity_coords(Local_94[0 /*2*/], 1),
														   entity::get_entity_coords(player::player_ped_id(), 1),
														   1) > 600f) {
				if (!iLocal_454) {
					func_30("RHP_LWARN", 7500, 1);
					iLocal_454 = 1;
				}
			}
			else {
				iLocal_454 = 0;
			}
		}
	}
	if (func_31(Local_94[0 /*2*/])) {
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 9 - 1) {
			if (func_31(Local_111[iVar1 /*14*/])) {
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0) &&
				!ped::is_ped_in_combat(player::player_ped_id(), 0) && !ped::is_ped_shooting(player::player_ped_id())) {
				if (!ped::is_ped_headtracking_entity(player::player_ped_id(), Local_94[0 /*2*/])) {
					ai::task_look_at_entity(player::player_ped_id(), Local_94[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (ped::is_ped_headtracking_entity(player::player_ped_id(), Local_94[0 /*2*/])) {
				ai::task_clear_look_at(player::player_ped_id());
			}
		}
	}
	if (!iLocal_444) {
		if (iLocal_1480 == 0) {
			if (fLocal_441 != 0f) {
				fLocal_441 = 0f;
			}
		}
		else if (iLocal_1480 == 1) {
			if (fLocal_441 < 5f) {
				fLocal_441 += gameplay::get_frame_time();
			}
		}
		if (fLocal_441 < 3f) {
			iVar2 = 0;
			while (iVar2 < Local_94) {
				if (entity::does_entity_exist(Local_94[iVar2 /*2*/]) && !entity::does_entity_exist(uLocal_429[iVar2])) {
					uLocal_429[iVar2] = Local_94[iVar2 /*2*/];
				}
				if (entity::does_entity_exist(uLocal_429[iVar2])) {
					if (entity::is_entity_dead(uLocal_429[iVar2], 0) ||
						!vehicle::is_vehicle_driveable(uLocal_429[iVar2], 0)) {
						iVar3 = vehicle::get_vehicle_cause_of_destruction(uLocal_429[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb")) {
							func_180(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_88321) {
				if (entity::does_entity_exist(Global_88321[iVar2])) {
					if (entity::is_entity_dead(Global_88321[iVar2], 0) ||
						!vehicle::is_vehicle_driveable(Global_88321[iVar2], 0)) {
						iVar4 = vehicle::get_vehicle_cause_of_destruction(Global_88321[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb")) {
							func_180(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_163();
	func_153();
	func_149();
	func_148();
	player::set_all_random_peds_flee_this_frame(player::player_id());
	if (!iLocal_443) {
		if (func_147(entity::get_entity_coords(player::player_ped_id(), 1), 3, 0, 0)) {
			iLocal_443 = 1;
			gameplay::_0xD9F692D349249528();
			player::set_wanted_level_multiplier(1f);
			player::set_max_wanted_level(5);
			player::set_police_radar_blips(1);
			player::set_player_wanted_level_no_drop(player::player_id(), 3, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			iLocal_443 = 1;
		}
	}
	else if (!func_147(entity::get_entity_coords(player::player_ped_id(), 1), 3, 0, 0)) {
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			gameplay::enable_dispatch_service(5, 0);
			gameplay::enable_dispatch_service(3, 0);
			gameplay::enable_dispatch_service(1, 0);
			gameplay::enable_dispatch_service(10, 0);
			gameplay::enable_dispatch_service(9, 0);
			gameplay::_0xE532EC1A63231B4F(1, 0);
			gameplay::_0xE532EC1A63231B4F(2, 0);
			gameplay::_0xE532EC1A63231B4F(8, 0);
			player::set_wanted_level_multiplier(0f);
			player::set_max_wanted_level(0);
			player::set_police_radar_blips(0);
			iLocal_443 = 0;
		}
	}
	if (entity::does_entity_exist(player::player_ped_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!iLocal_1491) {
				func_146(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 725);
				func_145(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 718);
				iLocal_1491 = 1;
			}
		}
		else if (iLocal_1491) {
			iLocal_1491 = 0;
		}
		if (!iLocal_1492) {
			func_146(player::player_ped_id(), 722);
			iLocal_1492 = 1;
		}
	}
	if (!iLocal_442) {
		iVar5 = 0;
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
				iVar5 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			}
		}
		else if (entity::does_entity_exist(player::get_players_last_vehicle()) &&
				 vehicle::is_vehicle_driveable(player::get_players_last_vehicle(), 0) &&
				 system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
								entity::get_entity_coords(player::get_players_last_vehicle(), 1)) < 10000f) {
			iVar5 = player::get_players_last_vehicle();
		}
		if (entity::does_entity_exist(iVar5) && vehicle::is_vehicle_driveable(iVar5, 0) && iVar5 != iLocal_428 &&
			iVar5 != Local_94[1 /*2*/] && iVar5 != Local_94[2 /*2*/] && iVar5 != Local_94[0 /*2*/] &&
			vehicle::is_this_model_a_car(entity::get_entity_model(iVar5))) {
			entity::set_entity_as_mission_entity(iVar5, 1, 1);
			iLocal_428 = iVar5;
		}
	}
}

// Position - 0x8C69
void func_145(var uParam0, int iParam1) {
	Global_55833 = uParam0;
	Global_55834 = iParam1;
}

// Position - 0x8C7B
void func_146(int iParam0, int iParam1) {
	int iVar0;

	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1) {
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0) {
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

// Position - 0x8CE6
bool func_147(vector3 vParam0, int iParam3, int iParam4, int iParam5) {
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3) {
	case 1:
		vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
		vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
		fVar92[0] = 171.25f;
		vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
		vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
		fVar92[1] = 132f;
		vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
		vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
		fVar92[2] = 132f;
		iVar108 = 3;
		break;

	case 2:
		vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
		vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
		fVar92[0] = 247f;
		vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
		vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
		fVar92[1] = 149f;
		vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
		vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
		fVar92[2] = 185.5f;
		vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
		vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
		fVar92[3] = 250f;
		vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
		vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
		fVar92[4] = 193.5f;
		vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
		vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
		fVar92[5] = 234.5f;
		vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
		vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
		fVar92[6] = 16f;
		vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
		vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
		fVar92[7] = 80f;
		vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
		vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
		fVar92[8] = 142f;
		vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
		vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
		fVar92[9] = 30.75f;
		vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
		vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
		fVar92[10] = 150f;
		vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
		vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
		fVar92[11] = 29.25f;
		vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
		vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
		fVar92[12] = 43f;
		iVar108 = 13;
		break;

	case 3:
		vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
		vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
		fVar92[0] = 250f;
		vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
		vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
		fVar92[1] = 180f;
		vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
		vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
		fVar92[2] = 200f;
		vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
		vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
		fVar92[3] = 86.25f;
		vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
		vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[4] = 140.5f;
		vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
		vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[5] = 140.5f;
		vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
		vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
		fVar92[6] = 90f;
		vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
		vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
		fVar92[7] = 100f;
		vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
		vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
		fVar92[8] = 248.75f;
		vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
		vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
		fVar92[9] = 128f;
		vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
		vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
		fVar92[10] = 127.25f;
		vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
		vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
		fVar92[11] = 16f;
		vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
		vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
		fVar92[12] = 214.25f;
		vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
		vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
		fVar92[13] = 65.75f;
		if (iParam5) {
			iVar111 = iParam4;
		}
		else {
			iVar111 = 0;
		}
		vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
		iVar108 = 14;
		break;

	case 4:
		vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
		vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
		fVar92[0] = 114f;
		vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
		vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
		fVar92[1] = 88.5f;
		vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
		vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
		fVar92[2] = 133.25f;
		vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
		vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
		fVar92[3] = 104.5f;
		vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
		vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
		fVar92[4] = 121.75f;
		vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
		vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
		fVar92[5] = 84.5f;
		vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
		vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
		fVar92[6] = 103.75f;
		vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
		vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
		fVar92[7] = 104.25f;
		vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
		vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
		fVar92[8] = 91f;
		vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
		vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
		fVar92[9] = 51.25f;
		iVar108 = 10;
		break;

	case 5:
		vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
		vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
		fVar92[0] = 45.75f;
		vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
		vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
		fVar92[1] = 99f;
		vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
		vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
		fVar92[2] = 81.5f;
		iVar108 = 3;
		break;

	case 6:
		vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
		vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
		fVar92[0] = 120f;
		vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
		vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
		fVar92[1] = 170f;
		vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
		vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
		fVar92[2] = 12.5f;
		vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
		vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
		fVar92[3] = 9.75f;
		iVar108 = 4;
		break;

	case 7:
		vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
		vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
		fVar92[0] = 162f;
		vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
		vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
		fVar92[1] = 124f;
		vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
		vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
		fVar92[2] = 55f;
		vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
		vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
		fVar92[3] = 142f;
		iVar108 = 4;
		break;

	case 8:
		vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
		vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
		fVar92[0] = 7.75f;
		vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
		vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
		fVar92[1] = 14.75f;
		vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
		vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
		fVar92[2] = 31.5f;
		vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
		vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
		fVar92[3] = 30.5f;
		vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
		vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
		fVar92[4] = 6.75f;
		iVar108 = 5;
		break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108) {
		if (object::is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109],
											iVar110, 1)) {
			return true;
		}
		iVar109++;
	}
	return false;
}

// Position - 0x9A3A
void func_148() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_1480 < 1) {
		if (!audio::is_audio_scene_active("PS_PREP_INTERCEPT_CONVOY")) {
			iVar0 = 0;
			while (iVar0 < 3) {
				if (entity::does_entity_exist(Local_94[iVar0 /*2*/])) {
					if (system::vdist2(entity::get_entity_coords(Local_94[iVar0 /*2*/], 0),
									   entity::get_entity_coords(player::player_ped_id(), 0)) < 1000f) {
						audio::start_audio_scene("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1480 == 1) {
		if (!audio::is_audio_scene_active("PS_PREP_MILITARY_TRUCK_SHOOTOUT")) {
			audio::start_audio_scene("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1480 >= 1) {
		if (audio::is_audio_scene_active("PS_PREP_INTERCEPT_CONVOY")) {
			audio::stop_audio_scene("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3) {
				if (entity::does_entity_exist(Local_94[1 /*2*/])) {
					audio::_0x18EB48CFC41F2EA0(Local_94[1 /*2*/], 0);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3) {
				if (entity::does_entity_exist(Global_88321[iVar2])) {
					audio::_0x18EB48CFC41F2EA0(Global_88321[iVar2], 0);
				}
				iVar2++;
			}
		}
		if (audio::is_audio_scene_active("PS_PREP_MILITARY_TRUCK_SHOOTOUT")) {
			audio::stop_audio_scene("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

// Position - 0x9B43
void func_149() {
	switch (iLocal_437) {
	case 1:
		if (fLocal_440 != 0f) {
			fLocal_440 = 0f;
		}
		if (fLocal_439 <= 0f) {
			fLocal_439 = 0f;
			iLocal_437 = 0;
		}
		else if (fLocal_439 > 0f) {
			fLocal_439 -= 0.02f;
		}

	case 0:
		if (func_152()) {
			iLocal_437 = 3;
			fLocal_438 = fLocal_439;
			fLocal_440 = 1f;
		}
		break;

	case 3:
		if (fLocal_440 != 1f) {
			fLocal_440 = 1f;
		}
		if (fLocal_439 >= 1f) {
			iLocal_437 = 2;
			fLocal_439 = 1f;
		}
		else if (fLocal_439 < 1f) {
			fLocal_439 += 0.02f;
		}

	case 2:
		if (!func_152()) {
			iLocal_437 = 1;
			fLocal_438 = fLocal_439;
			fLocal_440 = 0f;
		}
		break;
	}
	if (iLocal_437 == 3 || iLocal_437 == 1) {
		func_150(fLocal_438, fLocal_440, fLocal_439);
		object::_set_door_ajar_angle(Global_34904[20 /*31*/], fLocal_439, 0, 1);
		object::_set_door_acceleration_limit(Global_34904[20 /*31*/], 4, 0, 1);
	}
}

// Position - 0x9C41
float func_150(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	fVar0 = (1f - system::cos(func_151(fParam2 * 3.141593f))) * 0.5f;
	return fParam0 * (1f - fVar0) + fParam1 * fVar0;
}

// Position - 0x9C70
float func_151(float fParam0) { return fParam0 * 57.29578f; }

// Position - 0x9C80
bool func_152() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Local_94[iVar0 /*2*/]) &&
			vehicle::is_vehicle_driveable(Local_94[iVar0 /*2*/], 0) &&
			entity::is_entity_in_angled_area(Local_94[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f,
											 2777.878f, 22.14856f, 8.25f, 0, 1, 0)) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x9CF1
void func_153() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = func_161(iVar0);
		if (!ped::is_ped_injured(iVar1)) {
			if (!func_160(iVar1)) {
				if (func_159(iVar1, 0)) {
					if (func_158(iVar1) || func_156(iVar1)) {
						if (func_155(iVar1, 0)) {
							entity::set_entity_as_mission_entity(iVar1, 1, 1);
							ped::set_blocking_of_non_temporary_events(iVar1, 1);
							ai::clear_ped_tasks(iVar1);
						}
					}
				}
			}
			else if (func_158(iVar1) && entity::does_entity_belong_to_this_script(iVar1, 1)) {
				ai::request_waypoint_recording(sLocal_491);
				bLocal_1490 = entity::is_entity_in_angled_area(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f,
															   3598.951f, 36.8947f, 34f, 0, 1, 0);
				if (!bLocal_1490) {
					if (ai::get_script_task_status(iVar1, -1273030092) != 1 &&
						ai::get_script_task_status(iVar1, -1273030092) != 0) {
						ai::task_vehicle_drive_to_coord_longrange(iVar1, ped::get_vehicle_ped_is_in(iVar1, 0), 1376.77f,
																  3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!ai::is_waypoint_playback_going_on_for_vehicle(Local_94[0 /*2*/])) {
					ai::request_waypoint_recording(sLocal_491);
					if (ai::get_is_waypoint_recording_loaded(sLocal_491)) {
						ai::task_vehicle_follow_waypoint_recording(iVar1, Local_94[0 /*2*/], sLocal_491, 786469, 0, 8,
																   -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_156(iVar1) && entity::does_entity_belong_to_this_script(iVar1, 1)) {
				if (func_31(Local_111[5 /*14*/])) {
					if (ai::get_script_task_status(iVar1, -1273030092) != 1 &&
						ai::get_script_task_status(iVar1, -1273030092) != 0) {
						ai::task_vehicle_mission_ped_target(iVar1, ped::get_vehicle_ped_is_in(iVar1, 0),
															Local_111[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else {
				func_154(iVar1);
			}
		}
		iVar0++;
	}
}

// Position - 0x9EB3
int func_154(int iParam0) {
	int iVar0;

	return 0;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return 0;
		}
		if (func_161(iVar0) != iParam0) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_87678, iVar0)) {
			return 0;
		}
		gameplay::clear_bit(&Global_87678, iVar0);
		return 1;
	}
	return 0;
}

// Position - 0x9F0B
bool func_155(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_161(iVar0) != iParam0) {
			return false;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			weapon::set_ped_infinite_ammo(iParam0, 0, 0);
			entity::set_entity_load_collision_flag(iParam0, 0);
			gameplay::set_bit(&Global_87678, iVar0);
			return true;
		}
	}
	return false;
}

// Position - 0x9F91
int func_156(int iParam0) {
	if (!func_157()) {
		if (func_31(Local_94[0 /*2*/]) && iLocal_434 == 0) {
			if (func_31(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_vehicle(iParam0, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) &&
					vehicle::get_ped_in_vehicle_seat(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -1, 0) ==
						iParam0) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x9FFF
int func_157() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xA01B
int func_158(int iParam0) {
	if (!func_157()) {
		if (func_31(Local_94[0 /*2*/]) &&
			!entity::is_entity_in_angled_area(Local_94[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f,
											  37.12358f, 6.5f, 0, 1, 0)) {
			if (func_31(player::player_ped_id()) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
				if (ped::is_ped_in_vehicle(iParam0, Local_94[0 /*2*/], 0) &&
					vehicle::get_ped_in_vehicle_seat(Local_94[0 /*2*/], -1, 0) == iParam0) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0xA0B1
bool func_159(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_161(iVar0) != iParam0) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xA10D
int func_160(int iParam0) {
	int iVar0;

	return 0;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return 0;
		}
		if (func_161(iVar0) != iParam0) {
			return 0;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xA156
int func_161(int iParam0) {
	if (iParam0 > 3) {
		return 0;
	}
	if (iParam0 == func_19()) {
		return player::player_ped_id();
	}
	return Global_89302[func_162(iParam0)];
}

// Position - 0xA187
int func_162(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	else if (iParam0 == 2) {
		return 2;
	}
	else if (iParam0 == 1) {
		return 1;
	}
	else if (iParam0 == 145) {
		return 3;
	}
	return 4;
}

// Position - 0xA1C2
void func_163() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	switch (iLocal_434) {
	case 0:
		if (!bLocal_456) {
			func_179();
			func_173();
			if (func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/]) && func_31(Local_111[5 /*14*/]) &&
				func_31(Local_94[1 /*2*/]) && func_31(Local_94[2 /*2*/]) && func_31(Local_94[0 /*2*/])) {
				if (entity::is_entity_in_angled_area(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f,
													 2794.875f, 21.45629f, 30f, 0, 1, 0) &&
					ped::is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0)) {
					iLocal_434 = 2;
					iLocal_471 = 0;
				}
				fVar1 = system::vdist(entity::get_entity_coords(Local_94[1 /*2*/], 0),
									  entity::get_entity_coords(Local_94[0 /*2*/], 0));
				if (system::vdist(entity::get_entity_coords(Local_94[1 /*2*/], 0),
								  entity::get_entity_coords(Local_94[2 /*2*/], 0)) > fVar1) {
					fVar1 = system::vdist(entity::get_entity_coords(Local_94[1 /*2*/], 0),
										  entity::get_entity_coords(Local_94[2 /*2*/], 0));
				}
				fVar3 = 11f + 11f / (100f - 40f) * 40f;
				fVar2 = func_172(-11f / (100f - 40f) * fVar1 + fVar3, 0f, 11f);
				if (ped::is_ped_sitting_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/])) {
					ai::set_drive_task_cruise_speed(Local_111[0 /*14*/], fVar2);
				}
			}
		}
		else {
			if (func_31(Local_94[0 /*2*/])) {
				vLocal_460 = {entity::get_entity_coords(Local_94[0 /*2*/], 0)};
			}
			iLocal_436 = 0;
			iLocal_435 = 0;
			iLocal_434 = 1;
		}
		break;

	case 2:
		if (!bLocal_456) {
			func_173();
			if (func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/]) && func_31(Local_111[5 /*14*/]) &&
				func_31(Local_94[1 /*2*/]) && func_31(Local_94[2 /*2*/]) && func_31(Local_94[0 /*2*/])) {
				switch (iLocal_471) {
				case 0:
					if (!func_181(Local_111[0 /*14*/], 242628503, 1)) {
						if (iLocal_437 == 2 || iLocal_437 == 3 && fLocal_439 > 0.8f) {
							ai::open_sequence_task(&iVar4);
							ai::task_vehicle_mission_coors_target(0, Local_94[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4,
																  10f, 786603, 3f, 3f, 1);
							ai::task_vehicle_mission_coors_target(0, Local_94[1 /*2*/], -1885.875f, 3006.152f,
																  31.81027f, 4, 10f, 786603, -1f, -1f, 1);
							ai::close_sequence_task(iVar4);
							ai::task_perform_sequence(Local_111[0 /*14*/], iVar4);
							ai::clear_sequence_task(&iVar4);
						}
					}
					if (!func_181(Local_111[4 /*14*/], -1273030092, 1)) {
						ai::task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f,
												786603, -1f, 20, 0f);
					}
					if (!func_181(Local_111[5 /*14*/], -1273030092, 1)) {
						ai::task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f,
												786603, -1f, 20, 0f);
					}
					if (entity::is_entity_at_coord(Local_111[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, 0,
												   1, 0)) {
						iVar0 = 0;
						while (iVar0 <= 9 - 1) {
							if (func_31(Local_111[iVar0 /*14*/])) {
								ped::set_ped_as_cop(Local_111[iVar0 /*14*/], 1);
								ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 1);
								ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 1, 1);
								if (iVar0 == 0 || iVar0 == 5 || iVar0 == 4) {
									ai::task_leave_any_vehicle(Local_111[iVar0 /*14*/], 200, 65536);
								}
								else if (iVar0 == 1 || iVar0 == 6 || iVar0 == 7) {
									ai::task_leave_any_vehicle(Local_111[iVar0 /*14*/], 0, 65536);
								}
								else {
									ai::task_leave_any_vehicle(Local_111[iVar0 /*14*/], 1000, 65536);
								}
								func_197(&Local_111[iVar0 /*14*/], 1, 1, 1);
							}
							iVar0++;
						}
						iLocal_471++;
					}
					break;

				case 1: break;
				}
			}
		}
		else {
			if (func_31(Local_94[0 /*2*/])) {
				vLocal_460 = {entity::get_entity_coords(Local_94[0 /*2*/], 1)};
			}
			iLocal_436 = 0;
			iLocal_435 = 0;
			iLocal_434 = 1;
		}
		break;

	case 1:
		ped::get_closest_ped(vLocal_460, 50f, 1, 0, &iVar5, 0, 0, -1);
		if (func_31(iVar5)) {
			ped::set_ped_flee_attributes(iVar5, 2, 0);
			ped::set_ped_flee_attributes(iVar5, 2048, 0);
		}
		switch (iLocal_435) {
		case 0:
			switch (iLocal_436) {
			case 0: iLocal_436 = func_171(Local_94[0 /*2*/]); break;

			case 1:
				if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						if (entity::get_entity_speed(Local_111[0 /*14*/]) > 5f) {
							ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 5, 1000);
						}
						else {
							ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 14, 1500);
						}
						ai::task_leave_any_vehicle(0, 720, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						if (entity::get_entity_speed(Local_111[4 /*14*/]) > 5f) {
							ai::task_vehicle_temp_action(0, Local_94[0 /*2*/], 4, 2500);
						}
						else {
							ai::task_vehicle_temp_action(0, Local_94[0 /*2*/], 13, 1500);
						}
						ai::task_leave_any_vehicle(0, 500, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/]) && func_31(Local_94[1 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						if (system::vdist2(entity::get_entity_coords(Local_94[2 /*2*/], 0),
										   entity::get_entity_coords(Local_94[1 /*2*/], 0)) < 1000f) {
							ai::task_vehicle_drive_to_coord(
								0, Local_94[2 /*2*/],
								entity::get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], -3f, 0f, 0f), 10f, 0,
								joaat("crusader"), 786469, 4f, -1f);
						}
						ai::task_vehicle_temp_action(0, Local_94[2 /*2*/], 5, 1000);
						ai::task_leave_any_vehicle(0, 0, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				iLocal_435 = 1;
				break;

			case 2:
				if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 5, 1500);
						ai::task_leave_any_vehicle(0, 900, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						ai::task_vehicle_temp_action(0, Local_94[0 /*2*/], 5, 1000);
						ai::task_leave_any_vehicle(0, 100, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						if (system::vdist2(entity::get_entity_coords(Local_94[2 /*2*/], 0),
										   entity::get_entity_coords(Local_94[0 /*2*/], 0)) < 1000f) {
							ai::task_vehicle_drive_to_coord(
								0, Local_94[2 /*2*/],
								entity::get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0,
								joaat("crusader"), 786469, 4f, -1f);
						}
						ai::task_leave_any_vehicle(0, 120, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				iLocal_435 = 1;
				break;

			case 3:
				if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]) && func_31(Local_94[2 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 6, 500);
						if (system::vdist2(entity::get_entity_coords(Local_94[1 /*2*/], 0),
										   entity::get_entity_coords(Local_94[2 /*2*/], 0)) < 1000f) {
							ai::task_vehicle_drive_to_coord(
								0, Local_94[1 /*2*/],
								entity::get_offset_from_entity_in_world_coords(Local_94[2 /*2*/], 2f, 0f, 0f), 10f, 0,
								joaat("crusader"), 786469, 4f, -1f);
						}
						ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 5, 1000);
						ai::task_leave_any_vehicle(0, 420, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0)) {
						if (entity::get_entity_speed(Local_111[4 /*14*/]) > 5f) {
							ai::open_sequence_task(&iLocal_446);
							ai::task_vehicle_temp_action(0, Local_94[0 /*2*/], 5, 1500);
							ai::task_leave_any_vehicle(0, 380, 65536);
							ai::close_sequence_task(iLocal_446);
							ai::task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
							ai::clear_sequence_task(&iLocal_446);
						}
					}
				}
				if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0)) {
						if (entity::get_entity_speed(Local_111[5 /*14*/]) > 5f) {
							ai::open_sequence_task(&iLocal_446);
							ai::task_vehicle_temp_action(0, Local_94[2 /*2*/], 4, 1500);
							ai::task_leave_any_vehicle(0, 250, 65536);
							ai::close_sequence_task(iLocal_446);
							ai::task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
							ai::clear_sequence_task(&iLocal_446);
						}
					}
				}
				iLocal_435 = 1;
				break;

			case 4:
				if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						ai::task_vehicle_temp_action(0, Local_94[1 /*2*/], 4, 1500);
						ai::task_leave_any_vehicle(0, 800, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						ai::task_vehicle_temp_action(0, Local_94[0 /*2*/], 4, 1500);
						ai::task_leave_any_vehicle(0, 50, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/]) && func_31(Local_94[0 /*2*/])) {
					if (ped::is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0)) {
						ai::open_sequence_task(&iLocal_446);
						if (system::vdist2(entity::get_entity_coords(Local_94[2 /*2*/], 0),
										   entity::get_entity_coords(Local_94[0 /*2*/], 0)) < 1000f) {
							ai::task_vehicle_drive_to_coord(
								0, Local_94[2 /*2*/],
								entity::get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0,
								joaat("crusader"), 786469, 4f, -1f);
						}
						ai::task_leave_any_vehicle(0, 500, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
					}
				}
				iLocal_435 = 1;
				break;
			}
			break;

		case 1:
			iVar0 = 0;
			while (iVar0 <= 9 - 1) {
				if (func_31(Local_111[iVar0 /*14*/]) && func_31(player::player_ped_id())) {
					ped::set_ped_accuracy(Local_111[iVar0 /*14*/], 10);
					ped::set_ped_seeing_range(Local_111[iVar0 /*14*/], 580f);
					ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 0, 1);
					ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 50, 1);
					ped::set_ped_config_flag(Local_111[iVar0 /*14*/], 184, 0);
					ped::set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
					func_170(iVar0);
					if (iVar0 != 0 && iVar0 != 4 && iVar0 != 5) {
						if (iVar0 == 6) {
							iVar6 = 300;
						}
						else if (iVar0 == 1) {
							iVar6 = 900;
						}
						else if (iVar0 == 7) {
							iVar6 = 250;
						}
						else if (iVar0 == 2) {
							iVar6 = 350;
						}
						else if (iVar0 == 8) {
							iVar6 = 500;
						}
						else if (iVar0 == 3) {
							iVar6 = 650;
						}
						ai::open_sequence_task(&iLocal_446);
						if (ped::is_ped_in_any_vehicle(Local_111[iVar0 /*14*/], 0)) {
							ai::task_pause(0, iVar6);
						}
						ai::task_leave_any_vehicle(0, iVar6, 65536);
						ai::close_sequence_task(iLocal_446);
						ai::task_perform_sequence(Local_111[iVar0 /*14*/], iLocal_446);
						ai::clear_sequence_task(&iLocal_446);
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 1);
					}
				}
				iVar0++;
			}
			iLocal_435 = func_169();
			break;

		case 2:
			iVar0 = 0;
			while (iVar0 <= 9 - 1) {
				if (func_31(Local_111[iVar0 /*14*/]) && func_31(player::player_ped_id())) {
					func_170(iVar0);
					if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
						iLocal_466 = 8000;
					}
					else {
						iLocal_466 = 12000;
					}
					if (gameplay::get_distance_between_coords(entity::get_entity_coords(Local_111[iVar0 /*14*/], 0),
															  entity::get_entity_coords(player::player_ped_id(), 1),
															  1) < 75f) {
						if (!Local_111[iVar0 /*14*/].f_12 && gameplay::get_game_timer() - iLocal_467 > iLocal_466) {
							ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 51, 1);
							Local_111[iVar0 /*14*/].f_12 = 1;
							iLocal_467 = gameplay::get_game_timer();
						}
					}
					else {
						ped::set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 51, 0);
						Local_111[iVar0 /*14*/].f_12 = 0;
					}
					if (!func_181(Local_111[iVar0 /*14*/], 780511057, 1)) {
						ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
					}
				}
				iVar0++;
			}
			iLocal_435 = func_169();
			break;

		case 3:
			iVar0 = 0;
			while (iVar0 <= 9 - 1) {
				if (func_31(Local_111[iVar0 /*14*/]) && func_31(player::player_ped_id())) {
					if (gameplay::get_distance_between_coords(entity::get_entity_coords(Local_111[iVar0 /*14*/], 0),
															  entity::get_entity_coords(player::player_ped_id(), 1),
															  1) > 120f) {
						ped::set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 51, 0);
						Local_111[iVar0 /*14*/].f_12 = 0;
						func_170(iVar0);
					}
					if (!func_181(Local_111[iVar0 /*14*/], 780511057, 1)) {
						ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
					}
				}
				iVar0++;
			}
			iLocal_435 = func_169();
			break;

		case 4:
			if (func_168(player::player_ped_id(), vLocal_49, 1) < 30f) {
				iVar7 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 9 - 1) {
				if (func_31(player::player_ped_id()) && func_31(Local_111[iVar0 /*14*/]) &&
					func_31(Local_94[0 /*2*/])) {
					if (iVar7 && func_168(Local_111[iVar0 /*14*/], vLocal_49, 1) < 30f) {
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 1, 0);
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 1);
						ped::remove_ped_defensive_area(Local_111[iVar0 /*14*/], 0);
						ped::set_ped_combat_movement(Local_111[iVar0 /*14*/], 2);
						if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
							ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
						}
					}
					else if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0) ||
							 gameplay::get_distance_between_coords(
								 entity::get_entity_coords(Local_94[0 /*2*/], 0),
								 entity::get_entity_coords(Local_111[iVar0 /*14*/], 0), 1) > 120f / 2f) {
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 1, 1);
						if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(Local_111[iVar0 /*14*/], 0),
																  1) > 120f * 2f) {
							if (!ped::is_ped_in_any_vehicle(Local_111[iVar0 /*14*/], 0) &&
								!entity::is_entity_on_screen(Local_111[iVar0 /*14*/])) {
								iVar9 = func_167(Local_111[iVar0 /*14*/]);
								if (func_31(iVar9)) {
									iVar8 = -1;
									if (vehicle::is_vehicle_seat_free(iVar9, -1, 0)) {
										iVar8 = -1;
									}
									else if (vehicle::is_vehicle_seat_free(iVar9, 0, 0)) {
										iVar8 = 0;
									}
									else if (vehicle::is_vehicle_seat_free(iVar9, 1, 0)) {
										iVar8 = 1;
									}
									else if (vehicle::is_vehicle_seat_free(iVar9, 2, 0)) {
										iVar8 = 2;
									}
									if (func_166(iVar9)) {
										if (ai::get_script_task_status(Local_111[iVar0 /*14*/], -1794415470) != 1) {
											ai::task_enter_vehicle(Local_111[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16,
																   0);
										}
										ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 0);
									}
									else {
										entity::set_ped_as_no_longer_needed(&Local_111[iVar0 /*14*/]);
									}
								}
								else {
									entity::set_ped_as_no_longer_needed(&Local_111[iVar0 /*14*/]);
								}
							}
							else if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
								ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
							}
						}
						else if (ped::is_ped_sitting_in_any_vehicle(Local_111[iVar0 /*14*/])) {
							if (func_165(player::player_ped_id(), Local_111[iVar0 /*14*/], 1) < 35f) {
								if (func_164(Local_111[iVar0 /*14*/],
											 ped::get_vehicle_ped_is_in(Local_111[iVar0 /*14*/], 0)) == -1) {
									if (gameplay::get_game_timer() - iLocal_469 > 40000) {
										if (bLocal_470) {
											bLocal_470 = false;
											iLocal_469 = gameplay::get_game_timer();
										}
										else {
											bLocal_470 = true;
											iLocal_469 = gameplay::get_game_timer();
										}
									}
									if (bLocal_470) {
										if (!func_181(Local_111[iVar0 /*14*/], -1273030092, 1)) {
											ai::task_vehicle_escort(
												Local_111[iVar0 /*14*/],
												ped::get_vehicle_ped_is_in(Local_111[iVar0 /*14*/], 0),
												Local_94[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
										}
									}
									else if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
										ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
									}
								}
								else if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
									ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
								}
								if (entity::get_entity_speed(player::player_ped_id()) < 2f &&
									func_165(player::player_ped_id(), Local_111[iVar0 /*14*/], 1) < 20f) {
									ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 1);
								}
								else {
									ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 0);
								}
							}
							else if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
								ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
							}
						}
						else if (!ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0)) {
							ai::task_combat_ped(Local_111[iVar0 /*14*/], player::player_ped_id(), 0, 16);
						}
					}
					else if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 1, 0);
						ped::set_ped_combat_attributes(Local_111[iVar0 /*14*/], 3, 1);
						ped::remove_ped_defensive_area(Local_111[iVar0 /*14*/], 0);
						ped::set_ped_combat_movement(Local_111[iVar0 /*14*/], 2);
					}
				}
				iVar0++;
			}
			iLocal_435 = func_169();
			break;
		}
		break;
	}
}

// Position - 0xB404
int func_164(int iParam0, int iParam1) {
	if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
		if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam1, -1, 0) == iParam0) {
				return -1;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 0, 0) == iParam0) {
				return 0;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 1, 0) == iParam0) {
				return 1;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 2, 0) == iParam0) {
				return 2;
			}
		}
	}
	return -2;
}

// Position - 0xB476
float func_165(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0xB4D4
bool func_166(int iParam0) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (vehicle::is_vehicle_seat_free(iParam0, -1, 0)) {
			return true;
		}
		if (vehicle::is_vehicle_seat_free(iParam0, 0, 0)) {
			return true;
		}
		if (vehicle::is_vehicle_seat_free(iParam0, 1, 0)) {
			return true;
		}
		if (vehicle::is_vehicle_seat_free(iParam0, 2, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB524
var func_167(int iParam0) {
	var uVar0;
	float fVar1;

	uVar0 = Local_94[1 /*2*/];
	fVar1 = 9999f;
	if (func_31(Local_94[1 /*2*/])) {
		if (func_165(iParam0, Local_94[1 /*2*/], 1) < fVar1) {
			fVar1 = func_165(iParam0, Local_94[1 /*2*/], 1);
			if (func_166(Local_94[1 /*2*/])) {
				uVar0 = Local_94[1 /*2*/];
			}
			else {
				uVar0 = Local_94[2 /*2*/];
			}
		}
	}
	if (func_31(Local_94[2 /*2*/])) {
		if (func_165(iParam0, Local_94[2 /*2*/], 1) < fVar1) {
			fVar1 = func_165(iParam0, Local_94[2 /*2*/], 1);
			if (func_166(Local_94[2 /*2*/])) {
				uVar0 = Local_94[2 /*2*/];
			}
			else {
				uVar0 = Local_94[1 /*2*/];
			}
		}
	}
	return uVar0;
}

// Position - 0xB5CE
float func_168(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0xB608
int func_169() {
	if (func_31(player::player_ped_id()) && func_31(Local_94[0 /*2*/])) {
		if (func_168(Local_94[0 /*2*/], vLocal_460, 1) > 120f) {
			return 4;
		}
		else if (func_168(player::player_ped_id(), vLocal_460, 1) <= 120f) {
			return 2;
		}
		else if (func_168(player::player_ped_id(), vLocal_460, 1) > 120f &&
				 !ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 0)) {
			return 3;
		}
	}
	return 2;
}

// Position - 0xB696
void func_170(int iParam0) {
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_31(Local_111[iParam0 /*14*/])) {
		if (iParam0 == 0) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_52};
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 1) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 2) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_61};
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 3) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_64};
				fVar4 = 4.5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 5) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_70};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 6) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_70};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 7) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_58};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 8) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 4) {
			if (func_171(0) == 1) {
				vVar1 = {vLocal_58};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 2) {
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 3) {
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_171(0) == 4) {
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		if (!Local_111[iParam0 /*14*/].f_12) {
			if (func_31(iVar0)) {
				ped::set_ped_sphere_defensive_area(Local_111[iParam0 /*14*/],
												   entity::get_offset_from_entity_in_world_coords(iVar0, vVar1), fVar4,
												   0, 0);
			}
			else if (func_31(Local_94[0 /*2*/])) {
				if (func_171(Local_94[0 /*2*/]) == 1) {
					ped::_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], vLocal_61, 3.8f, 0);
				}
				else if (func_171(Local_94[0 /*2*/]) == 2) {
					ped::_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_171(Local_94[0 /*2*/]) == 3) {
					ped::_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], vLocal_52, 3.8f, 0);
				}
				else if (func_171(Local_94[0 /*2*/]) == 4) {
					ped::_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

// Position - 0xBC5A
int func_171(int iParam0) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (iParam0 == 0) {
		iParam0 = Local_94[0 /*2*/];
	}
	if (func_31(player::player_ped_id()) && func_31(iParam0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		vVar3 = {entity::get_offset_from_entity_given_world_coords(iParam0, vVar0)};
		fVar6 = gameplay::get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		if (vVar3.x < 0f) {
			fVar6 *= -1f;
		}
	}
	if (fVar6 <= 45f && fVar6 >= 0f || fVar6 >= -45f && fVar6 <= 0f) {
		return 1;
	}
	else if (fVar6 <= 135f && fVar6 >= 0f) {
		return 2;
	}
	else if (fVar6 >= -135f && fVar6 <= 0f) {
		return 4;
	}
	else {
		return 3;
	}
	return 1;
}

// Position - 0xBD2C
float func_172(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0xBD53
void func_173() {
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	vector3 vVar20;
	vector3 vVar23;

	weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_459, 1);
	iVar0 = 0;
	while (iVar0 <= 9 - 1) {
		if (func_31(Local_111[iVar0 /*14*/])) {
			if (ped::is_ped_in_combat(Local_111[iVar0 /*14*/], 0) ||
				ped::is_ped_in_melee_combat(Local_111[iVar0 /*14*/]) ||
				ped::is_ped_being_stunned(Local_111[iVar0 /*14*/], 0) ||
				ped::is_ped_being_stealth_killed(Local_111[iVar0 /*14*/]) ||
				ped::is_ped_being_jacked(Local_111[iVar0 /*14*/]) ||
				entity::has_entity_been_damaged_by_entity(Local_111[iVar0 /*14*/], player::player_ped_id(), 1)) {
				bLocal_456 = true;
			}
			if (gameplay::get_game_timer() - iLocal_468 > 800) {
				if (ped::has_ped_received_event(Local_111[iVar0 /*14*/], 123) ||
					ped::has_ped_received_event(Local_111[iVar0 /*14*/], 124)) {
					bLocal_456 = true;
				}
			}
			if (entity::has_entity_clear_los_to_entity_in_front(Local_111[iVar0 /*14*/], player::player_ped_id()) &&
				(player::is_player_free_aiming_at_entity(player::player_id(), Local_111[iVar0 /*14*/]) ||
				 player::is_player_targetting_entity(player::player_id(), Local_111[iVar0 /*14*/]))) {
				if (iLocal_459 != 0) {
					if (weapon::get_weapontype_group(iLocal_459) != -728555052 &&
						iLocal_459 != joaat("weapon_unarmed")) {
						if (gameplay::get_game_timer() - Local_111[iVar0 /*14*/].f_11 > 800) {
							bLocal_456 = true;
						}
					}
				}
			}
			else {
				Local_111[iVar0 /*14*/].f_11 = gameplay::get_game_timer();
			}
		}
		else {
			bLocal_456 = true;
		}
		iVar0++;
	}
	if (func_31(Local_94[1 /*2*/])) {
		if (entity::has_entity_been_damaged_by_entity(Local_94[1 /*2*/], player::player_ped_id(), 0) ||
			weapon::has_vehicle_got_projectile_attached(player::player_ped_id(), Local_94[1 /*2*/], 0, -1) ||
			ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[1 /*2*/], 1) ||
			ped::is_ped_on_specific_vehicle(player::player_ped_id(), Local_94[1 /*2*/])) {
			bLocal_456 = true;
		}
		else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck")) ||
				ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck2"))) {
				if (vehicle::is_vehicle_attached_to_tow_truck(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
															  Local_94[1 /*2*/])) {
					bLocal_456 = true;
				}
			}
		}
		if (func_177(0f, 0f, 0f, 0f, 0f, 0f, entity::get_entity_coords(Local_94[1 /*2*/], 0), 30f, 0)) {
			bLocal_456 = true;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), Local_94[1 /*2*/]) && fLocal_463 >= 7f) {
				bLocal_456 = true;
			}
			vVar1 = {func_176(entity::get_entity_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) -
							  entity::get_entity_coords(Local_94[1 /*2*/], 0))};
			vVar4 = {entity::get_entity_velocity(Local_94[1 /*2*/]) -
					 entity::get_entity_velocity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))};
			fLocal_463 = func_175(vVar4, vVar1);
		}
	}
	else {
		bLocal_456 = true;
	}
	if (func_31(Local_94[2 /*2*/])) {
		if (entity::has_entity_been_damaged_by_entity(Local_94[2 /*2*/], player::player_ped_id(), 0) ||
			weapon::has_vehicle_got_projectile_attached(player::player_ped_id(), Local_94[2 /*2*/], 0, -1) ||
			ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[2 /*2*/], 1) ||
			ped::is_ped_on_specific_vehicle(player::player_ped_id(), Local_94[2 /*2*/])) {
			bLocal_456 = true;
		}
		else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck")) ||
				ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck2"))) {
				if (vehicle::is_vehicle_attached_to_tow_truck(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
															  Local_94[2 /*2*/])) {
					bLocal_456 = true;
				}
			}
		}
		if (func_177(0f, 0f, 0f, 0f, 0f, 0f, entity::get_entity_coords(Local_94[2 /*2*/], 0), 30f, 0)) {
			bLocal_456 = true;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), Local_94[2 /*2*/]) && fLocal_465 >= 7f) {
				bLocal_456 = true;
			}
			vVar7 = {func_176(entity::get_entity_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) -
							  entity::get_entity_coords(Local_94[2 /*2*/], 0))};
			vVar10 = {entity::get_entity_velocity(Local_94[2 /*2*/]) -
					  entity::get_entity_velocity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))};
			fLocal_465 = func_175(vVar10, vVar7);
		}
	}
	else {
		bLocal_456 = true;
	}
	if (func_31(Local_94[0 /*2*/])) {
		if (func_165(player::player_ped_id(), player::player_ped_id(), 1) < 45f &&
			player::get_player_wanted_level(player::player_id()) > 0) {
			bLocal_456 = true;
		}
		if (func_177(0f, 0f, 0f, 0f, 0f, 0f, entity::get_entity_coords(Local_94[0 /*2*/], 0), 30f, 0)) {
			bLocal_456 = true;
		}
		if (entity::has_entity_been_damaged_by_entity(Local_94[0 /*2*/], player::player_ped_id(), 0) ||
			weapon::has_vehicle_got_projectile_attached(player::player_ped_id(), Local_94[0 /*2*/], 0, -1) ||
			ped::is_ped_in_vehicle(player::player_ped_id(), Local_94[0 /*2*/], 1) ||
			ped::is_ped_on_specific_vehicle(player::player_ped_id(), Local_94[0 /*2*/])) {
			bLocal_456 = true;
		}
		else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck")) ||
				ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck2"))) {
				if (vehicle::is_vehicle_attached_to_tow_truck(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
															  Local_94[0 /*2*/])) {
					bLocal_456 = true;
				}
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), Local_94[0 /*2*/]) && fLocal_464 >= 7f) {
				bLocal_456 = true;
			}
			vVar13 = {func_176(entity::get_entity_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) -
							   entity::get_entity_coords(Local_94[0 /*2*/], 0))};
			vVar16 = {entity::get_entity_velocity(Local_94[0 /*2*/]) -
					  entity::get_entity_velocity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))};
			fLocal_464 = func_175(vVar16, vVar13);
		}
		if (func_174()) {
			iVar19 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar19, 0)) {
				if (entity::is_entity_touching_entity(iVar19, Local_94[0 /*2*/])) {
					bLocal_456 = true;
				}
				vVar20 = {
					func_176(entity::get_entity_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) -
							 entity::get_entity_coords(Local_94[0 /*2*/], 0))};
				vVar23 = {entity::get_entity_velocity(Local_94[0 /*2*/]) -
						  entity::get_entity_velocity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))};
				fLocal_464 = func_175(vVar23, vVar20);
			}
		}
	}
	else {
		bLocal_456 = true;
	}
}

// Position - 0xC322
bool func_174() { return gameplay::is_bit_set(Global_2494199.f_743, 2); }

// Position - 0xC336
float func_175(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0xC357
Vector3 func_176(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0xC396
bool func_177(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10) {
	int iVar0;

	iVar0 = 0;
	if (!func_178(vParam0 + vParam3)) {
		if (fire::is_explosion_in_area(5, vParam3, vParam0) ||
			fire::is_explosion_in_area(2, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(20, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(4, vParam3, vParam0) ||
			fire::is_explosion_in_area(28, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(32, vParam3, vParam0) || fire::is_explosion_in_area(25, vParam3, vParam0) ||
			fire::is_explosion_in_area(9, vParam3, vParam0) ||
			fire::is_explosion_in_area(3, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(6, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(0, vParam3, vParam0) || fire::is_explosion_in_area(1, vParam3, vParam0) ||
			fire::is_explosion_in_area(23, vParam3, vParam0) || fire::is_explosion_in_area(34, vParam3, vParam0) ||
			fire::is_explosion_in_area(14, vParam3, vParam0) ||
			fire::is_explosion_in_area(30, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(12, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(7, vParam3, vParam0) ||
			fire::is_explosion_in_area(21, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(18, vParam3, vParam0) && !iParam10 ||
			fire::is_explosion_in_area(15, vParam3, vParam0) || fire::is_explosion_in_area(10, vParam3, vParam0) ||
			fire::is_explosion_in_area(27, vParam3, vParam0)) {
			iVar0 = 1;
		}
	}
	else if (fire::is_explosion_in_sphere(5, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(2, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(20, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(4, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(28, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(32, vParam6, fParam9) || fire::is_explosion_in_sphere(25, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(9, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(3, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(6, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(0, vParam6, fParam9) || fire::is_explosion_in_sphere(1, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(23, vParam6, fParam9) || fire::is_explosion_in_sphere(34, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(14, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(30, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(12, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(7, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(21, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(18, vParam6, fParam9) && !iParam10 ||
			 fire::is_explosion_in_sphere(15, vParam6, fParam9) || fire::is_explosion_in_sphere(10, vParam6, fParam9) ||
			 fire::is_explosion_in_sphere(27, vParam6, fParam9)) {
		iVar0 = 1;
	}
	return iVar0;
}

// Position - 0xC7A1
int func_178(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0xC7CB
void func_179() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;

	if (func_31(Local_94[0 /*2*/]) && func_31(Local_94[1 /*2*/]) && func_31(Local_94[2 /*2*/]) &&
		func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/]) && func_31(Local_111[5 /*14*/])) {
		vVar0 = {entity::get_offset_from_entity_in_world_coords(
			Local_94[0 /*2*/], 0f, func_172(func_165(Local_94[0 /*2*/], Local_94[1 /*2*/], 1), 3f, 25f), 5.5f)};
		vVar3 = {entity::get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], 0f, 0f, -6f)};
		vVar6 = {entity::get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], 0f, 20f, 5f)};
		vVar9 = {entity::get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], 0f, 0f, -6f)};
		vVar12 = {entity::get_offset_from_entity_in_world_coords(
			Local_94[2 /*2*/], 0f, func_172(func_165(Local_94[2 /*2*/], Local_94[0 /*2*/], 1), 3f, 25f), 5f)};
		vVar15 = {entity::get_offset_from_entity_in_world_coords(Local_94[2 /*2*/], 0f, 0f, -6f)};
		switch (iLocal_433) {
		case 0:
			if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar6, vVar9, 9f, 0, 1, 0)) {
				if (entity::get_entity_speed(Local_94[1 /*2*/]) < 1f &&
					entity::get_entity_speed(player::player_ped_id()) < 1f) {
					fLocal_1486[1] += gameplay::get_frame_time();
				}
				else if (fLocal_1486[1] > 0f) {
					fLocal_1486[1] -= gameplay::get_frame_time() * 10f;
				}
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar0, vVar3, 9f, 0, 1, 0)) {
				if (entity::get_entity_speed(Local_94[0 /*2*/]) < 1f &&
					entity::get_entity_speed(player::player_ped_id()) < 1f) {
					fLocal_1486[0] += gameplay::get_frame_time();
				}
				else if (fLocal_1486[0] > 0f) {
					fLocal_1486[0] -= gameplay::get_frame_time() * 10f;
				}
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar12, vVar15, 9f, 0, 1, 0)) {
				if (entity::get_entity_speed(Local_94[2 /*2*/]) < 1f &&
					entity::get_entity_speed(player::player_ped_id()) < 1f) {
					fLocal_1486[2] += gameplay::get_frame_time();
				}
				else if (fLocal_1486[2] > 0f) {
					fLocal_1486[2] -= gameplay::get_frame_time() * 10f;
				}
			}
			if (fLocal_1486[1] > 1.5f) {
				iLocal_474 = Local_111[0 /*14*/];
				ai::clear_ped_tasks(Local_111[4 /*14*/]);
				ai::clear_ped_tasks(Local_111[0 /*14*/]);
				ai::clear_ped_tasks(Local_111[5 /*14*/]);
				vehicle::_set_vehicle_halt(Local_94[0 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[1 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[2 /*2*/], 4f, 1, 0);
				ai::open_sequence_task(&iLocal_446);
				if (ped::is_ped_in_any_vehicle(Local_111[0 /*14*/], 0)) {
					ai::task_leave_any_vehicle(0, 0, 65536);
				}
				ai::task_aim_gun_at_coord(0, entity::get_entity_coords(player::player_ped_id(), 1), 1000, 0, 1);
				ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(), player::player_ped_id(), 1f, 0,
															 3f, 1082130432, 1, 0, -957453492);
				ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
				ai::close_sequence_task(iLocal_446);
				ai::task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
				ai::clear_sequence_task(&iLocal_446);
				iLocal_433 = 1;
			}
			else if (fLocal_1486[0] > 1.5f) {
				iLocal_474 = Local_111[4 /*14*/];
				ai::clear_ped_tasks(Local_111[4 /*14*/]);
				ai::clear_ped_tasks(Local_111[0 /*14*/]);
				ai::clear_ped_tasks(Local_111[5 /*14*/]);
				vehicle::_set_vehicle_halt(Local_94[0 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[1 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[2 /*2*/], 4f, 1, 0);
				ai::open_sequence_task(&iLocal_446);
				if (ped::is_ped_in_any_vehicle(Local_111[4 /*14*/], 0)) {
					ai::task_leave_any_vehicle(0, 0, 65536);
				}
				ai::task_aim_gun_at_coord(0, entity::get_entity_coords(player::player_ped_id(), 1), 1000, 0, 1);
				ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(), player::player_ped_id(), 1f, 0,
															 3f, 1082130432, 1, 0, -957453492);
				ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
				ai::close_sequence_task(iLocal_446);
				ai::task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
				ai::clear_sequence_task(&iLocal_446);
				iLocal_433 = 1;
			}
			else if (fLocal_1486[2] > 1.5f) {
				iLocal_474 = Local_111[5 /*14*/];
				ai::clear_ped_tasks(Local_111[4 /*14*/]);
				ai::clear_ped_tasks(Local_111[0 /*14*/]);
				ai::clear_ped_tasks(Local_111[5 /*14*/]);
				vehicle::_set_vehicle_halt(Local_94[0 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[1 /*2*/], 4f, 1, 0);
				vehicle::_set_vehicle_halt(Local_94[2 /*2*/], 4f, 1, 0);
				ai::open_sequence_task(&iLocal_446);
				if (ped::is_ped_in_any_vehicle(Local_111[5 /*14*/], 0)) {
					ai::task_leave_any_vehicle(0, 0, 65536);
				}
				ai::task_aim_gun_at_coord(0, entity::get_entity_coords(player::player_ped_id(), 1), 1000, 0, 1);
				ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(), player::player_ped_id(), 1f, 0,
															 3f, 1082130432, 1, 0, -957453492);
				ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
				ai::close_sequence_task(iLocal_446);
				ai::task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
				ai::clear_sequence_task(&iLocal_446);
				iLocal_433 = 1;
			}
			else {
				if (ped::is_ped_in_any_vehicle(Local_111[5 /*14*/], 0) &&
					ped::is_ped_in_any_vehicle(Local_111[0 /*14*/], 0) &&
					ped::is_ped_in_any_vehicle(Local_111[4 /*14*/], 0)) {
					if (!ai::is_waypoint_playback_going_on_for_vehicle(Local_94[1 /*2*/])) {
						ai::task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475,
																   786603, 0, 24, -1, 11f, 0, 1073741824);
					}
					if (ai::get_script_task_status(Local_111[4 /*14*/], -1273030092) != 1) {
						ai::task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f,
												786603, -1f, 20, 0f);
					}
					if (ai::get_script_task_status(Local_111[5 /*14*/], -1273030092) != 1) {
						ai::task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f,
												786603, -1f, 20, 0f);
					}
					vehicle::_0x88BC673CA9E0AE99(Local_94[0 /*2*/], 1);
					vehicle::_0xBE5C1255A1830FF5(Local_94[0 /*2*/], 1);
					vehicle::_0x2C4A1590ABF43E8B(Local_94[0 /*2*/], 1);
					vehicle::_0x88BC673CA9E0AE99(Local_94[1 /*2*/], 1);
					vehicle::_0xBE5C1255A1830FF5(Local_94[1 /*2*/], 1);
					vehicle::_0x2C4A1590ABF43E8B(Local_94[1 /*2*/], 1);
					vehicle::_0x88BC673CA9E0AE99(Local_94[2 /*2*/], 1);
					vehicle::_0xBE5C1255A1830FF5(Local_94[2 /*2*/], 1);
					vehicle::_0x2C4A1590ABF43E8B(Local_94[2 /*2*/], 1);
				}
				iLocal_473 = gameplay::get_game_timer();
			}
			break;

		case 1:
			switch (iLocal_472) {
			case 0:
				if (!ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
					func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
					iLocal_473 = gameplay::get_game_timer();
					fLocal_1486[1] = 0f;
					fLocal_1486[2] = 0f;
					fLocal_1486[0] = 0f;
					iLocal_472++;
				}
				break;

			case 1:
				if (gameplay::get_game_timer() - iLocal_473 > 8000 && !func_9()) {
					if (!ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
						func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
						if (iLocal_458) {
							iLocal_458 = 0;
						}
						else {
							iLocal_473 = gameplay::get_game_timer();
							iLocal_472++;
						}
					}
				}
				break;

			case 2:
				if (gameplay::get_game_timer() - iLocal_473 > 8000 && !func_9()) {
					if (!ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
						func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
						if (iLocal_458) {
							iLocal_458 = 0;
						}
						else {
							iLocal_473 = gameplay::get_game_timer();
							iLocal_472++;
						}
					}
				}
				break;

			case 3:
				if (gameplay::get_game_timer() - iLocal_473 > 8000 && !func_9()) {
					if (!ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
						func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
						if (iLocal_458) {
							iLocal_458 = 0;
						}
						else {
							ai::open_sequence_task(&iLocal_446);
							ai::task_shoot_at_coord(
								0,
								entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), 0.5f, 0f, -1f),
								1000, 1566631136);
							ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(),
																		 player::player_ped_id(), 1f, 0, 4f, 1082130432,
																		 1, 0, -957453492);
							ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
							ai::close_sequence_task(iLocal_446);
							ai::task_perform_sequence(iLocal_474, iLocal_446);
							ai::clear_sequence_task(&iLocal_446);
							iLocal_473 = gameplay::get_game_timer();
							iLocal_468 = gameplay::get_game_timer();
							iLocal_472++;
						}
					}
				}
				break;

			case 4: break;
			}
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), vVar0, vVar3, 9f, 0, 1, 0) &&
				!entity::is_entity_in_angled_area(player::player_ped_id(), vVar6, vVar9, 9f, 0, 1, 0) &&
				!entity::is_entity_in_angled_area(player::player_ped_id(), vVar12, vVar15, 9f, 0, 1, 0)) {
				if (ai::get_script_task_status(iLocal_474, 1630799643) != 1) {
					ai::task_aim_gun_at_entity(iLocal_474, player::player_ped_id(), -1, 0);
				}
				if (system::timera() > 3000) {
					if (!ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
						if (iLocal_474 == Local_111[4 /*14*/]) {
							ai::task_enter_vehicle(iLocal_474, Local_94[0 /*2*/], 20000, -1, 2f, 1, 0);
						}
						else if (iLocal_474 == Local_111[0 /*14*/]) {
							ai::task_enter_vehicle(iLocal_474, Local_94[1 /*2*/], 20000, -1, 2f, 1, 0);
						}
						else if (iLocal_474 == Local_111[5 /*14*/]) {
							ai::task_enter_vehicle(iLocal_474, Local_94[2 /*2*/], 20000, -1, 2f, 1, 0);
						}
					}
					iLocal_433 = 2;
				}
			}
			else {
				if (iLocal_472 == 4) {
					if (gameplay::get_game_timer() - iLocal_473 > 9000 && !func_9()) {
						bLocal_456 = true;
					}
				}
				system::settimera(0);
			}
			break;

		case 2:
			if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar0, vVar3, 9f, 0, 1, 0) ||
				entity::is_entity_in_angled_area(player::player_ped_id(), vVar6, vVar9, 9f, 0, 1, 0) ||
				entity::is_entity_in_angled_area(player::player_ped_id(), vVar12, vVar15, 9f, 0, 1, 0)) {
				iLocal_458 = 0;
				iLocal_433 = 0;
			}
			else if (ped::is_ped_in_any_vehicle(iLocal_474, 0)) {
				ai::task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f,
										20, 0f);
				ai::task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603,
														   0, 24, -1, 11f, 0, 1073741824);
				ai::task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f,
										20, 0f);
				iLocal_458 = 1;
				iLocal_433 = 0;
			}
			break;
		}
	}
}

// Position - 0xD18D
void func_180(int iParam0) {
	int iVar0;
	int iVar1;

	Global_55823 = 0;
	if (MissionObjectives[iParam0 /*13*/] != 3) {
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917) {
		if (Global_67918[iVar1 /*9*/] == iParam0) {
			iVar0 = 1;
			Global_67918[iVar1 /*9*/].f_1 = 1;
			Global_67918[iVar1 /*9*/].f_2 = 0f;
			if (Global_67918[iVar1 /*9*/].f_3 == 2) {
			}
		}
		iVar1++;
	}
	if (!iVar0) {
	}
}

// Position - 0xD1FE
int func_181(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = ai::get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0) {
		return 1;
	}
	else if (!iParam2) {
		if (iVar0 == 2 || iVar0 == 3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xD244
void func_182(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] == iParam0) {
			if (iParam2) {
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else {
				Global_67918[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1) {
		if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 3) {
			if (Global_67918[iVar0 /*9*/].f_1 > 1) {
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

// Position - 0xD2EE
int func_183(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6,
			 char *sParam7, int iParam8, int iParam9, int iParam10) {
	if (iParam3 == 0) {
		iParam3 = player::get_player_index();
	}
	if (fParam6 < 0f) {
		fParam6 = 100f;
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (!ui::does_ped_have_ai_blip(iParam0)) {
			if (iParam8 == -1) {
				ui::_set_ped_enemy_ai_blip(iParam0, 1);
			}
			else {
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			ui::_0xE52B8E7F85D39A08(iParam0, iParam2);
			ui::_set_ai_blip_max_distance(iParam0, fParam6);
			if (ui::does_blip_exist(*uParam1)) {
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (iParam9 != -1) {
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		ui::_0x0C4BBF625CA98C4E(iParam0, iParam4);
		ui::hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = ui::_0x7CD934010E115C2C(iParam0);
		if (iParam9 != -1) {
			if (ui::does_blip_exist(*uParam1)) {
				if (iParam8 != -1) {
					ui::set_blip_colour(*uParam1, iParam8);
				}
				ui::begin_text_command_set_blip_name("STRING");
				if (iParam10) {
					ui::add_text_component_substring_player_name(sParam7);
				}
				else {
					ui::add_text_component_substring_text_label(sParam7);
				}
				ui::end_text_command_set_blip_name(*uParam1);
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (!gameplay::is_bit_set(uParam1->f_6, 2)) {
			if (ui::does_blip_exist(*uParam1)) {
				if (!gameplay::is_string_null_or_empty(sParam7)) {
					ui::begin_text_command_set_blip_name("STRING");
					if (iParam10) {
						ui::add_text_component_substring_player_name(sParam7);
					}
					else {
						ui::add_text_component_substring_text_label(sParam7);
					}
					ui::end_text_command_set_blip_name(*uParam1);
				}
				gameplay::set_bit(&uParam1->f_6, 2);
			}
		}
		if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			uParam1->f_1 = ui::_0x56176892826A4FE8(iParam0);
			if (!gameplay::is_bit_set(uParam1->f_6, 3)) {
				if (ui::does_blip_exist(uParam1->f_1)) {
					ui::set_blip_priority(uParam1->f_1, 7);
					gameplay::set_bit(&uParam1->f_6, 3);
				}
			}
		}
		else if (ui::does_blip_exist(uParam1->f_1)) {
			uParam1->f_1 = 0;
			gameplay::clear_bit(&uParam1->f_6, 3);
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0xD48B
bool func_184(var *uParam0) {
	if (vehicle::is_vehicle_driveable(*uParam0, 0)) {
		if (vehicle::is_vehicle_stuck_timer_up(*uParam0, 0, 7000) ||
			vehicle::is_vehicle_stuck_timer_up(*uParam0, 3, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(*uParam0, 2, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(*uParam0, 1, 40000)) {
			return true;
		}
	}
	return false;
}

// Position - 0xD4E5
void func_185(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0xD51D
void func_186(int iParam0) {
	char *sVar0;

	audio::trigger_music_event("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = ""; break;

	case 3: sVar0 = "RHP_FDES"; break;

	case 4: sVar0 = "RHP_TRKSTCK"; break;

	case 2: sVar0 = "RHP_FEND"; break;

	case 5: sVar0 = "RHP_FABN"; break;

	default: sVar0 = ""; break;
	}
	func_188(sVar0);
	while (!func_187()) {
		system::wait(0);
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1) {
		if (entity::does_entity_exist(uLocal_108[iLocal_447])) {
			object::delete_object(&uLocal_108[iLocal_447]);
		}
		iLocal_447++;
	}
	func_315();
	script::terminate_this_thread();
}

// Position - 0xD5DB
int func_187() {
	if (Global_3) {
		return 1;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return 1;
	}
	return 0;
}

// Position - 0xD608
void func_188(char *sParam0) {
	func_196(sParam0);
	func_189(0);
}

// Position - 0xD61B
void func_189(int iParam0) {
	int iVar0;

	if (Global_101700.f_8044 || func_7(0)) {
		iVar0 = func_5();
		if (!func_190(iVar0)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
		Global_91527 = iParam0;
	}
}

// Position - 0xD660
int func_190(int iParam0) {
	int iVar0;
	int iVar1;

	func_195();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_194(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_191(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0xD777
void func_191(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_193(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_192(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0xD940
void func_192(int *iParam0) { *iParam0 = -15; }

// Position - 0xD94E
int func_193(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_193(8, uParam1, fParam2);

	case 10: return func_193(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0xE2BD
void func_194(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0xE2FB
void func_195() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_19()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_19()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0xE3E8
void func_196(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0xE427
void func_197(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0xE476
void func_198() {
	vector3 vVar0;
	float *fVar3;

	if (iLocal_1484 == 1) {
		if (iLocal_1479 == 0) {
			if (!cam::is_screen_faded_out()) {
				if (!cam::is_screen_fading_out()) {
					cam::do_screen_fade_out(800);
				}
			}
			else {
				func_110(iLocal_1485);
			}
		}
		else if (iLocal_1479 == 3) {
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			player::set_player_control(player::player_id(), 1, 0);
			func_223();
			func_222(&uLocal_494);
			if (!func_221()) {
				func_220(iLocal_1485, &vVar0, &fVar3);
				entity::set_entity_coords(player::player_ped_id(), vVar0, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), fVar3);
				entity::freeze_entity_position(player::player_ped_id(), 1);
				func_219(&uLocal_494, vVar0, 50f, 0);
			}
			func_216(iLocal_1480);
			while (!func_212(&uLocal_494)) {
				system::wait(0);
			}
			switch (iLocal_1480) {
			case 0: func_211(); break;

			case 1: func_206(); break;

			case 2: func_205(); break;

			case 3: func_199(); break;
			}
			iLocal_1484 = 0;
			if (!func_221()) {
				streaming::new_load_scene_stop();
			}
		}
	}
}

// Position - 0xE587
void func_199() {
	func_203(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	bLocal_456 = true;
	if (func_221()) {
		func_200(0, -1, 1);
	}
	else {
		entity::freeze_entity_position(player::player_ped_id(), 0);
	}
}

// Position - 0xE5C5
void func_200(int iParam0, int iParam1, int iParam2) {
	if (func_202() && func_221()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_201(0);
	}
}

// Position - 0xE689
void func_201(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0xE6B2
bool func_202() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0xE6D6
void func_203(vector3 vParam0, float fParam3) {
	Local_94[0 /*2*/] = vehicle::create_vehicle(joaat("barracks"), vParam0, fParam3, 1, 1);
	entity::set_entity_health(Local_94[0 /*2*/], entity::get_entity_health(Local_94[0 /*2*/]) * 2);
	vehicle::set_vehicle_strong(Local_94[0 /*2*/], 1);
	vehicle::set_vehicle_engine_health(Local_94[0 /*2*/], vehicle::get_vehicle_engine_health(Local_94[0 /*2*/]) * 2f);
	vehicle::set_vehicle_explodes_on_high_explosion_damage(Local_94[0 /*2*/], 0);
	vehicle::set_vehicle_petrol_tank_health(Local_94[0 /*2*/],
											vehicle::get_vehicle_petrol_tank_health(Local_94[0 /*2*/]) * 2f);
	vehicle::_0x192547247864DFDD(Local_94[0 /*2*/], 0);
	vehicle::_0x51BB2D88D31A914B(Local_94[0 /*2*/], 0);
	vehicle::set_vehicle_provides_cover(Local_94[0 /*2*/], 1);
	vehicle::set_vehicle_automatically_attaches(Local_94[0 /*2*/], 0, 0);
	func_204(Local_94[0 /*2*/], 0);
	uLocal_108[0] = object::create_object(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	entity::attach_entity_to_entity(uLocal_108[0], Local_94[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2,
									1);
	uLocal_108[1] = object::create_object(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	entity::attach_entity_to_entity(uLocal_108[1], Local_94[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2,
									1);
	audio::_dynamic_mixer_related_fn(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

// Position - 0xE814
void func_204(var uParam0, int iParam1) { Global_91491.f_22[iParam1] = uParam0; }

// Position - 0xE828
void func_205() {
	func_203(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	bLocal_456 = true;
	if (func_221()) {
		func_200(0, -1, 1);
	}
	else {
		entity::freeze_entity_position(player::player_ped_id(), 0);
	}
}

// Position - 0xE866
void func_206() {
	int iVar0;

	func_210(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3) {
		func_209(iVar0, Local_94[1 /*2*/]);
		func_208(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_203(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_207(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8) {
		func_209(iVar0, Local_94[2 /*2*/]);
		func_208(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_456 = true;
	if (func_221()) {
		func_200(0, -1, 1);
	}
	else {
		entity::freeze_entity_position(player::player_ped_id(), 0);
	}
}

// Position - 0xE925
void func_207(vector3 vParam0, float fParam3) {
	Local_94[2 /*2*/] = vehicle::create_vehicle(joaat("crusader"), vParam0, fParam3, 1, 1);
	audio::_dynamic_mixer_related_fn(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

// Position - 0xE951
void func_208(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < 64) {
			if (Global_55852[iVar0 /*2*/] != 0) {
				if (Global_55852[iVar0 /*2*/] == iParam0) {
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55851) {
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64) {
		if (Global_55852[iVar2 /*2*/] == 0) {
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1) {
		return;
	}
	Global_55852[iVar1 /*2*/] = iParam0;
	Global_55852[iVar1 /*2*/].f_1 = 7;
	Global_55851++;
}

// Position - 0xE9EC
void func_209(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam1 == Local_94[1 /*2*/] || iParam1 == Local_94[2 /*2*/]) {
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_94[0 /*2*/]) {
		iVar0 = joaat("s_m_m_marine_01");
	}
	if (iParam0 == 0 || iParam0 == 5 || iParam0 == 4) {
		iVar1 = -1;
		iLocal_451 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6) {
		iVar1 = 0;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7) {
		iVar1 = 1;
		iLocal_451 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8) {
		iVar1 = 2;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	Local_111[iParam0 /*14*/] = ped::create_ped_inside_vehicle(iParam1, 26, iVar0, iVar1, 1, 1);
	ped::set_ped_relationship_group_hash(Local_111[iParam0 /*14*/], iLocal_493);
	ped::set_ped_as_enemy(Local_111[iParam0 /*14*/], 1);
	weapon::give_weapon_to_ped(Local_111[iParam0 /*14*/], iLocal_451, -1, 1, 1);
	weapon::give_weapon_to_ped(Local_111[iParam0 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
	ped::set_ped_money(Local_111[iParam0 /*14*/], 0);
	ped::set_ped_component_variation(Local_111[iParam0 /*14*/], 2, 1, 0, 0);
	ped::set_ped_alertness(Local_111[iParam0 /*14*/], 1);
	ped::set_ped_target_loss_response(Local_111[iParam0 /*14*/], 1);
	ped::set_ped_combat_attributes(Local_111[iParam0 /*14*/], 0, 1);
	ped::set_ped_combat_attributes(Local_111[iParam0 /*14*/], 1, 0);
	ped::set_ped_combat_movement(Local_111[iParam0 /*14*/], 1);
	ped::set_ped_config_flag(Local_111[iParam0 /*14*/], 184, 1);
	ped::set_ped_config_flag(Local_111[iParam0 /*14*/], 272, 1);
	audio::stop_ped_speaking(Local_111[iParam0 /*14*/], 1);
	entity::set_entity_load_collision_flag(Local_111[iParam0 /*14*/], 1);
	ped::set_ped_accuracy(Local_111[iParam0 /*14*/], 10);
	ped::set_blocking_of_non_temporary_events(Local_111[iParam0 /*14*/], 1);
	Local_111[iParam0 /*14*/].f_10 = 0;
}

// Position - 0xEB9D
void func_210(vector3 vParam0, float fParam3) {
	Local_94[1 /*2*/] = vehicle::create_vehicle(joaat("crusader"), vParam0, fParam3, 1, 1);
	audio::_dynamic_mixer_related_fn(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

// Position - 0xEBC9
void func_211() {
	int iVar0;

	if (!func_31(Local_94[1 /*2*/])) {
		func_210(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3) {
		if (!func_31(Local_111[iVar0 /*14*/])) {
			func_209(iVar0, Local_94[1 /*2*/]);
			func_208(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 0) {
				ai::task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603,
														   0, 24, -1, 11f, 0, 1073741824);
			}
		}
		iVar0++;
	}
	if (!func_31(Local_94[0 /*2*/])) {
		func_203(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!func_31(Local_111[4 /*14*/])) {
		func_209(4, Local_94[0 /*2*/]);
		ai::task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20,
								0f);
		func_208(Local_111[4 /*14*/], 0);
	}
	if (!func_31(Local_94[2 /*2*/])) {
		func_207(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8) {
		if (!func_31(Local_111[iVar0 /*14*/])) {
			func_209(iVar0, Local_94[2 /*2*/]);
			func_208(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 5) {
				ai::task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f,
										20, 0f);
			}
		}
		iVar0++;
	}
	if (func_221()) {
		func_200(0, -1, 1);
	}
	else {
		entity::freeze_entity_position(player::player_ped_id(), 0);
	}
}

// Position - 0xED5A
int func_212(var *uParam0) {
	if (func_213(uParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0xED73
bool func_213(var *uParam0) {
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_982) {
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30) {
			if ((*uParam0)[iVar1 /*5*/]) {
				if (!(*uParam0)[iVar1 /*5*/].f_1) {
					if (streaming::has_model_loaded((*uParam0)[iVar1 /*5*/].f_4)) {
						(*uParam0)[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if ((*uParam0)[iVar1 /*5*/].f_2) {
					if ((*uParam0)[iVar1 /*5*/].f_1) {
						streaming::set_model_as_no_longer_needed((*uParam0)[iVar1 /*5*/].f_4);
						func_215(&(*uParam0)[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20) {
			if (uParam0->f_273[iVar1 /*5*/]) {
				if (!uParam0->f_273[iVar1 /*5*/].f_1) {
					if (streaming::has_anim_dict_loaded(uParam0->f_273[iVar1 /*5*/].f_4)) {
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2) {
					if (uParam0->f_273[iVar1 /*5*/].f_1) {
						streaming::remove_anim_dict(uParam0->f_273[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_273[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20) {
			if (uParam0->f_374[iVar1 /*5*/]) {
				if (!uParam0->f_374[iVar1 /*5*/].f_1) {
					if (ai::get_is_waypoint_recording_loaded(uParam0->f_374[iVar1 /*5*/].f_4)) {
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2) {
					if (uParam0->f_374[iVar1 /*5*/].f_1) {
						ai::remove_waypoint_recording(uParam0->f_374[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_374[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5) {
			if (uParam0->f_656[iVar1 /*6*/]) {
				if (!uParam0->f_656[iVar1 /*6*/].f_1) {
					if (graphics::has_scaleform_movie_loaded(uParam0->f_656[iVar1 /*6*/].f_5)) {
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2) {
					if (uParam0->f_656[iVar1 /*6*/].f_1) {
						graphics::set_scaleform_movie_as_no_longer_needed(&uParam0->f_656[iVar1 /*6*/].f_5);
						func_215(&uParam0->f_656[iVar1 /*6*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30) {
			if (uParam0->f_475[iVar1 /*6*/]) {
				if (!uParam0->f_475[iVar1 /*6*/].f_1) {
					if (vehicle::has_vehicle_recording_been_loaded(uParam0->f_475[iVar1 /*6*/].f_5,
																   uParam0->f_475[iVar1 /*6*/].f_4)) {
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2) {
					if (uParam0->f_475[iVar1 /*6*/].f_1) {
						vehicle::remove_vehicle_recording(uParam0->f_475[iVar1 /*6*/].f_5,
														  uParam0->f_475[iVar1 /*6*/].f_4);
						func_215(&uParam0->f_475[iVar1 /*6*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10) {
			if (uParam0->f_202[iVar1 /*7*/]) {
				if (!uParam0->f_202[iVar1 /*7*/].f_1) {
					if (weapon::has_weapon_asset_loaded(uParam0->f_202[iVar1 /*7*/].f_4)) {
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2) {
					if (uParam0->f_202[iVar1 /*7*/].f_1) {
						weapon::remove_weapon_asset(uParam0->f_202[iVar1 /*7*/].f_4);
						func_215(&uParam0->f_202[iVar1 /*7*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10) {
			if (uParam0->f_151[iVar1 /*5*/]) {
				if (!uParam0->f_151[iVar1 /*5*/].f_1) {
					if (vehicle::has_vehicle_asset_loaded(uParam0->f_151[iVar1 /*5*/].f_4)) {
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2) {
					if (uParam0->f_151[iVar1 /*5*/].f_1) {
						vehicle::remove_vehicle_asset(uParam0->f_151[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_151[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5) {
			if (uParam0->f_737[iVar1 /*5*/]) {
				if (!uParam0->f_737[iVar1 /*5*/].f_1) {
					if (audio::request_script_audio_bank(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1)) {
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2) {
					if (uParam0->f_737[iVar1 /*5*/].f_1) {
						audio::release_named_script_audio_bank(uParam0->f_737[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_737[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3) {
			if (uParam0->f_763[iVar1 /*5*/]) {
				if (!uParam0->f_763[iVar1 /*5*/].f_1) {
					if (interior::is_interior_ready(uParam0->f_763[iVar1 /*5*/].f_4)) {
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2) {
					if (uParam0->f_763[iVar1 /*5*/].f_1) {
						interior::unpin_interior(uParam0->f_763[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_763[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7) {
			if (!gameplay::is_string_null_or_empty(uParam0->f_687[iVar1 /*7*/].f_4)) {
				if (uParam0->f_687[iVar1 /*7*/]) {
					iVar2 = graphics::_0x9B6E70C5CEEF4EEB(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1) {
						switch (iVar2) {
						case 1:
						case 2: uParam0->f_687[iVar1 /*7*/].f_1 = 1; break;

						case 0:
							uParam0->f_687[iVar1 /*7*/].f_1 = 0;
							bVar0 = false;
							break;

						case 3:
							uParam0->f_687[iVar1 /*7*/].f_1 = 0;
							func_215(&uParam0->f_687[iVar1 /*7*/]);
							break;

						case -1:
							uParam0->f_687[iVar1 /*7*/].f_1 = 0;
							graphics::release_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_5);
							uParam0->f_687[iVar1 /*7*/] = 0;
							bVar0 = false;
							break;
						}
					}
				}
				else if (interior::is_interior_ready(uParam0->f_687[iVar1 /*7*/].f_6)) {
					uParam0->f_687[iVar1 /*7*/].f_5 = graphics::load_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = gameplay::get_game_timer();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else {
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2) {
					if (uParam0->f_687[iVar1 /*7*/]) {
						if (uParam0->f_687[iVar1 /*7*/].f_1) {
							graphics::release_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_5);
							func_215(&uParam0->f_687[iVar1 /*7*/]);
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else {
							bVar0 = false;
						}
					}
					else {
						func_215(&uParam0->f_687[iVar1 /*7*/]);
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10) {
			if (uParam0->f_879[iVar1 /*5*/]) {
				if (!uParam0->f_879[iVar1 /*5*/].f_1) {
					if (ai::assisted_movement_is_route_loaded(uParam0->f_879[iVar1 /*5*/].f_4)) {
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2) {
					if (uParam0->f_879[iVar1 /*5*/].f_1) {
						ai::assisted_movement_remove_route(uParam0->f_879[iVar1 /*5*/].f_4);
						func_215(&uParam0->f_879[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5) {
			if (uParam0->f_930[iVar1 /*5*/]) {
				if (!uParam0->f_930[iVar1 /*5*/].f_1) {
					if (audio::prepare_alarm(uParam0->f_930[iVar1 /*5*/].f_4)) {
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2) {
					if (uParam0->f_930[iVar1 /*5*/].f_1) {
						func_215(&uParam0->f_930[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779) {
			if (uParam0->f_779[iVar1 /*5*/]) {
				if (!uParam0->f_779[iVar1 /*5*/].f_1) {
					if (ui::has_additional_text_loaded(iVar1)) {
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2) {
					if (uParam0->f_779[iVar1 /*5*/].f_1) {
						ui::clear_additional_text(iVar1, 1);
						func_215(&uParam0->f_779[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860) {
			if (!uParam0->f_860.f_1) {
				if (streaming::has_ptfx_asset_loaded()) {
					uParam0->f_860.f_1 = 1;
				}
				else {
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2) {
				if (uParam0->f_860.f_1) {
					streaming::remove_ptfx_asset();
					func_215(&uParam0->f_860);
				}
				else {
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864) {
			if (!uParam0->f_864.f_1) {
				if (rope::rope_are_textures_loaded()) {
					uParam0->f_864.f_1 = 1;
				}
				else {
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2) {
				if (uParam0->f_864.f_1) {
					rope::rope_unload_textures();
					func_215(&uParam0->f_864);
				}
				else {
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && streaming::is_new_load_scene_active()) {
			if (!uParam0->f_868.f_1) {
				if (streaming::is_new_load_scene_loaded()) {
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983) {
						entity::freeze_entity_position(player::player_ped_id(), 0);
						func_214(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else {
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2) {
				streaming::new_load_scene_stop();
				func_215(&uParam0->f_868);
			}
		}
		iVar1 = 0;
		while (iVar1 < 5) {
			if (uParam0->f_956[iVar1 /*5*/]) {
				if (!uParam0->f_956[iVar1 /*5*/].f_1) {
					if (graphics::has_streamed_texture_dict_loaded(uParam0->f_956[iVar1 /*5*/].f_4)) {
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else {
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2) {
					if (uParam0->f_956[iVar1 /*5*/].f_1) {
						func_215(&uParam0->f_956[iVar1 /*5*/]);
					}
					else {
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0) {
			uParam0->f_982 = 0;
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0xF743
void func_214(var *uParam0) {
	if (streaming::is_new_load_scene_active()) {
		streaming::new_load_scene_stop();
		func_215(&uParam0->f_868);
	}
}

// Position - 0xF75F
void func_215(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

// Position - 0xF77A
void func_216(int iParam0) {
	switch (iParam0) {
	case 0:
		func_218(&uLocal_494, joaat("s_m_m_marine_01"));
		func_218(&uLocal_494, joaat("s_m_y_marine_03"));
		func_218(&uLocal_494, joaat("crusader"));
		func_218(&uLocal_494, joaat("barracks"));
		func_217(&uLocal_494, &cLocal_475);
		func_218(&uLocal_494, joaat("prop_mil_crate_01"));
		break;

	case 1:
		func_218(&uLocal_494, joaat("s_m_y_marine_03"));
		func_218(&uLocal_494, joaat("s_m_m_marine_01"));
		func_218(&uLocal_494, joaat("crusader"));
		func_218(&uLocal_494, joaat("barracks"));
		func_218(&uLocal_494, joaat("prop_mil_crate_01"));
		break;

	case 2:
	case 3:
		func_218(&uLocal_494, joaat("barracks"));
		func_218(&uLocal_494, joaat("prop_mil_crate_01"));
		break;
	}
}

// Position - 0xF851
int func_217(var *uParam0, char *sParam1) {
	int iVar0;
	int iVar1;

	if (gameplay::is_string_null_or_empty(sParam1)) {
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374) {
		if (uParam0->f_374[iVar0 /*5*/]) {
			if (gameplay::are_strings_equal(uParam0->f_374[iVar0 /*5*/].f_4, sParam1)) {
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1) {
					uParam0->f_982 = 1;
					return 1;
				}
				else {
					return 1;
				}
			}
		}
		else if (iVar1 == -1) {
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0) {
		ai::request_waypoint_recording(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = gameplay::get_game_timer();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

// Position - 0xF918
int func_218(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam1 == 0) {
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0 /*5*/]) {
			if ((*uParam0)[iVar0 /*5*/].f_4 == iParam1) {
				(*uParam0)[iVar0 /*5*/].f_2 = 0;
				if (!(*uParam0)[iVar0 /*5*/].f_1) {
					uParam0->f_982 = 1;
					return 1;
				}
				else {
					return 1;
				}
			}
		}
		else if (iVar1 == -1) {
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0) {
		streaming::request_model(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(*uParam0)[iVar1 /*5*/].f_3 = gameplay::get_game_timer();
		(*uParam0)[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

// Position - 0xF9C1
int func_219(var *uParam0, vector3 vParam1, float fParam4, int iParam5) {
	if (func_178(vParam1) || fParam4 <= 0f) {
		return 0;
	}
	if (uParam0->f_868) {
		if (func_134(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam4) {
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1) {
				uParam0->f_982 = 1;
				return 1;
			}
			else {
				return 1;
			}
		}
	}
	streaming::new_load_scene_start_sphere(vParam1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = gameplay::get_game_timer();
	uParam0->f_868.f_4 = {vParam1};
	uParam0->f_868.f_7 = {0f, 0f, 0f};
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

// Position - 0xFA79
void func_220(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 0:
		*uParam1 = {-260.5082f, 2925.446f, 40.1977f};
		*fParam2 = 303.6227f;
		break;

	case 1:
		*uParam1 = {-276.0887f, 2920.386f, 40.1317f};
		*fParam2 = 0f;
		break;

	case 2:
		*uParam1 = {-253.7471f, 2941.485f, 29.131f};
		*fParam2 = 330.8292f;
		break;

	case 3:
		*uParam1 = {1367.324f, 3618.374f, 33.8914f};
		*fParam2 = -118.28f;
		break;
	}
}

// Position - 0xFB14
bool func_221() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0xFB28
void func_222(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30) {
		if ((*uParam0)[iVar0 /*5*/]) {
			(*uParam0)[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		if (uParam0->f_151[iVar0 /*5*/]) {
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		if (uParam0->f_202[iVar0 /*7*/]) {
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20) {
		if (uParam0->f_273[iVar0 /*5*/]) {
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20) {
		if (uParam0->f_374[iVar0 /*5*/]) {
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30) {
		if (uParam0->f_475[iVar0 /*6*/]) {
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (uParam0->f_656[iVar0 /*6*/]) {
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7) {
		if (uParam0->f_687[iVar0 /*7*/]) {
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (uParam0->f_737[iVar0 /*5*/]) {
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (uParam0->f_763[iVar0 /*5*/]) {
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		if (uParam0->f_879[iVar0 /*5*/]) {
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (uParam0->f_930[iVar0 /*5*/]) {
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16) {
		if (uParam0->f_779[iVar0 /*5*/]) {
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868) {
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860) {
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864) {
		uParam0->f_864.f_2 = 1;
	}
}

// Position - 0xFD80
void func_223() {
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (entity::does_entity_exist(Local_101[iLocal_447 /*2*/]) &&
			!ped::is_ped_injured(Local_101[iLocal_447 /*2*/])) {
			if (ped::is_ped_in_any_vehicle(Local_101[iLocal_447 /*2*/], 0)) {
				ped::set_ped_coords_no_gang(
					Local_101[iLocal_447 /*2*/],
					entity::get_entity_coords(ped::get_vehicle_ped_is_in(Local_101[iLocal_447 /*2*/], 0), 1) +
						Vector(0f, -2f, 0f));
			}
			func_230(&Local_101[iLocal_447 /*2*/]);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1) {
		if (entity::does_entity_exist(Local_111[iLocal_447 /*14*/])) {
			func_229(&Local_111[iLocal_447 /*14*/].f_2);
			Local_111[iLocal_447 /*14*/].f_12 = 0;
			if (!ped::is_ped_injured(Local_111[iLocal_447 /*14*/])) {
				if (ped::is_ped_in_any_vehicle(Local_111[iLocal_447 /*14*/], 0)) {
					ped::set_ped_coords_no_gang(
						Local_111[iLocal_447 /*14*/],
						entity::get_entity_coords(ped::get_vehicle_ped_is_in(Local_111[iLocal_447 /*14*/], 0), 1) +
							Vector(0f, -2f, 0f));
				}
				func_230(&Local_111[iLocal_447 /*14*/]);
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1) {
		if (entity::does_entity_exist(uLocal_108[iLocal_447])) {
			func_228(&uLocal_108[iLocal_447]);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (entity::does_entity_exist(Local_94[iLocal_447 /*2*/])) {
			func_227(Local_94[iLocal_447 /*2*/]);
			func_224(&Local_94[iLocal_447 /*2*/]);
		}
		iLocal_447++;
	}
	ui::clear_prints();
	ui::clear_help(1);
	cam::destroy_all_cams(0);
	func_33(&Local_403, 1, 0);
	if (func_31(player::player_ped_id())) {
		player::set_player_control(player::player_id(), 1, 0);
		player::clear_player_wanted_level(player::player_id());
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ai::clear_ped_tasks(player::player_ped_id());
	}
	ui::display_radar(1);
	ui::display_hud(1);
	iLocal_434 = 0;
	iLocal_436 = 0;
	iLocal_435 = 0;
	iLocal_433 = 0;
	iLocal_472 = 0;
	bLocal_456 = false;
	bLocal_457 = false;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
}

// Position - 0xFF6A
void func_224(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_226(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_225(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_225(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x10007
bool func_225(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x10028
bool func_226(int iParam0) {
	if (func_225(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x10052
void func_227(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
			if (entity::does_entity_exist(iVar0)) {
				if (!ped::is_ped_injured(iVar0)) {
					ai::clear_ped_tasks_immediately(iVar0);
				}
				else {
					ped::delete_ped(&iVar0);
				}
			}
			iVar2 = vehicle::get_vehicle_max_number_of_passengers(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2) {
				if (!vehicle::is_vehicle_seat_free(iParam0, iVar1, 0)) {
					iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, iVar1, 0);
					if (entity::does_entity_exist(iVar0)) {
						if (!ped::is_ped_injured(iVar0)) {
							ai::clear_ped_tasks_immediately(iVar0);
						}
						else {
							ped::delete_ped(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

// Position - 0x100EE
void func_228(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x10119
void func_229(int *iParam0) {
	bool bVar0;
	struct<8> Var1;

	if (ui::does_blip_exist(*uParam0)) {
		ui::remove_blip(uParam0);
		bVar0 = true;
	}
	if (ui::does_blip_exist(iParam0->f_1)) {
		ui::remove_blip(&iParam0->f_1);
		bVar0 = true;
	}
	if (entity::does_entity_exist(iParam0->f_7)) {
		if (!ped::is_ped_injured(iParam0->f_7)) {
			if (ui::does_ped_have_ai_blip(iParam0->f_7)) {
				ui::_set_ped_enemy_ai_blip(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0) {
		*iParam0 = {Var1};
	}
}

// Position - 0x10187
void func_230(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0x101C7
void func_231() {
	switch (iLocal_1479) {
	case 1:
		iLocal_1479 = 2;
		iLocal_1481 = -1;
		break;

	case 2:
		iLocal_1479 = 3;
		iLocal_1481 = 0;
		iLocal_1480 = iLocal_1482;
		break;

	case 3:
		iLocal_1482 = -1;
		iLocal_1479 = 0;
		break;

	case 0:
		if (gameplay::get_game_timer() - iLocal_1483 > 2500) {
			iLocal_1483 = gameplay::get_game_timer();
		}
		break;
	}
}

// Position - 0x1022E
void func_232(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_233(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_233(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x1030B
bool func_233(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x1031E
void func_234(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_235(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x10338
void func_235(int *iParam0, int iParam1, char *sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6) {
	iParam0->f_6 = 0;
	func_236(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

// Position - 0x1035A
void func_236(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_233(iVar0)) {
		func_253();
	}
	if (func_252(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_247(iParam0, bParam7, bParam9, 0)) {
				func_244(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_240(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_233(iVar0)) {
								func_143(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_239(1);
								}
							}
						}
					}
				}
			}
			else if (func_240(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_233(iVar0)) {
							func_143(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_239(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_233(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_232(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_232(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_232(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_232(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_232(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_232(iParam0, iVar0, 1);
				}
			}
			if (!func_247(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_238(iParam0)) {
					func_237(iParam0);
				}
			}
		}
	}
	else {
		func_232(iParam0, iVar0, 0);
	}
}

// Position - 0x106C7
void func_237(int *iParam0) {
	if (func_252(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x10730
bool func_238(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x1075B
int func_239(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x10805
bool func_240(char *sParam0) {
	if (!func_241(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_233(sParam0) || func_233("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_239(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_239(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_239(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x1089E
int func_241(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_243(0)) {
		return 0;
	}
	if (func_242()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (G_DisableMessagesAndCalls2) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x10A1A
bool func_242() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x10A2F
bool func_243(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0x10A89
void func_244(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_232(iParam0, 0, 0);
	}
	if (func_134(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_245()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x10B8E
int func_245() { return func_246(player::player_id()); }

// Position - 0x10B9E
int func_246(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x10BBD
bool func_247(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_251(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_250(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_250(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_251(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_238(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_251(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_250(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_250(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_251(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_251(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_250(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_250(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_251(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_249(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_248(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_248(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_249(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_238(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_241(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_253();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x10F29
bool func_248(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_241(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x10F7B
bool func_249(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_241(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x10FC4
bool func_250(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_241(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x11023
bool func_251(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_241(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x11079
bool func_252(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x110D4
void func_253() { gameplay::set_bit(&G_SleepModeOffOn11, 4); }

// Position - 0x110E4
void func_254(var *uParam0) { func_213(uParam0); }

// Position - 0x110F3
void func_255() {
	vector3 vVar0;
	float *fVar3;

	ped::remove_relationship_group(iLocal_492);
	ped::remove_relationship_group(iLocal_493);
	ped::add_relationship_group("trevor", &iLocal_492);
	ped::add_relationship_group("enemies", &iLocal_493);
	ped::set_relationship_between_groups(5, iLocal_493, 1862763509);
	ped::set_relationship_between_groups(5, iLocal_493, iLocal_492);
	ped::set_relationship_between_groups(5, iLocal_492, iLocal_493);
	ped::set_relationship_between_groups(1, iLocal_493, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_493);
	ped::set_relationship_between_groups(1, iLocal_493, iLocal_493);
	ped::set_relationship_between_groups(1, iLocal_493, -472287501);
	ped::set_relationship_between_groups(1, -472287501, iLocal_493);
	ui::request_additional_text("ruralp", 0);
	if (player::is_player_playing(player::player_id())) {
		player::set_player_control(player::player_id(), 1, 0);
	}
	gameplay::enable_dispatch_service(5, 0);
	gameplay::enable_dispatch_service(3, 0);
	gameplay::enable_dispatch_service(1, 0);
	gameplay::enable_dispatch_service(10, 0);
	gameplay::enable_dispatch_service(9, 0);
	gameplay::_0xE532EC1A63231B4F(1, 0);
	gameplay::_0xE532EC1A63231B4F(2, 0);
	gameplay::_0xE532EC1A63231B4F(8, 0);
	player::clear_player_wanted_level(player::player_id());
	player::set_wanted_level_multiplier(0f);
	player::set_max_wanted_level(0);
	player::set_police_radar_blips(0);
	vehicle::set_vehicle_model_is_suppressed(joaat("crusader"), 1);
	vehicle::set_vehicle_model_is_suppressed(joaat("barracks"), 1);
	iLocal_445 =
		ped::add_scenario_blocking_area(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f),
										Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	vehicle::set_all_vehicle_generators_active_in_area(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f),
													   Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 0,
													   1);
	if (func_202() || func_7(0)) {
		if (func_202()) {
			iLocal_1485 = func_314();
			if (Global_86001) {
				iLocal_1485++;
			}
			if (iLocal_1485 >= 3) {
				iLocal_1485 = 3;
			}
		}
		else if (func_7(0)) {
			iLocal_1485 = 0;
		}
		if (func_202()) {
			func_220(iLocal_1485, &vVar0, &fVar3);
			func_313(vVar0, fVar3, 1, 0);
		}
		iLocal_1484 = 1;
	}
	else {
		while (!func_311()) {
			system::wait(0);
		}
		func_258(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1480 = 0;
		func_216(0);
	}
	iLocal_1481 = 0;
	func_256(92);
}

// Position - 0x11302
void func_256(int iParam0) {
	Global_87679 = 0;
	switch (iParam0) {
	case 72:
		func_257(2);
		func_257(4);
		break;

	case 73:
		func_257(0);
		func_257(1);
		func_257(7);
		break;

	case 92:
		func_257(10);
		func_257(9);
		func_257(13);
		func_257(6);
		break;

	case 68: func_257(11); break;

	case 78: func_257(14); break;

	case 79: func_257(3); break;

	default: break;
	}
}

// Position - 0x11390
void func_257(int iParam0) { gameplay::set_bit(&Global_87679, iParam0); }

// Position - 0x113A2
void func_258(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1) {
		if (!gameplay::are_strings_equal("FinaleC2", script::get_this_script_name())) {
		}
	}
	iVar0 = 0;
	if (iParam3 == 1) {
		if (iParam0 != Global_91528) {
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528) {
		iVar0 = 1;
	}
	if (iVar0 == 1) {
		func_310(1);
		if (iParam0 <= Global_91528) {
		}
		iVar1 = func_308(script::get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94) {
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_306(iVar1);
			cVar3 = {Global_82612[iVar1 /*34*/].f_8};
			if (iVar1 == 90) {
				switch (Global_101700.f_8044.f_99.f_205[7]) {
				case 1: StringConCat(&cVar3, "A", 8); break;

				case 2: StringConCat(&cVar3, "B", 8); break;
				}
			}
			stats::playstats_mission_checkpoint(&cVar3, iVar2, Global_91528, iParam0);
		}
		else {
			iVar5 = func_301(script::get_this_script_name(), 1);
			if (iVar5 != -1) {
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_300(iVar5)}, 4);
				stats::playstats_mission_checkpoint(&uVar6, 0, Global_91528, iParam0);
			}
			else {
				iVar10 = func_299(&Global_91491.f_3);
				if (iVar10 > -1) {
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_259(iParam0, sParam1, iParam4, iParam5);
		if (gameplay::are_strings_equal(sParam1, "")) {
		}
	}
	else if (iParam0 < Global_91528) {
	}
}

// Position - 0x11517
void func_259(int iParam0, var uParam1, int iParam2, int iParam3) {
	func_260(&Global_96040, script::get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

// Position - 0x11533
void func_260(var *uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_19();
	uParam0->f_1 = func_114();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_284(&uParam0->f_2305, 0);
		func_283(player::player_ped_id());
		func_277(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_276()) {
			func_269(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_262(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_261(&uParam0->f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

// Position - 0x123BB
int func_261(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x123DD
void func_262(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_29(iParam2);
	}
	if (func_268(iParam2, &iVar0, iParam3, iParam5)) {
		func_263(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_263(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x12465
int func_263(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_265(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_264(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x124A5
bool func_264(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x124D3
void func_265(var *uParam0, int iParam1, int iParam2) {
	func_86(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_267(iParam1, 145, 0);
	uParam0->f_11 = func_105(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_266(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0x125AF
int func_266(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x125F1
int func_267(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_126(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1267F
bool func_268(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_106(*uParam1, func_19(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x127AC
void func_269(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_275(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_274(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_273(161, -1)) {
				uParam1->f_59 = func_270(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_270(747, Global_69521, 0);
			}
			uParam1->f_60 = func_270(748, Global_69521, 0);
			uParam1->f_61 = func_270(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_273(161, -1)) {
				uParam1->f_59 = func_270(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_270(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x12956
int func_270(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_271(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x12988
int func_271(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_272();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x129BC
var func_272() { return Global_1312735; }

// Position - 0x129C8
bool func_273(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_271(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x129F4
void func_274(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_29(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0x12F3C
void func_275(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_29(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0x1317D
int func_276() {
	func_20();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x13196
void func_277(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_278(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0x13289
void func_278(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_282(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_282(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_280(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_280(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_279(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0x134ED
int func_279(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0x1365B
int func_280(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_281(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x1414A
int func_281(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x14185
int func_282(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x143F9
void func_283(int iParam0) {
	int iVar0;

	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x14435
void func_284(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_287(&iVar0)) {
			if (func_286(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_19();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_285(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x14990
bool func_285(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x149D4
bool func_286(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_134(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x15063
bool func_287(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_298()) {
			*iParam0 = func_293(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_292(*iParam0) && !func_288(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x150BE
int func_288(int iParam0) { return func_289(iParam0, 0, 1); }

// Position - 0x150CE
int func_289(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_291() == 0) {
			return gameplay::is_bit_set(func_270(func_290(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x1512E
int func_290(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x153F5
int func_291() { return Global_25190; }

// Position - 0x15400
int func_292(int iParam0) { return func_289(iParam0, 5, 1); }

// Position - 0x15410
int func_293(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_297(iVar0)) {
			if (!iParam5 || func_296(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_294(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x154B2
Vector3 func_294(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_295(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x159CC
Vector3 func_295(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x15AE2
int func_296(int iParam0) { return func_289(iParam0, 0, 0); }

// Position - 0x15AF2
int func_297(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x15D65
bool func_298() { return Global_91543.f_303 > 0; }

// Position - 0x15D76
int func_299(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x15DCC
struct<2> func_300(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x16218
int func_301(char* sParam0, int iParam1)
{
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_302(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x16261
void func_302(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_303(uParam1, "Abigail1", func_305(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 1:
		func_303(uParam1, "Abigail2", func_305(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 2:
		func_303(uParam1, "Barry1", func_305(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 3:
		func_303(uParam1, "Barry2", func_305(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 4:
		func_303(uParam1, "Barry3", func_305(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 5:
		func_303(uParam1, "Barry3A", func_305(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 6:
		func_303(uParam1, "Barry3C", func_305(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 7:
		func_303(uParam1, "Barry4", func_305(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_304(iParam0), 0, 0);
		break;

	case 8:
		func_303(uParam1, "Dreyfuss1", func_305(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 9:
		func_303(uParam1, "Epsilon1", func_305(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 10:
		func_303(uParam1, "Epsilon2", func_305(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 11:
		func_303(uParam1, "Epsilon3", func_305(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 12:
		func_303(uParam1, "Epsilon4", func_305(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 13:
		func_303(uParam1, "Epsilon5", func_305(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 14:
		func_303(uParam1, "Epsilon6", func_305(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 15:
		func_303(uParam1, "Epsilon7", func_305(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 16:
		func_303(uParam1, "Epsilon8", func_305(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 17:
		func_303(uParam1, "Extreme1", func_305(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 18:
		func_303(uParam1, "Extreme2", func_305(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 19:
		func_303(uParam1, "Extreme3", func_305(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 20:
		func_303(uParam1, "Extreme4", func_305(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 21:
		func_303(uParam1, "Fanatic1", func_305(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_304(iParam0), 1, 0);
		break;

	case 22:
		func_303(uParam1, "Fanatic2", func_305(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_304(iParam0), 1, 0);
		break;

	case 23:
		func_303(uParam1, "Fanatic3", func_305(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_304(iParam0), 0, 1);
		break;

	case 24:
		func_303(uParam1, "Hao1", func_305(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_304(iParam0), 0, 1);
		break;

	case 25:
		func_303(uParam1, "Hunting1", func_305(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 26:
		func_303(uParam1, "Hunting2", func_305(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 27:
		func_303(uParam1, "Josh1", func_305(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 28:
		func_303(uParam1, "Josh2", func_305(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 29:
		func_303(uParam1, "Josh3", func_305(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 30:
		func_303(uParam1, "Josh4", func_305(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 31:
		func_303(uParam1, "Maude1", func_305(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 32:
		func_303(uParam1, "Minute1", func_305(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 33:
		func_303(uParam1, "Minute2", func_305(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 34:
		func_303(uParam1, "Minute3", func_305(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 35:
		func_303(uParam1, "MrsPhilips1", func_305(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 36:
		func_303(uParam1, "MrsPhilips2", func_305(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_304(iParam0), 0, 0);
		break;

	case 37:
		func_303(uParam1, "Nigel1", func_305(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 38:
		func_303(uParam1, "Nigel1A", func_305(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 39:
		func_303(uParam1, "Nigel1B", func_305(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_304(iParam0), 1, 1);
		break;

	case 40:
		func_303(uParam1, "Nigel1C", func_305(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_304(iParam0), 1, 1);
		break;

	case 41:
		func_303(uParam1, "Nigel1D", func_305(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_304(iParam0), 1, 1);
		break;

	case 42:
		func_303(uParam1, "Nigel2", func_305(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 43:
		func_303(uParam1, "Nigel3", func_305(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_304(iParam0), 1, 1);
		break;

	case 44:
		func_303(uParam1, "Omega1", func_305(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 45:
		func_303(uParam1, "Omega2", func_305(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 46:
		func_303(uParam1, "Paparazzo1", func_305(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 47:
		func_303(uParam1, "Paparazzo2", func_305(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 48:
		func_303(uParam1, "Paparazzo3", func_305(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 49:
		func_303(uParam1, "Paparazzo3A", func_305(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 50:
		func_303(uParam1, "Paparazzo3B", func_305(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 51:
		func_303(uParam1, "Paparazzo4", func_305(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 52:
		func_303(uParam1, "Rampage1", func_305(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 54:
		func_303(uParam1, "Rampage3", func_305(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 55:
		func_303(uParam1, "Rampage4", func_305(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 56:
		func_303(uParam1, "Rampage5", func_305(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_304(iParam0), 0, 0);
		break;

	case 53:
		func_303(uParam1, "Rampage2", func_305(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_304(iParam0), 1, 0);
		break;

	case 57:
		func_303(uParam1, "TheLastOne", func_305(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 58:
		func_303(uParam1, "Tonya1", func_305(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 59:
		func_303(uParam1, "Tonya2", func_305(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	case 60:
		func_303(uParam1, "Tonya3", func_305(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_304(iParam0), 0, 1);
		break;

	case 61:
		func_303(uParam1, "Tonya4", func_305(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_304(iParam0), 0, 1);
		break;

	case 62:
		func_303(uParam1, "Tonya5", func_305(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_304(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x17416
void func_303(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			  int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			  int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			  int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x174A7
int func_304(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x177ED
struct<2> func_305(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_300(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

//Position - 0x17824
int func_306(int iParam0)
{
	switch (iParam0) {
	case 69:
	case 70: return func_307(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_307(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_307(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_307(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_307(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x178E0
int func_307(int iParam0) {
	switch (iParam0) {
	case 1:
	case 3:
	case 5:
	case 6:
	case 8: return 0;

	case 2:
	case 4:
	case 7:
	case 9: return 1;
	}
	return -1;
}

// Position - 0x17934
int func_308(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_309(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x1795E
int func_309(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x17994
void func_310(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x17C16
int func_311() {
	int iVar0;

	if (!entity::does_entity_exist(Local_94[0 /*2*/])) {
		if (entity::does_entity_exist(Global_88321[0])) {
			entity::set_entity_as_mission_entity(Global_88321[0], 1, 1);
			Local_94[0 /*2*/] = Global_88321[0];
			audio::_0x18EB48CFC41F2EA0(Global_88321[0], 0);
			audio::_dynamic_mixer_related_fn(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			func_204(Local_94[0 /*2*/], 0);
			entity::reset_entity_alpha(Local_94[0 /*2*/]);
		}
	}
	if (!entity::does_entity_exist(Local_94[1 /*2*/])) {
		if (entity::does_entity_exist(Global_88321[1])) {
			entity::set_entity_as_mission_entity(Global_88321[1], 1, 1);
			Local_94[1 /*2*/] = Global_88321[1];
			audio::_0x18EB48CFC41F2EA0(Global_88321[1], 0);
			audio::_dynamic_mixer_related_fn(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			entity::reset_entity_alpha(Local_94[1 /*2*/]);
		}
	}
	if (!entity::does_entity_exist(Local_94[2 /*2*/])) {
		if (entity::does_entity_exist(Global_88321[2])) {
			entity::set_entity_as_mission_entity(Global_88321[2], 1, 1);
			Local_94[2 /*2*/] = Global_88321[2];
			audio::_0x18EB48CFC41F2EA0(Global_88321[2], 0);
			audio::_dynamic_mixer_related_fn(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			entity::reset_entity_alpha(Local_94[2 /*2*/]);
		}
	}
	if (!entity::does_entity_exist(Local_111[4 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[0])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[0], 1, 1);
			Local_111[4 /*14*/] = Global_88321.f_9[0];
			func_208(Local_111[4 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[0 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[2])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[2], 1, 1);
			Local_111[0 /*14*/] = Global_88321.f_9[2];
			func_208(Local_111[0 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[1 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[3])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[3], 1, 1);
			Local_111[1 /*14*/] = Global_88321.f_9[3];
			func_208(Local_111[1 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[2 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[4])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[4], 1, 1);
			Local_111[2 /*14*/] = Global_88321.f_9[4];
			func_208(Local_111[2 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[3 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[5])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[5], 1, 1);
			Local_111[3 /*14*/] = Global_88321.f_9[5];
			func_208(Local_111[3 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[5 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[6])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[6], 1, 1);
			Local_111[5 /*14*/] = Global_88321.f_9[6];
			func_208(Local_111[5 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[6 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[7])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[7], 1, 1);
			Local_111[6 /*14*/] = Global_88321.f_9[7];
			func_208(Local_111[6 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[7 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[8])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[8], 1, 1);
			Local_111[7 /*14*/] = Global_88321.f_9[8];
			func_208(Local_111[7 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(Local_111[8 /*14*/])) {
		if (entity::does_entity_exist(Global_88321.f_9[9])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[9], 1, 1);
			Local_111[8 /*14*/] = Global_88321.f_9[9];
			func_208(Local_111[8 /*14*/], 0);
		}
	}
	if (!entity::does_entity_exist(uLocal_108[0])) {
		if (entity::does_entity_exist(Global_88321.f_28[0])) {
			entity::set_entity_as_mission_entity(Global_88321.f_28[0], 1, 1);
			uLocal_108[0] = Global_88321.f_28[0];
		}
	}
	if (!entity::does_entity_exist(uLocal_108[1])) {
		if (entity::does_entity_exist(Global_88321.f_28[1])) {
			entity::set_entity_as_mission_entity(Global_88321.f_28[1], 1, 1);
			uLocal_108[1] = Global_88321.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9 - 1) {
		if (func_31(Local_111[iVar0 /*14*/])) {
			ped::set_ped_relationship_group_hash(Local_111[iVar0 /*14*/], iLocal_493);
			entity::reset_entity_alpha(Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_475 = {Global_88722};
	StringCopy(&Global_88722, "", 64);
	func_312(229, 0f, 0f, 2000f);
	if (entity::does_entity_exist(Local_94[0 /*2*/]) && entity::does_entity_exist(Local_94[1 /*2*/]) &&
		entity::does_entity_exist(Local_94[2 /*2*/]) && entity::does_entity_exist(Local_111[4 /*14*/]) &&
		entity::does_entity_exist(Local_111[0 /*14*/]) && entity::does_entity_exist(Local_111[1 /*14*/]) &&
		entity::does_entity_exist(Local_111[2 /*14*/]) && entity::does_entity_exist(Local_111[3 /*14*/]) &&
		entity::does_entity_exist(Local_111[5 /*14*/]) && entity::does_entity_exist(Local_111[6 /*14*/]) &&
		entity::does_entity_exist(Local_111[7 /*14*/]) && entity::does_entity_exist(Local_111[8 /*14*/]) &&
		entity::does_entity_exist(uLocal_108[0]) && entity::does_entity_exist(uLocal_108[1])) {
		return 1;
	}
	return 0;
}

// Position - 0x18134
void func_312(int iParam0, vector3 vParam1) {
	int iVar0;

	if (ui::does_blip_exist(Global_25501[iParam0 /*23*/].f_19)) {
		ui::set_blip_coords(Global_25501[iParam0 /*23*/].f_19, vParam1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2) {
		Global_25501[iParam0 /*23*/][iVar0 /*3*/] = {vParam1};
		iVar0++;
	}
}

// Position - 0x18183
void func_313(vector3 vParam0, float *fParam3, int iParam4, int iParam5) {
	if (func_202()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_201(1);
	}
}

// Position - 0x18218
int func_314() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x18242
void func_315() {
	func_33(&Local_403, 1, 0);
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (func_31(Local_101[iLocal_447 /*2*/])) {
			if (Local_101[iLocal_447 /*2*/] != player::player_ped_id()) {
				ped::set_ped_keep_task(Local_101[iLocal_447 /*2*/], 1);
				func_197(&Local_101[iLocal_447 /*2*/], 1, 0, 1);
			}
			if (ui::does_blip_exist(Local_101[iLocal_447 /*2*/].f_1)) {
				ui::remove_blip(&Local_101[iLocal_447 /*2*/].f_1);
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1) {
		if (func_31(Local_111[iLocal_447 /*14*/])) {
			func_197(&Local_111[iLocal_447 /*14*/], 1, 0, 1);
			if (ui::does_blip_exist(Local_111[iLocal_447 /*14*/].f_1)) {
				ui::remove_blip(&Local_111[iLocal_447 /*14*/].f_1);
			}
			func_229(&Local_111[iLocal_447 /*14*/].f_2);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1) {
		if (entity::does_entity_exist(uLocal_108[iLocal_447])) {
			func_318(&uLocal_108[iLocal_447], 0);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1) {
		if (func_31(Local_94[iLocal_447 /*2*/])) {
			func_185(&Local_94[iLocal_447 /*2*/]);
		}
		if (ui::does_blip_exist(Local_94[iLocal_447 /*2*/].f_1)) {
			ui::remove_blip(&Local_94[iLocal_447 /*2*/].f_1);
		}
		iLocal_447++;
	}
	func_317(0);
	ui::clear_prints();
	player::set_player_control(player::player_id(), 1, 0);
	func_316();
	if (func_31(player::player_ped_id())) {
		ai::clear_ped_tasks(player::player_ped_id());
	}
	ped::remove_scenario_blocking_area(iLocal_445, 0);
	player::set_wanted_level_multiplier(1f);
	player::set_max_wanted_level(5);
	ui::display_radar(1);
	ui::display_hud(1);
	gameplay::enable_dispatch_service(5, 1);
	gameplay::enable_dispatch_service(3, 1);
	gameplay::enable_dispatch_service(1, 1);
	gameplay::enable_dispatch_service(10, 1);
	gameplay::enable_dispatch_service(9, 1);
	gameplay::_0xD9F692D349249528();
	vehicle::set_all_vehicle_generators_active_in_area(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f),
													   Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 1,
													   1);
	vehicle::set_vehicle_model_is_suppressed(joaat("crusader"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("barracks"), 0);
	iLocal_434 = 0;
	bLocal_456 = false;
	player::set_police_radar_blips(1);
	func_232(&Local_82, 0, 0);
	gameplay::set_this_script_can_remove_blips_created_by_any_script(0);
	script::terminate_this_thread();
}

// Position - 0x18465
void func_316() { Global_87679 = 0; }

// Position - 0x18472
void func_317(int iParam0) {
	if (iParam0) {
		StringCopy(&Global_100756, script::get_this_script_name(), 24);
		Global_100750 = 1;
	}
	else {
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

// Position - 0x1849E
void func_318(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0x184D9
void func_319() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_7(0)) {
		if (!func_320()) {
			iVar0 = func_5();
			if (iVar0 != -1) {
				if (!func_190(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_195();
		}
	}
}

// Position - 0x1854A
int func_320() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}
