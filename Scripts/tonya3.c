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
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
vector3 vLocal_22 = {0f, 0f, 0f};
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 10;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
vector3 vLocal_88[8] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_113[1] = {{0f, 0f, 0f}};
var uLocal_117 = 0;
struct<7> Local_118 = {
	6, 0, 0, 0, 0, 0, 0
};
struct<11> Local_125 = {
	10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
vector3 vLocal_136 = {0f, 0f, 0f};
struct<165> Local_139 = {
	16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
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
char cLocal_315[16] = "";
var uLocal_317 = 0;
var uLocal_318 = 0;
char cLocal_319[16] = "";
var uLocal_321 = 0;
var uLocal_322 = 0;
vector3 vLocal_323[12] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						  {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
char cLocal_360[32] = "";
var uLocal_364 = 0;
var uLocal_365 = 0;
var uLocal_366 = 0;
var uLocal_367 = 0;
var uLocal_368 = 0;
var uLocal_369 = 0;
var uLocal_370 = 1132396544;
var uLocal_371 = 1132396544;
var uLocal_372 = 1132396544;
var uLocal_373 = 0;
var uLocal_374 = -1082130432;
var uLocal_375 = 0;
var uLocal_376 = 0;
var uLocal_377 = 8;
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
var uLocal_403 = 0;
var uLocal_404 = 0;
var uLocal_405 = 0;
var uLocal_406 = 0;
var uLocal_407 = 0;
var uLocal_408 = 0;
var uLocal_409 = 0;
var uLocal_410 = 0;
var uLocal_411 = 0;
var uLocal_412 = 0;
var uLocal_413 = 0;
var uLocal_414 = 0;
var uLocal_415 = 0;
var uLocal_416 = 0;
var uLocal_417 = 0;
var uLocal_418 = 0;
var uLocal_419 = 0;
var uLocal_420 = 0;
var uLocal_421 = 0;
var uLocal_422 = 0;
var uLocal_423 = 0;
var uLocal_424 = 0;
var uLocal_425 = 0;
var uLocal_426 = 0;
var uLocal_427 = 0;
var uLocal_428 = 0;
var uLocal_429 = 0;
var uLocal_430 = 0;
var uLocal_431 = 0;
var uLocal_432 = 0;
var uLocal_433 = 0;
var uLocal_434 = -1;
var uLocal_435 = 1092616192;
var uLocal_436 = 0;
var uLocal_437 = 0;
bool bLocal_438 = 0;
int iLocal_439 = 0;
int iLocal_440 = 0;
int iLocal_441 = 0;
int *iLocal_442 = NULL;
var uLocal_443 = 0;
var uLocal_444 = -1;
var uLocal_445 = 0;
var uLocal_446 = 0;
var uLocal_447 = 0;
var uLocal_448 = 0;
var uLocal_449 = 0;
var uLocal_450 = 0;
var uLocal_451 = 1000;
var uLocal_452 = 1000;
var uLocal_453 = 0;
var uLocal_454 = 0;
var *uLocal_455 = NULL;
var uLocal_456 = 0;
var uLocal_457 = 1097859072;
var uLocal_458 = 1500;
var uLocal_459 = 45;
var uLocal_460 = 1103626240;
var uLocal_461 = 5;
int iLocal_462 = 0;
int iLocal_463 = 0;
int iLocal_464 = 0;
var uLocal_465 = 0;
var uLocal_466 = 0;
var uLocal_467 = 0;
var uLocal_468 = 0;
int iLocal_469 = 0;
bool bLocal_470 = 0;
float fLocal_471 = 0f;
float fLocal_472 = 0f;
float fLocal_473 = 0f;
float fLocal_474 = 0f;
float fLocal_475 = 0f;
float fLocal_476 = 0f;
var uLocal_477 = 0;
var uLocal_478 = 0;
var uLocal_479 = 0;
vector3 vLocal_480 = {0f, 0f, 0f};
int iLocal_483 = 0;
int iLocal_484 = 0;
bool bLocal_485 = 0;
int iLocal_486 = 0;
bool bLocal_487 = 0;
int iLocal_488 = 0;
var uLocal_489 = 0;
var uLocal_490 = 0;
var uLocal_491 = 0;
var uLocal_492 = 0;
var uLocal_493 = 0;
var uLocal_494 = 0;
var uLocal_495 = 0;
var uLocal_496 = 0;
var uLocal_497 = 0;
var uLocal_498 = 0;
var uLocal_499 = 0;
int iLocal_500 = 0;
var uLocal_501 = 0;
int iLocal_502 = 0;
int iLocal_503 = 0;
int iLocal_504 = 0;
int iLocal_505 = 0;
int iLocal_506 = 0;
bool bLocal_507 = 0;
int iLocal_508 = 0;
int iLocal_509 = 0;
bool bLocal_510 = 0;
int iLocal_511 = 0;
int iLocal_512 = 0;
var uLocal_513 = 0;
int iLocal_514 = 0;
int iLocal_515 = 0;
var uLocal_516 = 0;
var uLocal_517 = 0;
var uLocal_518 = 0;
int iLocal_519 = 0;
struct<6> Local_520 = {
	0, 0, 0, 0, 0, 0
};
char *sLocal_526 = NULL;
var *uLocal_527 = NULL;
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
var uLocal_645 = 0;
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
int iLocal_692 = 0;
struct<23> Local_693[53];
struct<28> Local_1913[17];
var uLocal_2390 = 0;
struct<165> Local_2391 = {
	16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var *uLocal_2556 = NULL;
var uLocal_2557 = 0;
var uLocal_2558 = 0;
var uLocal_2559 = 0;
var uLocal_2560 = 0;
var uLocal_2561 = 0;
var uLocal_2562 = 0;
var uLocal_2563 = 0;
var uLocal_2564 = 0;
var *uLocal_2565 = NULL;
var uLocal_2566 = 0;
var uLocal_2567 = 0;
var *uLocal_2568 = NULL;
var uLocal_2569 = 0;
var uLocal_2570 = 0;
var *uLocal_2571 = NULL;
var uLocal_2572 = 0;
var uLocal_2573 = 0;
vector3 vLocal_2574 = {0f, 0f, 0f};
float fLocal_2577 = 0f;
var uLocal_2578 = 0;
var uLocal_2579 = 0;
var uLocal_2580 = 0;
var uLocal_2581 = 0;
var uLocal_2582 = 0;
var uLocal_2583 = 0;
var uLocal_2584 = 0;
var uLocal_2585 = 0;
var uLocal_2586 = 0;
var uLocal_2587 = 0;
var uLocal_2588 = 0;
var uLocal_2589 = 0;
var uLocal_2590 = 0;
var uLocal_2591 = 0;
var uLocal_2592 = 0;
var uLocal_2593 = 0;
var uLocal_2594 = 0;
var uLocal_2595 = 0;
var uLocal_2596 = 0;
var uLocal_2597 = 0;
var uLocal_2598 = 0;
struct<18> Local_2599[2];
var *uLocal_2636 = NULL;
var uLocal_2637 = 0;
var uLocal_2638 = 0;
int *iLocal_2639 = NULL;
int *iLocal_2640 = NULL;
int *iLocal_2641 = NULL;
int *iLocal_2642 = NULL;
float fLocal_2643 = 0f;
int iLocal_2644 = 0;
bool bLocal_2645 = 0;
int iLocal_2646 = 0;
int iLocal_2647 = 0;
int iLocal_2648 = 0;
int iLocal_2649 = 0;
var uLocal_2650 = 0;
char *sLocal_2651 = NULL;
char *sLocal_2652 = NULL;
char[] cLocal_2653[8] = 0;
char *sLocal_2654[3] = {NULL, NULL, NULL};
char *sLocal_2658 = NULL;
vector3 vLocal_2659[1] = {{0f, 0f, 0f}};
vector3 vLocal_2663 = {0f, 0f, 0f};
vector3 vLocal_2666 = {0f, 0f, 0f};
vector3 vLocal_2669 = {0f, 0f, 0f};
var *uLocal_2672 = NULL;
var uLocal_2673 = 0;
var uLocal_2674 = 0;
var uLocal_2675 = 0;
var uLocal_2676 = 0;
var uLocal_2677 = 0;
var uLocal_2678 = 0;
var uLocal_2679 = 0;
var *uLocal_2680 = NULL;
var uLocal_2681 = 0;
var uLocal_2682 = 0;
var uLocal_2683 = 0;
var uLocal_2684 = 0;
var uLocal_2685 = 0;
var uLocal_2686 = 0;
var uLocal_2687 = 0;
bool bLocal_2688 = 0;
int iLocal_2689 = 0;
int iLocal_2690 = 0;
int iLocal_2691 = 0;
int iLocal_2692 = 0;
int iLocal_2693 = 0;
int iLocal_2694 = 0;
bool bLocal_2695 = 0;
bool bLocal_2696 = 0;
int iLocal_2697 = 0;
int iLocal_2698 = 0;
bool bLocal_2699 = 0;
bool bLocal_2700 = 0;
var uLocal_2701 = 0;
int iLocal_2702 = 0;
int iLocal_2703 = 0;
int iLocal_2704 = 0;
int iLocal_2705 = 0;
int iLocal_2706 = 0;
bool bLocal_2707 = 0;
int iLocal_2708 = 0;
int iLocal_2709 = 0;
int iLocal_2710 = 0;
int iLocal_2711 = 0;
bool bLocal_2712 = 0;
bool bLocal_2713 = 0;
int iLocal_2714 = 0;
int iLocal_2715 = 0;
bool bLocal_2716 = 0;
bool bLocal_2717 = 0;
int iLocal_2718 = 0;
var uLocal_2719 = 0;
bool bLocal_2720 = 0;
bool bLocal_2721 = 0;
int iLocal_2722 = 0;
int iLocal_2723 = 0;
var uLocal_2724 = 0;
int iLocal_2725 = 0;
int iLocal_2726 = 0;
int iLocal_2727 = 0;
int iLocal_2728 = 0;
int iLocal_2729 = 0;
int iLocal_2730 = 0;
bool bLocal_2731 = 0;
var uLocal_2732 = 0;
bool bLocal_2733 = 0;
int iLocal_2734 = 0;
int iLocal_2735 = 0;
bool bLocal_2736 = 0;
int iLocal_2737 = 0;
int iLocal_2738 = 0;
int iLocal_2739 = 0;
bool bLocal_2740 = 0;
int iLocal_2741 = 0;
bool bLocal_2742 = 0;
int iLocal_2743 = 0;
int iLocal_2744 = 0;
int iLocal_2745 = 0;
var uLocal_2746 = 0;
var uLocal_2747 = 0;
int iLocal_2748 = 0;
int iLocal_2749 = 0;
int iLocal_2750 = 0;
int iLocal_2751 = 0;
int iLocal_2752 = 0;
int iLocal_2753 = 0;
int iLocal_2754 = 0;
var uLocal_2755 = 0;
int iLocal_2756 = 0;
int iLocal_2757 = 0;
int iLocal_2758 = 0;
int iLocal_2759 = 0;
int iLocal_2760 = 0;
int iLocal_2761 = 0;
vector3 vLocal_2762 = {2.802597E-45f, 0f, 0f};
int iLocal_2765 = 0;
int iLocal_2766 = 0;
int *iLocal_2767 = NULL;
int iLocal_2768 = 0;
int iLocal_2769 = 0;
int iLocal_2770[1] = {0};
var *uLocal_2772[2] = {NULL, NULL};
int iLocal_2775 = 0;
struct<2> Local_2776 = {
	0, 0
};
int iLocal_2778 = 0;
struct<20> Local_2779[1];
struct<7> Local_2800 = {
	0, 0, 0, 0, 0, 0, 0
};
var uLocal_2807 = 0;
var uLocal_2808 = 0;
var uLocal_2809 = 0;
var uLocal_2810 = 0;
var uLocal_2811 = 0;
var uLocal_2812 = 0;
var uLocal_2813 = 0;
var uLocal_2814 = 0;
var uLocal_2815 = 0;
var uLocal_2816 = 0;
var uLocal_2817 = 0;
var uLocal_2818 = 0;
var uLocal_2819 = 0;
int iLocal_2820 = 0;
int iLocal_2821 = 0;
int iLocal_2822 = 0;
int iLocal_2823 = 0;
int iLocal_2824 = 0;
var *uLocal_2825 = NULL;
int *iLocal_2826 = NULL;
var *uLocal_2827 = NULL;
var *uLocal_2828 = NULL;
int *iLocal_2829 = NULL;
int iLocal_2830 = 0;
int iLocal_2831 = 0;
int iLocal_2832 = 0;
int iLocal_2833 = 0;
var uLocal_2834 = 0;
int iLocal_2835 = 0;
int iLocal_2836 = 0;
int iLocal_2837 = 0;
var uLocal_2838 = 0;
int iLocal_2839 = 0;
int iLocal_2840 = 0;
int iLocal_2841 = 0;
var *uLocal_2842 = NULL;
var uLocal_2843 = 0;
var uLocal_2844 = 0;
var uLocal_2845 = 0;
var uLocal_2846 = 0;
var uLocal_2847 = 0;
vector3 vLocal_2848 = {0f, 0f, 0f};
vector3 vLocal_2851 = {0f, 0f, 0f};
vector3 vLocal_2854 = {0f, 0f, 0f};
float fLocal_2857 = 0f;
vector3 vLocal_2858 = {0f, 0f, 0f};
float fLocal_2861 = 0f;
float fLocal_2862 = 0f;
char cLocal_2863[64] = "";
var uLocal_2871 = 0;
var uLocal_2872 = 0;
var uLocal_2873 = 0;
var uLocal_2874 = 0;
var uLocal_2875 = 0;
var uLocal_2876 = 0;
var uLocal_2877 = 0;
var uLocal_2878 = 0;
struct<6> Local_2879 = {
	0, 0, 0, 0, 0, 0
};
int iLocal_2885 = 0;
var *uLocal_2886 = NULL;
var uLocal_2887 = 0;
var uLocal_2888 = 0;
var *uLocal_2889 = NULL;
var uLocal_2890 = 0;
var uLocal_2891 = 0;
var *uLocal_2892 = NULL;
var uLocal_2893 = 0;
var uLocal_2894 = 0;
int *iLocal_2895 = NULL;
var uLocal_2896 = 0;
var uLocal_2897 = 0;
var *uLocal_2898 = NULL;
var uLocal_2899 = 0;
var uLocal_2900 = 0;
var *uLocal_2901 = NULL;
var uLocal_2902 = 0;
var uLocal_2903 = 0;
var *uLocal_2904 = NULL;
var uLocal_2905 = 0;
var uLocal_2906 = 0;
var *uLocal_2907 = NULL;
var uLocal_2908 = 0;
var uLocal_2909 = 0;
var *uLocal_2910 = NULL;
var uLocal_2911 = 0;
var uLocal_2912 = 0;
var uLocal_2913 = 0;
var uLocal_2914 = 0;
var uLocal_2915 = 0;
var *uLocal_2916 = NULL;
var uLocal_2917 = 0;
var uLocal_2918 = 0;
var *uLocal_2919 = NULL;
var uLocal_2920 = 0;
var uLocal_2921 = 0;
var *uLocal_2922 = NULL;
var uLocal_2923 = 0;
var uLocal_2924 = 0;
var *uLocal_2925 = NULL;
var uLocal_2926 = 0;
var uLocal_2927 = 0;
var *uLocal_2928 = NULL;
var uLocal_2929 = 0;
var uLocal_2930 = 0;
var *uLocal_2931 = NULL;
var uLocal_2932 = 0;
var uLocal_2933 = 0;
int iLocal_2934 = 0;
int iLocal_2935 = 0;
int iLocal_2936 = 0;
int iLocal_2937 = 0;
int iLocal_2938 = 0;
int iLocal_2939 = 0;
char *sLocal_2940 = NULL;
int iLocal_2941 = 0;
int *iLocal_2942 = NULL;
int *iLocal_2943 = NULL;
int iLocal_2944 = 0;
int iLocal_2945 = 0;
int iLocal_2946 = 0;
int iLocal_2947 = 0;
int *iLocal_2948 = NULL;
int *iLocal_2949 = NULL;
int *iLocal_2950 = NULL;
var uLocal_2951 = 0;
var uLocal_2952 = 0;
var *uLocal_2953 = NULL;
var uLocal_2954 = 0;
var uLocal_2955 = 0;
var uLocal_2956 = 0;
var uLocal_2957 = 0;
var uLocal_2958 = 0;
var uLocal_2959 = 0;
var uLocal_2960 = 0;
var uLocal_2961 = 0;
struct<8> Local_2962[2];
var uLocal_2979 = 0;
var uLocal_2980 = 0;
var uLocal_2981 = 0;
struct<61> Local_2982 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var *uLocal_3043 = NULL;
var uLocal_3044 = 0;
var uLocal_3045 = 0;
var uLocal_3046 = 0;
var uLocal_3047 = 0;
var uLocal_3048 = 0;
var uLocal_3049 = 0;
var uLocal_3050 = 0;
var uLocal_3051 = 0;
var uLocal_3052 = 0;
var uLocal_3053 = 0;
var uLocal_3054 = 0;
var uLocal_3055 = 0;
var uLocal_3056 = 0;
var uLocal_3057 = 0;
var uLocal_3058 = 0;
var uLocal_3059 = 0;
var uLocal_3060 = 0;
var uLocal_3061 = 0;
var uLocal_3062 = 0;
var uLocal_3063 = 0;
var uLocal_3064 = 0;
var uLocal_3065 = 0;
var uLocal_3066 = 0;
var uLocal_3067 = 0;
var uLocal_3068 = 0;
var uLocal_3069 = 0;
var uLocal_3070 = 0;
var uLocal_3071 = 0;
var uLocal_3072 = 0;
var uLocal_3073 = 0;
var uLocal_3074 = 0;
var uLocal_3075 = 0;
var uLocal_3076 = 0;
var uLocal_3077 = 0;
var uLocal_3078 = 0;
var uLocal_3079 = 0;
var uLocal_3080 = 0;
var uLocal_3081 = 0;
var uLocal_3082 = 0;
var uLocal_3083 = 0;
var uLocal_3084 = 0;
var uLocal_3085 = 0;
var uLocal_3086 = 0;
var uLocal_3087 = 0;
var uLocal_3088 = 0;
var uLocal_3089 = 0;
var uLocal_3090 = 0;
var uLocal_3091 = 0;
var uLocal_3092 = 0;
var uLocal_3093 = 0;
var uLocal_3094 = 0;
var uLocal_3095 = 0;
var uLocal_3096 = 0;
var uLocal_3097 = 0;
var uLocal_3098 = 0;
var uLocal_3099 = 0;
var uLocal_3100 = 0;
var uLocal_3101 = 0;
var uLocal_3102 = 0;
var uLocal_3103 = 0;
var uLocal_3104 = 0;
var uLocal_3105 = 0;
var uLocal_3106 = 0;
var uLocal_3107 = 0;
var uLocal_3108 = 0;
var uLocal_3109 = 0;
var uLocal_3110 = 0;
var uLocal_3111 = 0;
var uLocal_3112 = 0;
var uLocal_3113 = 0;
var uLocal_3114 = 0;
var uLocal_3115 = 0;
var uLocal_3116 = 0;
var uLocal_3117 = 0;
var uLocal_3118 = 0;
var uLocal_3119 = 0;
var uLocal_3120 = 0;
var uLocal_3121 = 0;
var uLocal_3122 = 0;
var uLocal_3123 = 0;
var uLocal_3124 = 0;
var uLocal_3125 = 0;
var uLocal_3126 = 0;
var uLocal_3127 = 0;
var uLocal_3128 = 0;
var uLocal_3129 = 0;
var uLocal_3130 = 0;
var uLocal_3131 = 0;
var uLocal_3132 = 0;
var uLocal_3133 = 0;
var uLocal_3134 = 0;
var uLocal_3135 = 0;
var uLocal_3136 = 0;
var uLocal_3137 = 0;
var uLocal_3138 = 0;
var uLocal_3139 = 0;
var uLocal_3140 = 0;
var uLocal_3141 = 0;
var uLocal_3142 = 0;
var uLocal_3143 = 0;
var uLocal_3144 = 0;
var uLocal_3145 = 0;
var uLocal_3146 = 0;
var uLocal_3147 = 0;
var uLocal_3148 = 0;
var uLocal_3149 = 0;
var uLocal_3150 = 0;
var uLocal_3151 = 0;
var uLocal_3152 = 0;
var uLocal_3153 = 0;
var uLocal_3154 = 0;
var uLocal_3155 = 0;
var uLocal_3156 = 0;
var uLocal_3157 = 0;
var uLocal_3158 = 0;
var uLocal_3159 = 0;
var uLocal_3160 = 0;
var uLocal_3161 = 0;
var uLocal_3162 = 0;
var uLocal_3163 = 0;
var uLocal_3164 = 0;
var uLocal_3165 = 0;
var uLocal_3166 = 0;
var uLocal_3167 = 0;
var uLocal_3168 = 0;
var uLocal_3169 = 0;
var uLocal_3170 = 0;
var uLocal_3171 = 0;
var uLocal_3172 = 0;
var uLocal_3173 = 0;
var uLocal_3174 = 0;
var uLocal_3175 = 0;
var uLocal_3176 = 0;
var uLocal_3177 = 0;
var uLocal_3178 = 0;
var uLocal_3179 = 0;
var uLocal_3180 = 0;
var uLocal_3181 = 0;
var uLocal_3182 = 0;
var uLocal_3183 = 0;
var uLocal_3184 = 0;
var uLocal_3185 = 0;
var uLocal_3186 = 0;
var uLocal_3187 = 0;
var uLocal_3188 = 0;
var uLocal_3189 = 0;
var uLocal_3190 = 0;
var uLocal_3191 = 0;
var uLocal_3192 = 0;
var uLocal_3193 = 0;
var uLocal_3194 = 0;
var uLocal_3195 = 0;
var uLocal_3196 = 0;
var uLocal_3197 = 0;
var uLocal_3198 = 0;
var uLocal_3199 = 0;
var uLocal_3200 = 0;
var uLocal_3201 = 0;
var uLocal_3202 = 0;
var uLocal_3203 = 0;
var uLocal_3204 = 0;
var uLocal_3205 = 0;
var uLocal_3206 = 0;
var uLocal_3207 = 0;
var uLocal_3208 = 0;
var uLocal_3209 = 0;
var uLocal_3210 = 0;
var uLocal_3211 = 0;
var uLocal_3212 = 0;
var uLocal_3213 = 0;
var uLocal_3214 = 0;
var uLocal_3215 = 0;
var uLocal_3216 = 0;
var uLocal_3217 = 0;
var uLocal_3218 = 0;
var uLocal_3219 = 0;
var uLocal_3220 = 0;
var uLocal_3221 = 0;
var uLocal_3222 = 0;
var uLocal_3223 = 0;
var uLocal_3224 = 0;
var uLocal_3225 = 0;
var uLocal_3226 = 0;
var uLocal_3227 = 0;
var uLocal_3228 = 0;
var uLocal_3229 = 0;
var uLocal_3230 = 0;
var uLocal_3231 = 0;
var uLocal_3232 = 0;
var uLocal_3233 = 0;
var uLocal_3234 = 0;
var uLocal_3235 = 0;
var uLocal_3236 = 0;
var uLocal_3237 = 0;
var uLocal_3238 = 0;
var uLocal_3239 = 0;
var uLocal_3240 = 0;
var uLocal_3241 = 0;
var uLocal_3242 = 0;
var uLocal_3243 = 0;
var uLocal_3244 = 0;
var uLocal_3245 = 0;
var uLocal_3246 = 0;
var uLocal_3247 = 0;
var uLocal_3248 = 0;
var uLocal_3249 = 0;
var uLocal_3250 = 0;
var uLocal_3251 = 0;
var uLocal_3252 = 0;
var uLocal_3253 = 0;
var uLocal_3254 = 0;
var uLocal_3255 = 0;
var uLocal_3256 = 0;
var uLocal_3257 = 0;
var uLocal_3258 = 0;
var uLocal_3259 = 0;
var uLocal_3260 = 0;
var uLocal_3261 = 0;
var uLocal_3262 = 0;
var uLocal_3263 = 0;
var uLocal_3264 = 0;
var uLocal_3265 = 0;
var uLocal_3266 = 0;
var uLocal_3267 = 0;
var uLocal_3268 = 0;
var uLocal_3269 = 0;
var uLocal_3270 = 0;
var uLocal_3271 = 0;
var uLocal_3272 = 0;
var uLocal_3273 = 0;
var uLocal_3274 = 0;
var uLocal_3275 = 0;
var uLocal_3276 = 0;
var uLocal_3277 = 0;
var uLocal_3278 = 0;
var uLocal_3279 = 0;
var uLocal_3280 = 0;
var uLocal_3281 = 0;
var uLocal_3282 = 0;
var uLocal_3283 = 0;
var uLocal_3284 = 0;
var uLocal_3285 = 0;
var uLocal_3286 = 0;
var uLocal_3287 = 0;
var uLocal_3288 = 0;
var uLocal_3289 = 0;
var uLocal_3290 = 0;
var uLocal_3291 = 0;
var uLocal_3292 = 0;
var uLocal_3293 = 0;
var uLocal_3294 = 0;
var uLocal_3295 = 0;
var uLocal_3296 = 0;
var uLocal_3297 = 0;
var uLocal_3298 = 0;
var uLocal_3299 = 0;
var uLocal_3300 = 0;
var uLocal_3301 = 0;
var uLocal_3302 = 0;
var uLocal_3303 = 0;
var uLocal_3304 = 0;
var uLocal_3305 = 0;
var uLocal_3306 = 0;
var uLocal_3307 = 0;
var uLocal_3308 = 0;
var uLocal_3309 = 0;
var uLocal_3310 = 0;
var uLocal_3311 = 0;
var uLocal_3312 = 0;
var uLocal_3313 = 0;
var uLocal_3314 = 0;
var uLocal_3315 = 0;
var uLocal_3316 = 1;
int iLocal_3317 = 0;
int iLocal_3318 = 0;
int iLocal_3319 = 0;
char *sLocal_3320 = NULL;
struct<8> Local_3321 = {
	0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_3329 = 0;
int *iLocal_3330 = NULL;
var uLocal_3331 = 0;
vector3 vLocal_3332 = {0f, 0f, 0f};
float fLocal_3335 = 0f;
vector3 vLocal_3336 = {0f, 0f, 0f};
float fLocal_3339 = 0f;
int iLocal_3340 = 0;
int iLocal_3341 = 0;
int iLocal_3342 = 0;
int iLocal_3343 = 0;
int iLocal_3344 = 0;
vector3 vLocal_3345 = {0f, 0f, 0f};
float fLocal_3348 = 0f;
struct<61> ScriptParam_0 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	vLocal_136 = {500f, 500f, 500f};
	fLocal_471 = 0f;
	fLocal_472 = 0f;
	fLocal_473 = 0f;
	fLocal_474 = 0.8f;
	fLocal_475 = 1.5f;
	fLocal_476 = 0.5f;
	vLocal_480 = {401.55f, -1631.309f, 29.3f};
	iLocal_483 = 1;
	iLocal_484 = 1;
	iLocal_692 = joaat("towtruck");
	vLocal_2574 = {-6.80809f, -1465.873f, 29.45427f};
	fLocal_2577 = 275.5635f;
	iLocal_2639 = -1;
	iLocal_2640 = -1;
	iLocal_2641 = -1;
	iLocal_2642 = -1;
	fLocal_2643 = 0f;
	sLocal_2652 = "";
	cLocal_2653 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2690 = 1;
	iLocal_2691 = 1;
	iLocal_2692 = 1;
	iLocal_2698 = 1;
	iLocal_2820 = -1;
	vLocal_2848 = {408.8376f, -1638.952f, 28.2928f};
	vLocal_2854 = {405.5971f, -1635.691f, 28.2928f};
	fLocal_2857 = 233.0139f;
	fLocal_2862 = 5f;
	iLocal_2941 = 1;
	sLocal_3320 = "DEFAULT";
	vLocal_3332 = {401.637f, -1633.3f, 28.2928f};
	fLocal_3335 = 231.5304f;
	vLocal_3336 = {-215.5832f, -1392.783f, 30.2617f};
	fLocal_3339 = 108.4129f;
	vLocal_3345 = {-10.7897f, -1471.204f, 29.552f};
	fLocal_3348 = 276.1668f;
	Local_2982 = {ScriptParam_0};
	func_631(&Local_2982);
	func_630();
	Local_3321.f_3 = 1;
	Local_3321.f_2 = 1;
	Local_3321.f_6 = 1;
	Local_3321.f_7 = 1;
	iLocal_2647 = 51;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(83)) {
		func_629("Force cleanup [TERMINATING]");
		func_611(1);
		func_603(&uLocal_3043, 1);
		func_586();
	}
	func_585(60);
	if (!func_584(0)) {
		Global_101700.f_18932.f_3 = 2;
	}
	iLocal_2937 =
		ped::add_scenario_blocking_area(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f),
										Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	iLocal_2938 =
		ped::add_scenario_blocking_area(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f),
										Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	iLocal_2939 =
		ped::add_scenario_blocking_area(Vector(53.5258f, -173.7879f, 535.2601f) - Vector(50f, 50f, 50f),
										Vector(53.5258f, -173.7879f, 535.2601f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	pathfind::set_roads_in_angled_area(133.4928f, -2596.173f, 0.000145f, 323.7669f, -2513.723f, 11.68388f, 70f, 0, 0,
									   1);
	iLocal_3343 = vehicle::_0x2CE544C68FB812A0(344.4851f, -2506.602f, 4.943f, 20f, 3f, 0);
	iLocal_3344 = vehicle::_0x2CE544C68FB812A0(220.8717f, -2544.95f, 5.2096f, 20f, 0f, 0);
	func_583();
	while (true) {
		system::wait(0);
		func_580(&uLocal_3043);
		unk1::_0x208784099002BC30("RC_TON3", 0);
		func_564(Local_2982.f_9, 0, 0, 0, 0, 0);
		player::is_player_playing(player::player_id());
		if (func_563()) {
			iLocal_3317 = 4;
		}
		func_558(&Local_2779, iLocal_511, &vLocal_2659, &iLocal_2767, &iLocal_2769, &iLocal_2934, iLocal_2941, 0);
		if (!iLocal_3340) {
			if (func_557()) {
				iLocal_3342 = func_556();
				if (!Global_86001) {
					if (iLocal_3342 == 0) {
						func_555(vLocal_3345, fLocal_3348, 1, 0);
					}
					else if (iLocal_3342 == 1) {
						func_555(404.1494f, -1630.793f, 28.2928f, 231.5304f, 1, 0);
					}
					else if (iLocal_3342 == 2) {
						func_555(vLocal_3336, fLocal_3339, 1, 0);
					}
				}
				else if (iLocal_3342 == 0) {
					func_555(404.1494f, -1630.793f, 28.2928f, 231.5304f, 1, 0);
				}
				else if (iLocal_3342 == 1) {
					func_555(vLocal_3336, fLocal_3339, 1, 0);
				}
				if (func_554(Global_101700.f_18932.f_1, 4194304)) {
					if (Global_101700.f_18932.f_9 == -1) {
						iLocal_2647 = 51;
					}
					else {
						iLocal_2647 = Global_101700.f_18932.f_9;
					}
				}
				iLocal_3340 = 1;
			}
			else {
				if (func_553(217.386f, -2545.061f, 5.1932f, 1) < 150f) {
					iLocal_2647 = 28;
					Global_101700.f_18932.f_9 = iLocal_2647;
					func_551(&Global_101700.f_18932.f_1, 4194304);
				}
				iLocal_3340 = 1;
			}
		}
		uLocal_117 = uLocal_117;
		uLocal_2746 = uLocal_2746;
		uLocal_2747 = uLocal_2747;
		switch (iLocal_3317) {
		case 0: func_516(); break;

		case 2: func_513(); break;

		case 3:
			func_512();
			if (func_204(&Local_3321, &uLocal_3043)) {
				func_5();
			}
			break;

		case 4: func_1(); break;

		case 5: func_5(); break;
		}
	}
}

// Position - 0x54E
void func_1() {
	switch (iLocal_3319) {
	case 0:
		audio::stop_scripted_conversation(0);
		if (gameplay::are_strings_equal(sLocal_3320, "DEFAULT")) {
			func_611(1);
		}
		else {
			func_3(sLocal_3320, 1);
		}
		iLocal_3319 = 1;
		break;

	case 1:
		if (func_2()) {
			func_586();
		}
		break;
	}
}

// Position - 0x5A2
bool func_2() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x5CF
void func_3(char *sParam0, int iParam1) {
	func_4(sParam0);
	func_611(iParam1);
}

// Position - 0x5E3
void func_4(char *sParam0) {
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

// Position - 0x621
void func_5() {
	func_6(210, 1);
	func_586();
}

// Position - 0x634
void func_6(int iParam0, int iParam1) {
	int iVar0;
	char *sVar1;

	iVar0 = func_202();
	if (iVar0 == -1) {
		return;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_5) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_6) {
		return;
	}
	func_173(iVar0, 0);
	gameplay::set_bit(&Global_69950, 1);
	if (Global_100787[iVar0 /*10*/].f_9 == -1) {
	}
	else {
		func_172(&Global_100787[iVar0 /*10*/].f_9);
	}
	if (iParam1) {
		if (player::is_player_playing(player::player_id())) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			player::start_firing_amnesty(5000);
		}
	}
	func_160(iVar0, 1, 0, 0);
	func_159(0, 0);
	MemCopy(&sVar1, {func_157(iVar0)}, 4);
	func_154(&sVar1, func_155());
	func_33();
	if (gameplay::is_bit_set(Global_101700.f_8975.f_25, 3)) {
		func_32();
	}
	func_14();
	if (iParam0 == 210 || iParam0 == 211) {
		func_8(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111) {
		func_8(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322) {
		func_8(iParam0, 0, 0);
	}
	func_7();
}

// Position - 0x76B
int func_7() {
	if (func_584(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x7B6
void func_8(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_12(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_9();
	}
}

// Position - 0x89E
void func_9() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_11(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_10() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_7();
				}
			}
		}
	}
}

// Position - 0xD5F
int func_10() { return Global_25190; }

// Position - 0xD6A
int func_11(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0xDBB
int func_12(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x1149
var func_13() { return Global_1312735; }

// Position - 0x1155
void func_14() {
	func_31();
	func_23();
	func_19();
	func_18();
	func_17();
	func_16();
	Global_91528 = 0;
	Global_85999 = -1;
	gameplay::clear_bit(&Global_91491.f_20, 17);
	Global_91526 = 0;
	gameplay::_disable_automatic_respawn(0);
	gameplay::ignore_next_restart(0);
	gameplay::set_fade_in_after_death_arrest(1);
	gameplay::set_fade_out_after_arrest(1);
	gameplay::set_fade_out_after_death(1);
	func_15(0);
}

// Position - 0x11AE
void func_15(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x11D7
void func_16() {
	Global_69942 = {0f, 0f, 0f};
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

// Position - 0x11F5
void func_17() {
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

// Position - 0x120D
void func_18() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x1232
void func_19() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_22(0);
	func_21();
	func_20();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x1281
void func_20() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x12A1
void func_21() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x12DF
void func_22(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x12F8
void func_23() { func_24(&Global_96040); }

// Position - 0x1308
void func_24(var *uParam0) {
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_30(&uParam0->f_1);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_29(&uParam0->f_25[0 /*295*/][iVar1 /*98*/]);
		func_29(&uParam0->f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12) {
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9) {
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_28(&uParam0->f_2305);
	func_26(&uParam0->f_2311);
	func_25(&uParam0->f_2401);
}

// Position - 0x1850
void func_25(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x186B
void func_26(var *uParam0) {
	func_27(&uParam0->f_12);
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = {0f, 0f, 0f};
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

// Position - 0x189A
void func_27(var *uParam0) {
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

// Position - 0x1949
void func_28(var *uParam0) {
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

// Position - 0x1967
void func_29(var *uParam0) {
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11) {
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&uParam0->f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48) {
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

// Position - 0x1A46
void func_30(int *iParam0) { *iParam0 = -15; }

// Position - 0x1A54
void func_31() {
	StringCopy(&Global_93627, "", 32);
	func_24(&Global_93635);
}

// Position - 0x1A6C
void func_32() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	gameplay::set_bit(&G_SleepModeOnOn25, 25);
	gameplay::set_bit(&G_SleepModeOffOn11, 11);
}

// Position - 0x1AE9
void func_33() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 8) {
		iVar1 = Global_89193[iVar0];
		if (entity::does_entity_exist(iVar1) && !ped::is_ped_injured(iVar1)) {
			iVar3 = func_151(iVar1);
			iVar2 = -99;
			switch (iVar3) {
			case 0: iVar2 = 112; break;

			case 1: iVar2 = 158; break;

			case 2: iVar2 = 154; break;
			}
			if (iVar2 != -99) {
				if (func_150(iVar1, 14, iVar2)) {
					func_34(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2) {
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x1BAA
int func_34(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_85(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (!func_150(iParam0, iParam1, iParam2)) {
		return 0;
	}
	if (iParam1 == 12) {
		uVar2 = {func_81(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14) {
			if (uVar2[iVar1] != -99) {
				func_34(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13) {
		uVar21 = {func_78(iVar0, iParam2)};
		iVar19 = 0;
		while (iVar19 <= 8) {
			if (!func_34(iParam0, 14, uVar21[iVar19])) {
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14) {
		ped::clear_ped_prop(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else {
		uVar31 = {func_81(iVar0, 0)};
		Global_69523[1 /*14*/] = {func_85(iVar0, iParam1, uVar31[iParam1])};
		if (ped::get_number_of_ped_drawable_variations(iParam0, func_77(iParam1)) > 0 &&
			ped::get_number_of_ped_texture_variations(iParam0, func_77(iParam1), Global_69523[1 /*14*/].f_3) > 0) {
			ped::set_ped_component_variation(iParam0, func_77(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_76(iParam0, iVar0, &iVar48, 0)) {
		func_37(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_35(iParam0, iVar0, &iVar48)) {
		func_37(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

// Position - 0x1D67
bool func_35(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	iVar0 = func_36(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99) {
		if (!func_150(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_63)) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x1DF3
int func_36(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	default: break;
	}
	return 145;
}

// Position - 0x1E2E
int func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var *uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = entity::get_entity_model(iParam0);
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_85(iVar10, iParam1, iParam2)};
		if (!func_75(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_68(iParam1);
	}
	if (iParam1 == 12) {
		if (iParam7 == 1) {
			if (iVar10 == joaat("player_one")) {
				iVar5 = func_66(iParam0, 8);
				if (iVar5 != 9) {
					iVar5 = -99;
				}
			}
			iVar6 = func_66(iParam0, 9);
			if (iVar10 == joaat("player_zero")) {
				if (iVar6 >= 9 && iVar6 <= 14) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one")) {
				if (iVar6 >= 5 && iVar6 <= 10) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two")) {
				if (iVar6 >= 9 && iVar6 <= 14 || iVar6 >= 15 && iVar6 <= 16) {
				}
				else {
					iVar6 = -99;
				}
			}
			iVar7 = func_65(iParam0, 1);
			if (!func_64(iVar10, 14, iVar7, -1)) {
				iVar7 = -99;
			}
			iVar8 = func_65(iParam0, 0);
			if (!func_63(iVar10, 14, iVar8, -1) && !func_62(iVar10, 14, iVar8, -1)) {
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one")) {
				iVar9 = func_65(iParam0, 2);
			}
		}
		ped::clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1) {
			uVar11 = {Global_69566};
		}
		else {
			uVar11 = {func_81(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar11[iVar0] != -99) {
				Global_69523[1 /*14*/] = {func_85(iVar10, iVar0, uVar11[iVar0])};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
					if (iVar0 == 13) {
						uVar28 = 9;
						if (iParam5 == 1) {
							uVar28 = {Global_69583};
						}
						else {
							uVar28 = {func_78(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8) {
							Global_69523[1 /*14*/] = {func_85(iVar10, 14, uVar28[iVar1])};
							func_53(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
									Global_69523[1 /*14*/].f_4);
							func_68(14);
							if (Global_69522 == 1) {
								iVar2 = 0;
								while (iVar2 < 15) {
									iVar3 = func_45(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99) {
										func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12) {
						if (iVar10 == joaat("player_one") && iVar0 == 2 && uVar11[iVar0] == 20) {
							func_44(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1) {
							ped::set_ped_component_variation(iParam0, func_77(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4,
															 ped::get_ped_palette_variation(iParam0, func_77(iVar0)));
						}
						else {
							ped::set_ped_component_variation(iParam0, func_77(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_68(iVar0);
						if (Global_69522 == 1) {
							iVar2 = 0;
							while (iVar2 < 15) {
								iVar3 = func_45(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99) {
									func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_85(iVar10, iVar0, func_43(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					if (iVar0 == 2) {
						if (iVar10 == joaat("player_one")) {
							if (func_76(iParam0, iVar10, &iVar4, 1)) {
								func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else {
						uVar38 = {func_81(iVar10, 0)};
						func_37(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1) {
			Var55 = {func_85(iVar10, 8, iVar5)};
			if (iVar5 != -99) {
				if (func_41(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)) {
					func_37(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_85(iVar10, 9, iVar6)};
			if (iVar6 != -99) {
				if (func_41(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)) {
					func_37(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_85(iVar10, 14, iVar7)};
			if (iVar7 != -99) {
				if (func_41(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)) {
					func_37(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_85(iVar10, 14, iVar8)};
			if (iVar8 != -99) {
				if (func_41(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)) {
					func_37(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_85(iVar10, 14, iVar9)};
			if (iVar9 != -99) {
				if (func_41(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)) {
					func_37(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13) {
		uVar69 = {func_78(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_85(iVar10, 14, uVar69[iVar1])};
			func_53(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_68(14);
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_45(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99) {
						func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_53(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_68(iParam1);
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_45(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else {
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_77(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_77(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_77(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_45(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0) {
			func_38(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1) {
		if (func_76(iParam0, iVar10, &iVar4, 0)) {
			func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_35(iParam0, iVar10, &iVar4)) {
			func_37(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x263A
void func_38(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("player_zero")) {
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one")) {
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two")) {
		iVar0 = 4;
	}
	if (func_40(iParam0, 12, iVar0)) {
		if (func_39(iParam0, iParam1, iParam2)) {
			iVar1 = func_36(iParam0);
			if (iParam1 == 3) {
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4) {
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

// Position - 0x26C4
bool func_39(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 4) {
			if (iParam2 >= 47 && iParam2 <= 54) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 77 && iParam2 <= 84) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 4) {
			if (iParam2 >= 14 && iParam2 <= 21) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 41 && iParam2 <= 56) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 4) {
			if (iParam2 >= 18 && iParam2 <= 29) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 54 && iParam2 <= 69) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x27A2
bool func_40(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_85(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x27CC
bool func_41(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_78(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_42(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_64(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_63(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_62(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_64(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_63(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
						}
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_62(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_64(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_63(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_62(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x2DD0
bool func_42(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2E69
int func_43(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_150(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_150(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_65(iParam0, iParam2);
			}
		}
		else {
			return func_66(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x2F0A
int func_44(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7 || iParam2 == 23) {
				*iParam3 = 1;
			}
			break;

		case 9:
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14) {
				*iParam3 = 1;
			}
			break;

		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 1;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46) {
				*iParam3 = 1;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 2:
			if (iParam2 == 20) {
				*iParam3 = 20;
			}
			break;

		case 8:
			if (iParam2 == 4) {
				*iParam3 = 19;
			}
			break;

		case 9:
			if (iParam2 >= 5 && iParam2 <= 10) {
				*iParam3 = 19;
			}
			break;

		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 19;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 19;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7) {
				*iParam3 = 2;
			}
			break;

		case 9:
			if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 2;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 2;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62) {
				*iParam3 = 2;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_36(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x3211
var func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;
	if (iParam4 == 0) {
		switch (iParam2) {
		case 2:
			iVar1 = func_66(iParam0, 1);
			iVar0 = func_52(iParam1, iParam3, iVar1);
			break;

		case 1:
			iVar2 = func_66(iParam0, 2);
			iVar0 = func_52(iParam1, iVar2, iParam3);
			break;
		}
	}
	else if (iParam4 == 2) {
		func_44(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1) {
		func_51(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6) {
		if (iParam2 == 4) {
			if (func_50(iParam1, iParam3, &iVar0)) {
			}
		}
	}
	else {
		switch (iParam1) {
		case joaat("player_zero"):
			switch (iParam4) {
			case 3:
				switch (iParam2) {
				case 10:
					switch (iParam3) {
					case 36: iVar0 = 17; break;

					case 37: iVar0 = 17; break;

					case 38: iVar0 = 18; break;

					case 39: iVar0 = 18; break;

					case 40: iVar0 = 19; break;

					case 41: iVar0 = 19; break;

					case 42: iVar0 = 20; break;

					case 43: iVar0 = 20; break;
					}
					break;

				case 11:
					if (iParam3 >= 2 && iParam3 <= 7) {
						if (!func_49(iParam0, 3, 44, 59)) {
							iVar0 = 44;
						}
					}
					else if (iParam3 >= 8 && iParam3 <= 17 || iParam3 >= 18 && iParam3 <= 27 ||
							 iParam3 >= 28 && iParam3 <= 43) {
						if (!func_49(iParam0, 3, 135, 150)) {
							iVar0 = func_48(iParam1, 3, 135, 150);
						}
					}
					break;
				}
				break;

			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 63: iVar0 = 4; break;

					case 61: iVar0 = 3; break;

					case 16: iVar0 = 1; break;

					case 114: iVar0 = 15; break;

					case 115: iVar0 = 17; break;

					case 116: iVar0 = 16; break;

					case 117: iVar0 = 18; break;

					case 118: iVar0 = 20; break;

					case 119: iVar0 = 19; break;

					case 125: iVar0 = 21; break;

					case 120: iVar0 = 22; break;

					case 124: iVar0 = 23; break;

					case 126: iVar0 = 24; break;

					case 121: iVar0 = 25; break;

					case 127: iVar0 = 26; break;

					case 128: iVar0 = 27; break;

					case 85: iVar0 = 6; break;

					case 77: iVar0 = 7; break;

					case 78: iVar0 = 8; break;

					case 79: iVar0 = 9; break;

					case 80: iVar0 = 10; break;

					case 81: iVar0 = 11; break;

					case 82: iVar0 = 12; break;

					case 83: iVar0 = 13; break;

					case 84: iVar0 = 14; break;

					case 21: iVar0 = 31; break;

					case 22: iVar0 = 30; break;

					case 23: iVar0 = 29; break;

					case 24: iVar0 = 28; break;

					case 25: iVar0 = 33; break;

					case 26: iVar0 = 35; break;

					case 27: iVar0 = 34; break;

					case 28: iVar0 = 32; break;

					default:
						if (iParam3 >= 17 && iParam3 <= 20) {
						}
						else {
							iVar0 = 0;
						}
						break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 44 && iParam3 <= 59 || iParam3 >= 135 && iParam3 <= 150) {
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 10) {
					if (iParam3 >= 36 && iParam3 <= 43) {
						iVar0 = 0;
					}
				}
				break;
			}
			break;

		case joaat("player_one"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 17: iVar0 = 2; break;

					case 90: iVar0 = 1; break;

					case 268: iVar0 = 3; break;

					case 269: iVar0 = 5; break;

					case 270: iVar0 = 4; break;

					case 271: iVar0 = 6; break;

					case 272: iVar0 = 8; break;

					case 273: iVar0 = 7; break;

					case 279: iVar0 = 9; break;

					case 274: iVar0 = 10; break;

					case 278: iVar0 = 11; break;

					case 280: iVar0 = 12; break;

					case 275: iVar0 = 13; break;

					case 281: iVar0 = 14; break;

					case 282: iVar0 = 15; break;

					case 107: iVar0 = 16; break;

					case 108: iVar0 = 17; break;

					case 109: iVar0 = 18; break;

					case 110: iVar0 = 19; break;

					case 111: iVar0 = 20; break;

					case 112: iVar0 = 21; break;

					case 113: iVar0 = 22; break;

					case 114: iVar0 = 23; break;

					case 115: iVar0 = 24; break;

					case 116: iVar0 = 25; break;

					case 117: iVar0 = 52; break;

					case 118: iVar0 = 27; break;

					case 119: iVar0 = 28; break;

					case 120: iVar0 = 29; break;

					case 121: iVar0 = 30; break;

					case 122: iVar0 = 31; break;

					case 296: iVar0 = 32; break;

					case 297: iVar0 = 33; break;

					case 298: iVar0 = 34; break;

					case 299: iVar0 = 35; break;

					case 300: iVar0 = 36; break;

					case 301: iVar0 = 37; break;

					case 302: iVar0 = 38; break;

					case 309: iVar0 = 39; break;

					case 310: iVar0 = 40; break;

					case 311: iVar0 = 41; break;

					case 312: iVar0 = 42; break;

					case 313: iVar0 = 43; break;

					case 314: iVar0 = 44; break;

					case 315: iVar0 = 45; break;

					case 316: iVar0 = 46; break;

					case 317: iVar0 = 51; break;

					default: iVar0 = 0; break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 3:
				switch (iParam2) {
				case 11:
					if (iParam3 >= 47 && iParam3 <= 62) {
						if (!func_49(iParam0, 3, 209, 222)) {
							iVar0 = func_48(iParam1, 3, 209, 222);
						}
					}
					else if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8) {
						if (!func_49(iParam0, 3, 243, 258)) {
							if (iParam3 == 1 || iParam3 == 5) {
								iVar0 = func_48(iParam1, 3, 243, 246);
							}
							else if (iParam3 == 2 || iParam3 == 6) {
								iVar0 = func_48(iParam1, 3, 247, 250);
							}
							else if (iParam3 == 3 || iParam3 == 7) {
								iVar0 = func_48(iParam1, 3, 251, 254);
							}
							else if (iParam3 == 4 || iParam3 == 8) {
								iVar0 = func_48(iParam1, 3, 255, 258);
							}
						}
					}
					else if (iParam3 == 41 || iParam3 == 42) {
						if (!func_49(iParam0, 3, 176, 191) && !func_49(iParam0, 3, 227, 242)) {
							iVar0 = func_48(iParam1, 3, 176, 191);
						}
					}
					break;
				}
				break;

			case 8:
				if (iParam2 == 11 || iParam2 == 3) {
					if (iParam2 == 11) {
						iVar5 = iParam3;
						iVar4 = func_66(iParam0, 3);
					}
					else if (iParam2 == 3) {
						iVar4 = iParam3;
						iVar5 = func_66(iParam0, 11);
						iVar5 = func_47(iParam1, iVar4, iVar5, 0);
					}
					iVar3 = func_66(iParam0, 8);
					if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43) {
						if (!func_46(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)) {
							if (iVar6 != -99) {
								iVar0 = iVar6;
							}
						}
					}
					else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74) {
						iVar0 = 26;
					}
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 209 && iParam3 <= 222) {
					}
					else if (iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 227 && iParam3 <= 242 ||
							 iParam3 >= 243 && iParam3 <= 258) {
						iVar7 = func_66(iParam0, 8);
						iVar8 = func_66(iParam0, 11);
						if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74) {
							iVar0 = func_47(iParam1, iParam3, iVar8, 0);
						}
						else {
							iVar0 = func_47(iParam1, iParam3, iVar8, 1);
						}
					}
					else if (iParam3 >= 41 && iParam3 <= 56) {
						iVar0 = 45;
					}
					else if (iParam3 >= 223 && iParam3 <= 226) {
						iVar0 = 44;
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 8) {
					if (iParam3 >= 27 && iParam3 <= 42 || iParam3 >= 43 && iParam3 <= 58 ||
						iParam3 >= 59 && iParam3 <= 74) {
						iVar9 = func_66(iParam0, 11);
						iVar0 = func_47(iParam1, -99, iVar9, 0);
					}
				}
				break;
			}
			break;

		case joaat("player_two"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 50: iVar0 = 3; break;

					case 81: iVar0 = 5; break;

					case 82: iVar0 = 6; break;

					case 83: iVar0 = 7; break;

					case 84: iVar0 = 10; break;

					case 85: iVar0 = 9; break;

					case 86: iVar0 = 8; break;

					case 92: iVar0 = 22; break;

					case 87: iVar0 = 23; break;

					case 91: iVar0 = 24; break;

					case 93: iVar0 = 25; break;

					case 88: iVar0 = 26; break;

					case 94: iVar0 = 27; break;

					case 120: iVar0 = 11; break;

					case 121: iVar0 = 13; break;

					case 122: iVar0 = 14; break;

					case 124: iVar0 = 12; break;

					case 126: iVar0 = 18; break;

					case 128: iVar0 = 17; break;

					case 130: iVar0 = 19; break;

					case 131: iVar0 = 16; break;

					case 134: iVar0 = 15; break;

					case 135: iVar0 = 20; break;

					default: iVar0 = 0; break;
					}
					break;
				}
				break;
			}
			break;
		}
	}
	return iVar0;
}

// Position - 0x3DC4
int func_46(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;

	switch (iParam0) {
	case joaat("player_zero"): break;

	case joaat("player_one"):
		*iParam4 = 0;
		if (iParam1 >= 27 && iParam1 <= 42) {
			if (iParam2 != -99) {
				if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
				}
				else {
					if (iParam2 >= 42 && iParam2 <= 43) {
						if (iParam3 >= 176 && iParam3 <= 191) {
							iVar0 = iParam1 - 27;
							*iParam4 = 59 + iVar0;
						}
						else if (iParam3 >= 227 && iParam3 <= 242) {
							iVar0 = iParam1 - 27;
							*iParam4 = 43 + iVar0;
						}
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 ||
					iParam3 >= 243 && iParam3 <= 258) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 58) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 43;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242) {
				}
				else {
					if (iParam3 >= 176 && iParam3 <= 191) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 43;
							*iParam4 = 59 + iVar0;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 59 && iParam1 <= 74) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 176 && iParam3 <= 191) {
				}
				else {
					if (iParam3 >= 227 && iParam3 <= 242) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 59;
							*iParam4 = 43 + iVar0;
						}
					}
					else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 12) {
			if (iParam3 != 241) {
				return 0;
			}
		}
		break;
	}
	return 1;
}

// Position - 0x40A9
int func_47(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246) {
		if (iParam3 == 1) {
			return 1;
		}
		else {
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250) {
		if (iParam3 == 1) {
			return 2;
		}
		else {
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254) {
		if (iParam3 == 1) {
			return 3;
		}
		else {
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242) {
		if (iParam2 >= 9 && iParam2 <= 24) {
			if (iParam3 == 1) {
				return iParam2;
			}
			else {
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40) {
			if (iParam3 == 1) {
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else {
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42) {
			if (iParam3 == 1) {
				return 41;
			}
			else {
				return 42;
			}
		}
		else {
			if (iParam3 == 1) {
				iParam2 = func_48(iParam0, 11, 9, 24);
			}
			else {
				iParam2 = func_48(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99) {
				if (iParam3 == 1) {
					return 41;
				}
				else {
					return 42;
				}
			}
			else {
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42) {
		if (iParam3 == 1) {
			return 41;
		}
		else {
			return 42;
		}
	}
	return -99;
}

// Position - 0x4370
int func_48(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1) {
		iVar1 = iVar0;
		if (func_40(iParam0, iParam1, iVar1)) {
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

// Position - 0x43A7
int func_49(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_66(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3) {
		return 1;
	}
	return 0;
}

// Position - 0x43D0
bool func_50(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 ||
			iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 ||
			iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 ||
			iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 ||
			iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112) {
			*iParam2 = 6;
			return true;
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 ||
			iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77) {
			*iParam2 = 17;
			return true;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 ||
			iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 ||
			iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 ||
			iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103) {
			*iParam2 = 8;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x469A
int func_51(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 ||
				iParam2 >= 42 && iParam2 <= 44) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 9:
			if (iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 0;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 ||
				iParam2 >= 58 && iParam2 <= 60) {
				*iParam3 = 0;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_36(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x4924
int func_52(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 1) {
			if (iParam2 == 0) {
				return 1;
			}
			else if (iParam2 == 4) {
				return 5;
			}
			else {
				return 3;
			}
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else if (iParam2 == 4) {
			return 4;
		}
		else {
			return 2;
		}
		break;

	case joaat("player_one"):
		if (iParam1 >= 0 && iParam1 <= 15) {
			if (iParam2 == 0) {
				return 0;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 >= 16 && iParam1 <= 17) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 5;
			}
		}
		else if (iParam1 == 18) {
			if (iParam2 == 0) {
				return 6;
			}
			else {
				return 7;
			}
		}
		else if (iParam1 == 19) {
			if (iParam2 == 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else if (iParam2 == 0) {
			return 1;
		}
		else {
			return 4;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 2) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 == 0) {
				return 4;
			}
			else {
				return 6;
			}
		}
		else if (iParam1 == 8) {
			return 5;
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else {
			return 1;
		}
		break;
	}
	return -99;
}

// Position - 0x4A7B
void func_53(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_58(iParam0, iParam2, iParam3, iParam1);
			if (func_54(entity::get_entity_model(iParam0), 14, iVar0,
						dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x4B13
bool func_54(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_55(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_55(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x4BE1
int func_55(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_57(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_56(iParam0, func_77(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_77(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x4D3D
int func_56(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x50E4
int func_57(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x5145
int func_58(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_61(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_60(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_60(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_59(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_61(iParam3);
}

// Position - 0x5241
int func_59(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x537F
int func_60(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_57(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_77(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_56(iParam0, func_77(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x545F
int func_61(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x54E5
bool func_62(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_55(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_55(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_55(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_55(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x5762
bool func_63(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_55(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_55(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5B63
bool func_64(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_55(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x5E56
int func_65(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_61(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_58(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x5E9C
int func_66(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_77(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_67(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x5EFC
int func_67(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_77(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x5F80
void func_68(int iParam0) {
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		func_74(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam0 == 12) {
			func_69(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13) {
		}
		else if (iParam0 == 14) {
			func_69(Global_2621444, 2, 1, 1, -1);
		}
		else {
			func_69(Global_2621444, 2, 1, 1, -1);
		}
	}
}

// Position - 0x6038
void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_73(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_72(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_70(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x6082
void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x60B2
int func_71(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_13();
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

// Position - 0x60E6
int func_72(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_71(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6118
bool func_73(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x7307
bool func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x8226
int func_75(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x8277
bool func_76(int iParam0, int iParam1, int *iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_36(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99) {
		if (!func_150(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) ||
			iParam3 == 1) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

// Position - 0x830D
int func_77(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x83BD
struct<10> func_78(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_80(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_80(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_80(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_80(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_80(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_80(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_80(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_80(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_80(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_80(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_80(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_79(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_80(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_80(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_80(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_80(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_80(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_80(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_80(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_80(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_80(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_80(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_79(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_80(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_80(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_80(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_80(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_80(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_80(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_80(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_80(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_80(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_80(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_79(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_80(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_80(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_80(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_80(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_80(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_80(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_80(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_80(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_80(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_80(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_80(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_80(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_80(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_80(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_80(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_80(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_80(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_80(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_80(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_80(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_80(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_80(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_80(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_80(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_80(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_80(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_79(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_80(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_80(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_80(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_80(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_80(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_80(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_80(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_80(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_80(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_80(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_80(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_80(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_80(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_80(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_80(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_80(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_80(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_80(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_80(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_80(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_80(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_80(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_80(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_80(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_80(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_79(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x8CEC
void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_60(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x8E16
void func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x8E5E
struct<17> func_81(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_84(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_84(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_84(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_84(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_84(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_84(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_84(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_84(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_84(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_84(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_84(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_84(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_84(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_84(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_84(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_84(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_84(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_84(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_84(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_84(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_84(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_84(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_84(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_84(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_84(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_84(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_84(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_84(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_84(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_84(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_84(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_84(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_84(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_84(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_84(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_84(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_84(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_84(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_84(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_84(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_84(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_84(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_84(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_84(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_84(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_84(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_84(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_84(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_84(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_84(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_84(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_84(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_84(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_84(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_82(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_84(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_84(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_84(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_84(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_84(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_84(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_84(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_84(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_84(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_84(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_84(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_84(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_84(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_84(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_84(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_84(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_84(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_84(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_84(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_84(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_84(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_84(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_84(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_84(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_84(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_84(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_84(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_84(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_84(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_84(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_84(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_84(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_84(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_84(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_84(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_84(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_84(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_84(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_84(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_84(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_84(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_84(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_84(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_84(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_84(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_84(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_84(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_82(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_84(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_84(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_84(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_84(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_84(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_84(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_84(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_84(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_84(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_84(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_84(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_84(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_84(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_84(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_84(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_84(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_84(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_84(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_84(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_84(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_84(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_84(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_84(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_84(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_84(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_84(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_84(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_84(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_84(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_84(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_84(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_84(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_84(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_84(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_84(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_84(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_84(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_84(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_84(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_84(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_84(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_84(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_84(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_84(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_84(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_84(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_84(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_84(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_82(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_84(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_84(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_84(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_84(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_84(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_84(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_84(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_84(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_84(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_84(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_84(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_84(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_84(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_84(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_84(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_84(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_84(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_84(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_84(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_84(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_84(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_84(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_84(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_84(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_84(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_84(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_82(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_84(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_84(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_84(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_84(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_84(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_84(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_84(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_84(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_84(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_84(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_84(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_84(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_84(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_84(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_84(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_84(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_84(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_84(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_84(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_84(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_84(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_84(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_84(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_84(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_84(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_84(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_84(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_84(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_82(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xACA6
void func_82(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_83(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_83(vVar16.z)] = func_60(iParam1, vVar16.x, func_83(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_83(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0xAE90
int func_83(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0xAF40
void func_84(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0xAFB1
struct<14> func_85(int iParam0, int iParam1, int iParam2) {
	func_149();
	if (iParam0 == joaat("player_zero")) {
		func_131(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_112(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_86(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0xB003
void func_86(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_111(iParam1); break;

	case 2: func_110(iParam1); break;

	case 3: func_107(iParam1); break;

	case 4: func_106(iParam1); break;

	case 6: func_105(iParam1); break;

	case 5: func_104(iParam1); break;

	case 8: func_103(iParam1); break;

	case 9: func_102(iParam1); break;

	case 10: func_101(iParam1); break;

	case 1: func_100(iParam1); break;

	case 7: func_99(iParam1); break;

	case 11: func_98(iParam1); break;

	case 12: func_97(iParam1); break;

	case 13: func_96(iParam1); break;

	case 14: func_87(iParam1); break;
	}
}

// Position - 0xB0F3
void func_87(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_95(iVar10, iParam0, 155); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC327
void func_88(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_94(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_93(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_92(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_92(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_92(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_92(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_92(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_92(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_74(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_74(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_74(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_93(14)) {
				return;
			}
			iVar0 = func_72(func_91(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_72(func_90(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_89(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_72(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0xC6B7
bool func_89(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0xCABC
int func_90(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0xCEB7
int func_91(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0xD2B2
int func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_73(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_72(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0xD2F4
bool func_93(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xD302
int func_94(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0xD3D6
void func_95(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_88(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_88(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_88(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_77(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_88(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0xD650
void func_96(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 9); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD79C
void func_97(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 48); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDCA8
void func_98(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 1); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDD1B
void func_99(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 1); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDD8D
void func_100(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 6); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDE73
void func_101(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_95(iVar10, iParam0, 33); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE1B4
void func_102(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_95(iVar10, iParam0, 17); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE3BB
void func_103(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 18); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE5DA
void func_104(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 7); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE6E2
void func_105(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_95(iVar10, iParam0, 84); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF073
void func_106(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_95(iVar10, iParam0, 104); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFBCA
void func_107(int iParam0) {
	if (iParam0 < 136) {
		func_109(iParam0);
	}
	else {
		func_108(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_95(3, iParam0, 242);
	}
}

// Position - 0xFBFE
void func_108(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10803
void func_109(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11703
void func_110(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 9); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1182F
void func_111(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_95(iVar10, iParam0, 7); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11925
void func_112(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_130(iParam1); break;

	case 2: func_129(iParam1); break;

	case 3: func_125(iParam1); break;

	case 4: func_124(iParam1); break;

	case 6: func_123(iParam1); break;

	case 5: func_122(iParam1); break;

	case 8: func_121(iParam1); break;

	case 9: func_120(iParam1); break;

	case 10: func_119(iParam1); break;

	case 1: func_118(iParam1); break;

	case 7: func_117(iParam1); break;

	case 11: func_116(iParam1); break;

	case 12: func_115(iParam1); break;

	case 13: func_114(iParam1); break;

	case 14: func_113(iParam1); break;
	}
}

// Position - 0x11A15
void func_113(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_95(iVar10, iParam0, 175); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12EE1
void func_114(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 9); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13027
void func_115(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 47); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13530
void func_116(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_95(iVar10, iParam0, 63); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13B98
void func_117(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 1); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13C0A
void func_118(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 5); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13CD9
void func_119(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 53); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x141D4
void func_120(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 12); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14364
void func_121(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 77); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14B52
void func_122(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 7); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14C5A
void func_123(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_95(iVar10, iParam0, 134); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15B7C
void func_124(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_95(iVar10, iParam0, 117); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16828
void func_125(int iParam0) {
	if (iParam0 < 107) {
		func_128(iParam0);
	}
	else if (iParam0 < 227) {
		func_127(iParam0);
	}
	else {
		func_126(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_95(3, iParam0, 318);
	}
}

// Position - 0x1686D
void func_126(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17311
void func_127(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18101
void func_128(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18D40
void func_129(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 21); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18FB7
void func_130(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_95(iVar10, iParam0, 10); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x190F2
void func_131(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_148(iParam1); break;

	case 2: func_147(iParam1); break;

	case 3: func_144(iParam1); break;

	case 4: func_143(iParam1); break;

	case 6: func_142(iParam1); break;

	case 5: func_141(iParam1); break;

	case 8: func_140(iParam1); break;

	case 9: func_139(iParam1); break;

	case 10: func_138(iParam1); break;

	case 1: func_137(iParam1); break;

	case 7: func_136(iParam1); break;

	case 11: func_135(iParam1); break;

	case 12: func_134(iParam1); break;

	case 13: func_133(iParam1); break;

	case 14: func_132(iParam1); break;
	}
}

// Position - 0x191E2
void func_132(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_95(iVar10, iParam0, 113); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19F3F
void func_133(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 10); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A0AD
void func_134(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 53); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A61D
void func_135(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 45); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AB44
void func_136(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 1); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1ABB6
void func_137(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 5); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AC85
void func_138(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_95(iVar10, iParam0, 48); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B134
void func_139(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 20); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B38E
void func_140(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 24); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B64D
void func_141(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_95(iVar10, iParam0, 14); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B807
void func_142(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_95(iVar10, iParam0, 99); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C34D
void func_143(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 113); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1CF7E
void func_144(int iParam0) {
	if (iParam0 < 60) {
		func_146(iParam0);
	}
	else {
		func_145(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_95(3, iParam0, 181);
	}
}

// Position - 0x1CFB2
void func_145(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DD45
void func_146(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E3C7
void func_147(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_95(iVar10, iParam0, 6); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E4AC
void func_148(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_95(iVar10, iParam0, 7); return;
	}
	func_88(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E5A2
void func_149() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x1E61A
bool func_150(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_85(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_81(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_150(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_78(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_150(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_85(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_150(iParam0, 14, iVar4)) {
											if (!func_41(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_66(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_85(iVar0, iVar2, iVar1)};
						if (!func_41(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_78(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_150(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_77(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_77(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x1E872
int func_151(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_152(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1E8AF
int func_152(int iParam0) {
	if (func_153(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1E8D9
bool func_153(int iParam0) { return iParam0 < 3; }

// Position - 0x1E8E5
void func_154(char *sParam0, int iParam1) {
	stats::stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (gameplay::is_bit_set(iParam1, 0)) {
		stats::stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		stats::stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 2)) {
		stats::stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

// Position - 0x1E93F
int func_155() {
	func_156();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1E985
void func_156() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_152(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_151(player::player_ped_id());
			if (func_153(iVar0) && (!func_93(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_153(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1EA82
struct<2> func_157(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_158(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x1EAB8
struct<2>
func_158(int iParam0) {
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

//Position - 0x1EF03
void func_159(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x1EF4D
void func_160(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 1);
	}
	player::set_player_control(player::player_id(), 1, 0);
	player::set_wanted_level_multiplier(1f);
	player::set_max_wanted_level(5);
	player::set_all_random_peds_flee(player::player_id(), 0);
	player::set_player_weapon_damage_modifier(player::player_id(), 1f);
	player::set_player_weapon_defense_modifier(player::player_id(), 1f);
	ui::display_hud(1);
	ui::display_radar(1);
	cam::set_widescreen_borders(0, 0);
	gameplay::set_time_scale(1f);
	func_171();
	func_170(1, 1);
	func_169();
	func_167();
	func_166(30000);
	if (iParam1 == 1) {
		func_161(iParam0, iParam2, iParam3);
	}
	ui::set_mission_name(0, 0);
}

// Position - 0x1EFEA
void func_161(int iParam0, int iParam1, int iParam2) {
	struct<4> Var0;
	char *sVar32;

	if (iParam0 != -1) {
		func_163(iParam0, &Var0);
		MemCopy(&sVar32, {func_158(iParam0)}, 4);
		stats::playstats_mission_checkpoint(&sVar32, 0, Global_91528, 0);
		func_162(&sVar32, Var0.f_3, Global_91528, iParam1, iParam2);
	}
}

// Position - 0x1F029
void func_162(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x1F06C
void func_163(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_164(uParam1, "Abigail1", func_157(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 1:
		func_164(uParam1, "Abigail2", func_157(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 2:
		func_164(uParam1, "Barry1", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 3:
		func_164(uParam1, "Barry2", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 4:
		func_164(uParam1, "Barry3", func_157(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 5:
		func_164(uParam1, "Barry3A", func_157(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 6:
		func_164(uParam1, "Barry3C", func_157(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 7:
		func_164(uParam1, "Barry4", func_157(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_165(iParam0), 0, 0);
		break;

	case 8:
		func_164(uParam1, "Dreyfuss1", func_157(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 9:
		func_164(uParam1, "Epsilon1", func_157(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 10:
		func_164(uParam1, "Epsilon2", func_157(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 11:
		func_164(uParam1, "Epsilon3", func_157(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 12:
		func_164(uParam1, "Epsilon4", func_157(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 13:
		func_164(uParam1, "Epsilon5", func_157(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 14:
		func_164(uParam1, "Epsilon6", func_157(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 15:
		func_164(uParam1, "Epsilon7", func_157(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 16:
		func_164(uParam1, "Epsilon8", func_157(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 17:
		func_164(uParam1, "Extreme1", func_157(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 18:
		func_164(uParam1, "Extreme2", func_157(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 19:
		func_164(uParam1, "Extreme3", func_157(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 20:
		func_164(uParam1, "Extreme4", func_157(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 21:
		func_164(uParam1, "Fanatic1", func_157(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_165(iParam0), 1, 0);
		break;

	case 22:
		func_164(uParam1, "Fanatic2", func_157(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_165(iParam0), 1, 0);
		break;

	case 23:
		func_164(uParam1, "Fanatic3", func_157(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_165(iParam0), 0, 1);
		break;

	case 24:
		func_164(uParam1, "Hao1", func_157(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_165(iParam0), 0, 1);
		break;

	case 25:
		func_164(uParam1, "Hunting1", func_157(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 26:
		func_164(uParam1, "Hunting2", func_157(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 27:
		func_164(uParam1, "Josh1", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 28:
		func_164(uParam1, "Josh2", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 29:
		func_164(uParam1, "Josh3", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 30:
		func_164(uParam1, "Josh4", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 31:
		func_164(uParam1, "Maude1", func_157(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 32:
		func_164(uParam1, "Minute1", func_157(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 33:
		func_164(uParam1, "Minute2", func_157(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 34:
		func_164(uParam1, "Minute3", func_157(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 35:
		func_164(uParam1, "MrsPhilips1", func_157(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 36:
		func_164(uParam1, "MrsPhilips2", func_157(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_165(iParam0), 0, 0);
		break;

	case 37:
		func_164(uParam1, "Nigel1", func_157(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 38:
		func_164(uParam1, "Nigel1A", func_157(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 39:
		func_164(uParam1, "Nigel1B", func_157(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
		break;

	case 40:
		func_164(uParam1, "Nigel1C", func_157(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
		break;

	case 41:
		func_164(uParam1, "Nigel1D", func_157(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
		break;

	case 42:
		func_164(uParam1, "Nigel2", func_157(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 43:
		func_164(uParam1, "Nigel3", func_157(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
		break;

	case 44:
		func_164(uParam1, "Omega1", func_157(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 45:
		func_164(uParam1, "Omega2", func_157(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 46:
		func_164(uParam1, "Paparazzo1", func_157(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 47:
		func_164(uParam1, "Paparazzo2", func_157(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 48:
		func_164(uParam1, "Paparazzo3", func_157(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 49:
		func_164(uParam1, "Paparazzo3A", func_157(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 50:
		func_164(uParam1, "Paparazzo3B", func_157(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 51:
		func_164(uParam1, "Paparazzo4", func_157(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 52:
		func_164(uParam1, "Rampage1", func_157(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 54:
		func_164(uParam1, "Rampage3", func_157(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 55:
		func_164(uParam1, "Rampage4", func_157(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 56:
		func_164(uParam1, "Rampage5", func_157(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
		break;

	case 53:
		func_164(uParam1, "Rampage2", func_157(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
		break;

	case 57:
		func_164(uParam1, "TheLastOne", func_157(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 58:
		func_164(uParam1, "Tonya1", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 59:
		func_164(uParam1, "Tonya2", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	case 60:
		func_164(uParam1, "Tonya3", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_165(iParam0), 0, 1);
		break;

	case 61:
		func_164(uParam1, "Tonya4", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_165(iParam0), 0, 1);
		break;

	case 62:
		func_164(uParam1, "Tonya5", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x201E4
void func_164(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x20275
int func_165(int iParam0) {
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

// Position - 0x205BB
void func_166(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x205CD
void func_167() {
	if (Global_89136) {
		func_156();
		graphics::_0xBF59707B3E5ED531(func_168(Global_101700.f_2095.f_539.f_3549));
	}
	else {
		graphics::_0xBF59707B3E5ED531("");
	}
}

// Position - 0x205FE
char *func_168(var uParam0) {
	uParam0 = uParam0;
	return "";
}

// Position - 0x2060C
void func_169() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x2064F
void func_170(int iParam0, int iParam1) {
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

// Position - 0x20663
void func_171() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x2069B
void func_172(int *iParam0) {
	if (*iParam0 == -1) {
		return;
	}
	if (*iParam0 != Global_35743) {
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

// Position - 0x206D8
void func_173(int iParam0, int iParam1) {
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;

	func_163(iParam0, &Var0);
	if (!gameplay::are_strings_equal(&Var0.f_16, "")) {
		while (!func_201(&Var0.f_16)) {
			system::wait(0);
		}
	}
	if (Var0.f_22 != 0) {
		func_200(Var0.f_22, 0);
	}
	func_191(iParam0, Global_69971);
	if (!iParam1) {
		iVar32 = func_190(iParam0);
		if (iVar32 != 0) {
			if (!audio::get_number_of_passenger_voice_variations(iVar32)) {
				audio::unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1) {
		bVar33 = true;
		if (Var0.f_5 != 4) {
			iVar34 = 0;
			while (iVar34 < 63) {
				iVar67 = iVar34;
				if (iVar67 != iParam0) {
					func_163(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5) {
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 3)) {
							bVar33 = false;
						}
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 0)) {
							func_178(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33) {
			func_178(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4) {
		iVar68 = 0;
		while (iVar68 < 63) {
			iVar101 = iVar68;
			if (iVar101 != iParam0) {
				func_163(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25) {
					func_178(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 3);
		Global_100787[iParam0 /*10*/].f_5 = 1;
		func_175(iParam0);
		iVar102 = func_174(iParam0);
		if (iVar102 != 322) {
			func_8(iVar102, 0, 0);
		}
	}
}

// Position - 0x2085D
int func_174(int iParam0) {
	switch (iParam0) {
	case 0: return 109;

	case 1: return 322;

	case 2: return 69;

	case 3: return 70;

	case 4: return 322;

	case 5: return 71;

	case 6: return 71;

	case 7: return 72;

	case 8: return 68;

	case 9: return 73;

	case 10: return 74;

	case 11: return 75;

	case 12: return 76;

	case 13: return 77;

	case 14: return 78;

	case 15: return 79;

	case 16: return 80;

	case 17: return 81;

	case 18: return 82;

	case 19: return 83;

	case 20: return 84;

	case 21: return 85;

	case 22: return 86;

	case 23: return 87;

	case 24: return 106;

	case 25: return 178;

	case 26: return 179;

	case 27: return 88;

	case 28: return 89;

	case 29: return 90;

	case 30: return 91;

	case 31: return 107;

	case 32: return 92;

	case 33: return 93;

	case 34: return 94;

	case 35: return 110;

	case 36: return 111;

	case 37: return 95;

	case 38: return 96;

	case 39: return 97;

	case 40: return 98;

	case 41: return 99;

	case 42: return 100;

	case 43: return 101;

	case 44: return 66;

	case 45: return 67;

	case 46: return 102;

	case 47: return 103;

	case 48: return 322;

	case 49: return 104;

	case 50: return 104;

	case 51: return 105;

	case 52: return 194;

	case 53: return 195;

	case 54: return 196;

	case 55: return 197;

	case 56: return 198;

	case 57: return 108;

	case 58: return 208;

	case 59: return 209;

	case 60: return 210;

	case 61: return 211;

	case 62: return 212;
	}
	return 322;
}

// Position - 0x20BE4
void func_175(int iParam0) {
	func_177(iParam0, 1);
	Global_101700.f_17533[iParam0 /*6*/].f_3 = func_176();
	Global_101700.f_17533.f_380++;
}

// Position - 0x20C1A
int func_176() { return Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380; }

// Position - 0x20C36
void func_177(var uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 55;
	if (iParam1) {
		iVar1 = uParam0;
		if (iVar1 == 46) {
			iVar0 = 35;
		}
		else if (iVar1 == 49) {
			iVar0 = 36;
		}
		else if (iVar1 == 50) {
			iVar0 = 37;
		}
		else if (iVar1 == 8) {
			iVar0 = 38;
		}
		else if (iVar1 == 16) {
			iVar0 = 39;
		}
		else if (iVar1 == 38) {
			iVar0 = 40;
		}
		else if (iVar1 == 39) {
			iVar0 = 41;
		}
		else if (iVar1 == 40) {
			iVar0 = 42;
		}
		else if (iVar1 == 41) {
			iVar0 = 43;
		}
		else if (iVar1 == 42) {
			iVar0 = 44;
		}
		else if (iVar1 == 43) {
			iVar0 = 45;
		}
		else if (iVar1 == 20) {
			iVar0 = 46;
		}
	}
	else {
		iVar2 = uParam0;
		if (iVar2 == 53) {
			iVar0 = 0;
		}
		else if (iVar2 == 1) {
			iVar0 = 1;
		}
		else if (iVar2 == 2) {
			iVar0 = 2;
		}
		else if (iVar2 == 17) {
			iVar0 = 3;
		}
		else if (iVar2 == 19) {
			iVar0 = 4;
		}
		else if (iVar2 == 43) {
			iVar0 = 5;
		}
		else if (iVar2 == 44) {
			iVar0 = 6;
		}
		else if (iVar2 == 63) {
			iVar0 = 8;
		}
		else if (iVar2 == 12) {
			iVar0 = 9;
		}
		else if (iVar2 == 13) {
			iVar0 = 10;
		}
		else if (iVar2 == 64) {
			iVar0 = 11;
		}
		else if (iVar2 == 20) {
			iVar0 = 12;
		}
		else if (iVar2 == 30) {
			iVar0 = 13;
		}
		else if (iVar2 == 31) {
			iVar0 = 14;
		}
		else if (iVar2 == 41) {
			iVar0 = 15;
		}
		else if (iVar2 == 38) {
			iVar0 = 16;
		}
		else if (iVar2 == 9) {
			iVar0 = 18;
		}
		else if (iVar2 == 59) {
			iVar0 = 19;
		}
		else if (iVar2 == 45) {
			iVar0 = 20;
		}
		else if (iVar2 == 10) {
			iVar0 = 21;
		}
		else if (iVar2 == 14) {
			iVar0 = 22;
		}
		else if (iVar2 == 16) {
			iVar0 = 24;
		}
		else if (iVar2 == 39) {
			iVar0 = 25;
		}
		else if (iVar2 == 46) {
			iVar0 = 26;
		}
		else if (iVar2 == 60) {
			iVar0 = 27;
		}
		else if (iVar2 == 22) {
			iVar0 = 28;
		}
		else if (iVar2 == 48) {
			iVar0 = 30;
		}
		else if (iVar2 == 61) {
			iVar0 = 31;
		}
		else if (iVar2 == 49) {
			iVar0 = 32;
		}
		else if (iVar2 == 27) {
			iVar0 = 34;
		}
		else if (iVar2 == 3) {
			iVar0 = 47;
		}
		else if (iVar2 == 4) {
			iVar0 = 48;
		}
		else if (iVar2 == 5) {
			iVar0 = 49;
		}
		else if (iVar2 == 6) {
			iVar0 = 50;
		}
		else if (iVar2 == 7) {
			iVar0 = 51;
		}
		else if (iVar2 == 58) {
			iVar0 = 53;
		}
		else if (iVar2 == 90) {
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75) {
			iVar0 = 17;
		}
		else if (iVar2 == 93) {
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70) {
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85) {
			iVar0 = 33;
		}
	}
	if (iVar0 != 55) {
		Global_101700.f_19523.f_472 = iVar0;
	}
}

// Position - 0x20F5A
void func_178(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return;
	}
	func_179(iParam0);
	gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0x20F8D
void func_179(int iParam0) {
	switch (iParam0) {
	case 30: func_183(22, 1, 0, 1, 0); break;

	case 15: func_180(37, 0); break;

	default: break;
	}
}

// Position - 0x20FC2
void func_180(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_182(iParam0, 0)) {
			func_181(iParam0, 1, 0);
			func_181(iParam0, 2, 0);
			func_181(iParam0, 3, 0);
			func_181(iParam0, 4, 0);
			func_181(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_181(iParam0, 0, 0);
	}
}

// Position - 0x2101F
void func_181(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2105A
int func_182(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x2107D
void func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_186(iParam0, iParam3, iParam4, 0);
		func_184(iParam0, iParam1);
	}
}

// Position - 0x210D8
void func_184(int iParam0, int iParam1) {
	switch (iParam0) {
	case 12:
		if (iParam1 == 0) {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
		}
		break;

	case 71:
		if (iParam1 != 1) {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
		}
		else {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
		}
		break;

	case 65:
		if (iParam1 == 1) {
			func_185(0, 0);
		}
		else {
			func_185(0, 1);
		}
		break;

	case 6:
		if (iParam1 == 1) {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
		}
		break;

	case 174:
		if (iParam1 == 2) {
			audio::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
		}
		break;

	case 37:
		if (iParam1 == 1) {
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
		}
		break;
	}
}

// Position - 0x211C1
void func_185(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x211EA
bool func_186(int iParam0, bool bParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_189(&Var3, iParam0);
	if (func_187()) {
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else {
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (ped::is_ped_injured(player::player_ped_id()) && !iParam3) {
	}
	else {
		bVar99 = true;
		if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("standard_global_reg")) {
			if (iParam2 == 0) {
				if (Global_32749[iParam0] &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), Var3,
														  1) < 200f) {
					bVar99 = false;
				}
				if (!player::is_player_playing(player::player_id()) ||
					ai::is_ped_being_arrested(player::player_ped_id())) {
					if (!cam::is_screen_faded_out()) {
						bVar99 = false;
					}
				}
			}
		}
		if (streaming::is_new_load_scene_active() &&
			(!streaming::is_player_switch_in_progress() || streaming::get_player_switch_state() != 5)) {
			bVar99 = false;
		}
		if (bVar99) {
			switch (Var3.f_3) {
			case 0:
				if (iVar1 == 2) {
				}
				else {
					if (Var3.f_4[iVar1] != 0) {
						entity::remove_model_hide(Var3, 10f, Var3.f_4[iVar1], 0);
					}
					if (Var3.f_4[iVar2] != 0) {
						entity::create_model_hide(Var3, 10f, Var3.f_4[iVar2], 1);
					}
					Global_34343[iParam0] = 1;
				}
				bVar0 = true;
				break;

			case 1:
				if (iVar1 == 0) {
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_34)) {
							streaming::request_ipl(&Var3.f_34);
						}
					}
				}
				else if (iVar1 == 1) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
				}
				else if (iVar1 == 2) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
						if (!streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
				}
				Global_34144[iParam0] = 1;
				Global_34343[iParam0] = 1;
				bVar0 = true;
				break;

			case 2:
				iVar100 = interior::get_interior_at_coords_with_type(Var3, &Var3.f_42);
				if (iVar100 != 0) {
					if (gameplay::get_hash_key(&Var3.f_50) != gameplay::get_hash_key("")) {
						if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_50)) {
							interior::_disable_interior_prop(iVar100, &Var3.f_50);
						}
					}
					if (iVar1 == 0) {
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
					}
					else if (iVar1 == 1) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
					}
					else if (iVar1 == 2) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
					}
					if (bParam1) {
						interior::refresh_interior(iVar100);
					}
				}
				Global_34343[iParam0] = 1;
				Global_34144[iParam0] = 1;
				bVar0 = true;
				break;

			case 3:
				if (gameplay::get_distance_between_coords(Var3, entity::get_entity_coords(player::player_ped_id(), 0),
														  1) < 250f) {
					uVar98 = object::_get_des_object(Var3, 25f, &Var3.f_8[0 /*8*/]);
					if (object::_does_des_object_exist(uVar98)) {
						if (iVar1 == 0) {
							object::_set_des_object_state(uVar98, 3);
							Global_34343[iParam0] = 1;
							bVar0 = true;
						}
						else if (iVar1 == 1) {
							if (object::_get_des_object_state(uVar98) != 6 &&
								object::_get_des_object_state(uVar98) != 7 &&
								object::_get_des_object_state(uVar98) != 8) {
								object::_set_des_object_state(uVar98, 10);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
						}
						else if (iVar1 == 2) {
							bVar0 = true;
						}
					}
				}
				break;

			case 4:
				if (iVar1 == 0) {
					entity::remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
					gameplay::clear_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				else if (iVar1 == 1) {
					entity::create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
					gameplay::set_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				bVar0 = true;
				break;
			}
			if (bVar0) {
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_187()) {
					if (!Global_33744[iParam0]) {
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

// Position - 0x21AF9
bool func_187() {
	if ((func_10() == -1 || func_10() == 999) && func_188() != 0) {
		return true;
	}
	return false;
}

// Position - 0x21B29
int func_188() { return Global_25191; }

// Position - 0x21B34
int func_189(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		uParam0->f_4[iVar0] = 0;
		StringCopy(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&uParam0->f_34, "", 32);
	StringCopy(&uParam0->f_42, "", 32);
	StringCopy(&uParam0->f_50, "", 32);
	uParam0->f_58 = {0f, 0f, 0f};
	uParam0->f_61 = {0f, 0f, 0f};
	uParam0->f_68 = {0f, 0f, 0f};
	uParam0->f_71 = {0f, 0f, 0f};
	uParam0->f_74 = 0f;
	uParam0->f_79 = {0f, 0f, 0f};
	uParam0->f_82 = {0f, 0f, 0f};
	uParam0->f_85 = {0f, 0f, 0f};
	uParam0->f_88 = {0f, 0f, 0f};
	switch (iParam1) {
	case 3:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 4:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 0:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
		*uParam0 = {-93.4f, 6410.9f, 36.8f};
		break;

	case 1:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
		*uParam0 = {890.3647f, -2367.289f, 28.10582f};
		break;

	case 2:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1020.5f, 663.41f, 154.75f};
		uParam0->f_58 = {-1018.913f, 603.2904f, 105.6611f};
		uParam0->f_61 = {-1038.913f, 639.2904f, 135.6611f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		break;

	case 5:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
		break;

	case 196:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		break;

	case 6:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
		break;

	case 7:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 8:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 9:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 10:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 11:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
		break;

	case 12:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cargoship", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
		uParam0->f_68 = {-162.8918f, -2365.769f, 0f};
		uParam0->f_71 = {190.75f, 31.25f, 21f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 13:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
		break;

	case 14:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "smboat", 32);
		break;

	case 15:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
		*uParam0 = {-95.2f, 6411.3f, 31.5f};
		break;

	case 16:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 17:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 18:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 19:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 20:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {801.7f, -1810.8f, 23.3f};
		break;

	case 21:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {787.3967f, -1808.858f, 29.8532f};
		uParam0->f_58 = {814f, -1750f, 20f};
		uParam0->f_61 = {790f, -1899f, 35f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		uParam0->f_64[2] = 0;
		break;

	case 22:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
		break;

	case 23:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
		break;

	case 24:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
		break;

	case 25:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
		break;

	case 26:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
		*uParam0 = {163.4f, -745.7f, 251f};
		break;

	case 27:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 28:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 29:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = joaat("dt1_05_build1_h");
		uParam0->f_4[1] = joaat("dt1_05_build1_damage");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 30:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -112041596;
		uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 31:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -186270611;
		uParam0->f_4[1] = joaat("dt1_05_damage_slod");
		*uParam0 = {178.534f, -668.835f, 37.2113f};
		break;

	case 32:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 33:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 34:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 35:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
		*uParam0 = {105.4557f, -745.4835f, 44.7548f};
		break;

	case 36:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
		*uParam0 = {169f, -670.3f, 41.9f};
		break;

	case 37:
		uParam0->f_3 = 1;
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		uParam0->f_79 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_82 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_85 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_88 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		break;

	case 38:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 39:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 40:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 41:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 42:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 43:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 44:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 45:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 46:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 47:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 48:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_34, "des_methtrailer", 32);
		StringCopy(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
		uParam0->f_33 = 1;
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		uParam0->f_68 = {31.134f, 3738.783f, 39.062f};
		uParam0->f_71 = {13.6f, 20f, 8.9f};
		uParam0->f_74 = 48f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 1;
		break;

	case 49:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		break;

	case 50:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		uParam0->f_79 = {2383.756f, 4929.988f, 39.52461f};
		uParam0->f_82 = {2505.756f, 5023.988f, 67.52461f};
		break;

	case 55:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		break;

	case 51:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2444.8f, 4976.4f, 50.5f};
		break;

	case 52:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm_props", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 53:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 54:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farmint", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 56:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 57:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 58:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 59:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 60:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
		*uParam0 = {889.3f, -2910.9f, 40f};
		break;

	case 61:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
		*uParam0 = {-1600.619f, 4443.457f, 0.725f};
		break;

	case 62:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
		*uParam0 = {966.1f, -114.8f, 75.2f};
		break;

	case 63:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
		*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
		break;

	case 64:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
		break;

	case 65:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "railing_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "railing_end", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 66:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 67:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
		*uParam0 = {131.29f, -631.22f, 261.85f};
		break;

	case 68:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
		*uParam0 = {233.9f, -1355f, 30.3f};
		break;

	case 69:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
		*uParam0 = {234.4f, -1355.6f, 40.5f};
		break;

	case 70:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 71:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 72:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 73:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 74:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 75:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 76:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 105:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 106:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
		*uParam0 = {1861.28f, 2402.11f, 58.53f};
		break;

	case 107:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
		*uParam0 = {-1327.46f, -274.82f, 54.25f};
		break;

	case 108:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
		*uParam0 = {2697.32f, 3162.18f, 58.1f};
		break;

	case 109:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
		*uParam0 = {2119.12f, 3058.21f, 53.25f};
		break;

	case 110:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
		*uParam0 = {-804.25f, -2276.88f, 23.59f};
		break;

	case 111:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 112:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 77:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {480.9554f, -1321.21f, 28.2037f};
		uParam0->f_85 = {508.3f, -1299.3f, 39.4f};
		uParam0->f_88 = {459.9f, -1363.2f, 21.4f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 0;
		break;

	case 78:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
		*uParam0 = {1973f, 3815f, 34f};
		uParam0->f_33 = 0;
		break;

	case 79:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
		*uParam0 = {-1088.6f, -1650.6f, 6.4f};
		break;

	case 80:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chop_props", 32);
		*uParam0 = {-13.83f, -1455.45f, 31.81f};
		break;

	case 113:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
		*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
		break;

	case 114:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
		*uParam0 = {2384.969f, 4277.583f, 30.379f};
		break;

	case 115:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
		*uParam0 = {1577.881f, 3836.107f, 30.7717f};
		break;

	case 87:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
		break;

	case 88:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
		*uParam0 = {-630.4205f, -236.7843f, 37.057f};
		uParam0->f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
		uParam0->f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
		break;

	case 89:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
		*uParam0 = {-583.1606f, -282.3967f, 35.394f};
		break;

	case 90:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
		*uParam0 = {-14.651f, -604.3639f, 25.1823f};
		break;

	case 91:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2773.61f, 2835.327f, 35.1903f};
		break;

	case 94:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "airfield", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {1743.682f, 3286.251f, 40.0875f};
		break;

	case 95:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1222.9f, 1877.9f, 79.9f};
		uParam0->f_58 = {1206.8f, 1803f, 43.9f};
		uParam0->f_61 = {1329f, 2060.4f, 143.9f};
		uParam0->f_64[0] = 0;
		uParam0->f_64[1] = 1;
		uParam0->f_64[2] = 0;
		break;

	case 104:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
		*uParam0 = {-351f, -1324f, 44.02f};
		break;

	case 103:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
		*uParam0 = {391.81f, -962.71f, 41.97f};
		break;

	case 102:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
		*uParam0 = {424.2f, -1944.31f, 33.09f};
		break;

	case 92:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 93:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 118:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 116:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 117:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 119:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 120:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 122:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 121:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 123:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 124:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 170:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 171:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
		StringCopy(&uParam0->f_42, "V_Michael_Garage", 32);
		*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
		break;

	case 125:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 164:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 165:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 166:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 167:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 168:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 169:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 126:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 127:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 128:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 129:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 130:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 131:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 132:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 133:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 134:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 179:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
		uParam0->f_68 = {-29.3f, -1086.35f, 25.57f};
		uParam0->f_71 = {5.5f, 3f, 2f};
		uParam0->f_74 = -10f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 174:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
		StringCopy(&uParam0->f_50, "csr_inMission", 32);
		uParam0->f_33 = 0;
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 175:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_68 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_71 = {2.5f, 3f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 176:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_68 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_71 = {3f, 1f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 177:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_68 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_71 = {1f, 3f, 2f};
		uParam0->f_74 = -45f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 178:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 173:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "shr_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "fakeint", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 180:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "", 32);
		*uParam0 = {23.9346f, -669.7552f, 30.8853f};
		break;

	case 181:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
		StringCopy(&uParam0->f_42, "v_hospital", 32);
		uParam0->f_33 = 0;
		*uParam0 = {300.9423f, -586.1784f, 42.2919f};
		break;

	case 135:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 136:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 137:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 138:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 139:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 140:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 141:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 142:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 143:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 144:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 145:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 146:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 147:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 148:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 149:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {1856.029f, 3682.998f, 33.2675f};
		break;

	case 150:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-440.5073f, 6018.766f, 30.49f};
		break;

	case 151:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 152:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 153:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 154:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 155:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 172:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
		StringCopy(&uParam0->f_42, "v_strip3", 32);
		*uParam0 = {96.4811f, -1291.294f, 28.2688f};
		break;

	case 182:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {139.5795f, -3092.962f, 8.64631f};
		uParam0->f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 1;
		break;

	case 183:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {203.7784f, -3131.767f, 7.041344f};
		uParam0->f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
		uParam0->f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
		break;

	case 184:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {144.7706f, -2982.659f, 7.952507f};
		uParam0->f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
		uParam0->f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
		break;

	case 185:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_79 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_82 = {-1158.965f, -1524.983f, 11.63273f};
		break;

	case 187:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_79 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_82 = {-1048.064f, 368.0221f, 70.9128f};
		break;

	case 186:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_79 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_82 = {1983.45f, 3830.78f, 36.2726f};
		break;

	case 188:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_79 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_82 = {-1076.233f, 92.1041f, 60.0617f};
		break;

	case 81:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
		break;

	case 82:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
		break;

	case 83:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {3832.9f, 3665.5f, -23.4f};
		break;

	case 84:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {2814.7f, 4758.5f, 47.9f};
		break;

	case 85:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "golfflags", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
		break;

	case 86:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "yogagame", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
		break;

	case 189:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
		uParam0->f_33 = 0;
		*uParam0 = {55.7f, -1391.3f, 30.5f};
		break;

	case 190:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
		uParam0->f_33 = 0;
		*uParam0 = {700.091f, -933.641f, 20.308f};
		break;

	case 191:
		uParam0->f_3 = 1;
		*uParam0 = {-1096.381f, -836.17f, 36.6755f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 192:
		uParam0->f_3 = 1;
		*uParam0 = {449.6558f, -980.1375f, 42.6918f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 193:
		uParam0->f_3 = 1;
		*uParam0 = {363.0175f, -1598.079f, 35.9502f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 194:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
		break;

	case 97:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {23.7318f, -647.2123f, 37.9549f};
		break;

	case 98:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
		*uParam0 = {12.9689f, -648.4698f, 9.7693f};
		break;

	case 99:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
		*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
		break;

	case 100:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
		*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
		break;

	case 101:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "facelobby", 32);
		*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
		break;

	case 195:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
		*uParam0 = {136.1795f, -750.701f, 262.0516f};
		break;

	case 197:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
		*uParam0 = {2096f, 3168.7f, 42.9f};
		break;
	}
	switch (iParam1) {
	case 156:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 157:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 158:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 163:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 159:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 161:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 162:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 160:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "locked", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "unlocked", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 96:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
		*uParam0 = {19.0568f, 536.4818f, 169.6277f};
		break;
	}
	return 1;
}

// Position - 0x2522B
int func_190(int iParam0) {
	switch (iParam0) {
	case 46: return 42;

	case 47: return 43;

	case 49: return 44;

	case 50: return 45;

	case 8:
		if (gameplay::is_bit_set(Global_101700.f_17533.f_382, 0)) {
			return 46;
		}
		break;

	case 16: return 47;

	case 38: return 48;

	case 39: return 49;

	case 40: return 50;

	case 41: return 51;

	case 42: return 52;

	case 43:
		if (Global_101700.f_8044.f_99.f_58[101]) {
			return 53;
		}
		else {
			return 54;
		}
		break;

	case 20: return 55;
	}
	return 0;
}

// Position - 0x2531D
void func_191(int iParam0, bool bParam1) {
	switch (iParam0) {
	case 46: func_192(4, bParam1); break;

	case 16: func_192(6, bParam1); break;

	case 37: func_192(17, bParam1); break;

	case 31: func_192(16, bParam1); break;
	}
}

// Position - 0x2536E
void func_192(int iParam0, bool bParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31) {
		if (!func_199(iParam0)) {
			gameplay::set_bit(&Global_101700.f_25393, iVar0);
			if (!bParam1) {
				func_197(func_198(iParam0));
				if (!func_196(68)) {
					func_193("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

// Position - 0x253D4
void func_193(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_194(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x253F4
void func_194(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_195();
	}
}

// Position - 0x255C6
void func_195() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x256E6
int func_196(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x25729
void func_197(char *sParam0) {
	ui::_set_notification_text_entry("");
	ui::_set_notification_message_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

// Position - 0x2574C
char *func_198(int iParam0) {
	switch (iParam0) {
	case 0: return "CM_STOMIC";

	case 1: return "CM_STOFRA";

	case 2: return "CM_STOTRE";

	case 3: return "CM_STOAMA";

	case 4: return "CM_STOBEV";

	case 5: return "CM_STOBRA";

	case 6: return "CM_STOCHR";

	case 7: return "CM_STODAV";

	case 8: return "CM_STODEV";

	case 9: return "CM_STODRF";

	case 10: return "CM_STOFAB";

	case 11: return "CM_STOFLO";

	case 12: return "CM_STOJIM";

	case 13: return "CM_STOLAM";

	case 14: return "CM_STOLAZ";

	case 15: return "CM_STOLES";

	case 16: return "CM_STOMAU";

	case 17: return "CM_STOTHO";

	case 18: return "CM_STONER";

	case 19: return "CM_STOPAT";

	case 20: return "CM_STOSIM";

	case 21: return "CM_STOSOL";

	case 22: return "CM_STOSTE";

	case 23: return "CM_STOSTR";

	case 24: return "CM_STOTAN";

	case 25: return "CM_STOTAO";

	case 26: return "CM_STOTRA";

	case 27: return "CM_STOWAD";
	}
	return "ERROR!";
}

// Position - 0x2591F
int func_199(int iParam0) {
	if (iParam0 != -1 && iParam0 != 28) {
		return gameplay::is_bit_set(Global_101700.f_25393, iParam0);
	}
	return 0;
}

// Position - 0x2594C
void func_200(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x25989
int func_201(char *sParam0) {
	int iVar0;

	iVar0 = 1424;
	if (!script::does_script_exist(sParam0)) {
		return 1;
	}
	if (gameplay::are_strings_equal(sParam0, "controller_Races")) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("controller_races")) > 0) {
			return 1;
		}
		iVar0 = 128;
	}
	script::request_script(sParam0);
	if (script::has_script_loaded(sParam0)) {
		system::start_new_script(sParam0, iVar0);
		script::set_script_as_no_longer_needed(sParam0);
		return 1;
	}
	return 0;
}

// Position - 0x259E9
int func_202() { return func_203(script::get_this_script_name(), 0); }

// Position - 0x259FA
int func_203(char *sParam0, int iParam1) {
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_163(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x25A43
bool func_204(var *uParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	if (uParam0->f_6) {
		uParam0->f_6 = 0;
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
		}
		func_511(&Local_693);
		func_510(&Local_1913);
		func_509();
		iVar0 = 0;
		func_508(&uLocal_2892);
		switch (uParam0->f_2) {
		case 1:
			if (uParam0->f_4) {
				iLocal_463 = uParam0->f_3;
				if (iVar0 > 0) {
					iLocal_2647 = iVar0;
				}
				else {
					iLocal_2647 = func_507(100000f, iLocal_463, Global_101700.f_18932.f_9);
				}
			}
			else {
				iLocal_463 = uParam0->f_3;
			}
			iLocal_2775 = 0;
			break;
		}
		if (!bLocal_2713) {
			func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
		}
		if (iLocal_463 == 0) {
		}
		else if (iLocal_463 == 2) {
			bLocal_2717 = true;
		}
		if (iLocal_463 == 3 || iLocal_463 == 1) {
			iLocal_2714 = 1;
			iLocal_2835 = 1;
		}
		else if (iLocal_463 == 4) {
			iLocal_2835 = Local_1913[func_505() /*28*/].f_27;
		}
		func_504();
		iLocal_2702 = 0;
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
				ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iLocal_2934 = uParam0->f_1;
				iVar1 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iVar1) && !entity::is_entity_dead(iVar1, 0)) {
					if (entity::get_entity_model(iVar1) == joaat("towtruck") ||
						entity::get_entity_model(iVar1) == joaat("towtruck2")) {
						iLocal_2934 = iVar1;
						entity::set_entity_as_mission_entity(iLocal_2934, 1, 0);
					}
				}
			}
		}
		player::set_wanted_level_multiplier(0.1f);
		if (entity::does_entity_exist(iLocal_2934)) {
			if (!entity::is_entity_dead(iLocal_2934, 0)) {
				entity::set_entity_as_mission_entity(iLocal_2934, 1, 1);
				vehicle::add_vehicle_upsidedown_check(iLocal_2934);
				vehicle::_0x192547247864DFDD(iLocal_2934, 0);
				vehicle::set_vehicle_has_strong_axles(iLocal_2934, 1);
			}
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			func_503(&Local_2962[1 /*8*/], 0, 1120390349, 0);
			func_503(&Local_2962[0 /*8*/], 0, 1120390349, 0);
			func_502(&Local_2962[1 /*8*/]);
			func_502(&Local_2962[0 /*8*/]);
			bLocal_2742 = true;
		}
	}
	if (iLocal_2941 < 15 && iLocal_2941 != 13 && iLocal_2941 != 12 && iLocal_2941 != 11) {
		func_500(&iLocal_2934, &iLocal_2767, &Local_2779, &vLocal_2659, &cLocal_2863, &iLocal_2836, iLocal_2830,
				 bLocal_2712, &iLocal_2718, iLocal_2705, bLocal_2696, iLocal_504, iLocal_2941, 1);
		if (bLocal_510) {
			if (ui::does_blip_exist(iLocal_2769)) {
				ui::remove_blip(&iLocal_2769);
			}
			if (iLocal_463 == 2 || iLocal_463 == 0 || iLocal_463 == 4) {
				if (func_499()) {
					if (!iLocal_2748) {
						Local_2879 = {func_498()};
						if (!iLocal_2754) {
							func_496();
							iLocal_2748 = 1;
						}
					}
				}
				else if (!iLocal_2754) {
					if (func_495(&uLocal_527, "TOWAUD", "TONYA_GETOUT", 9, 1, 0, 0)) {
						iLocal_2754 = 1;
					}
				}
			}
		}
		else {
			iLocal_2748 = 0;
			iLocal_2754 = 0;
		}
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		switch (iLocal_2775) {
		case 0:
			if (iLocal_2941 > 2 && iLocal_2941 < 15) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0)) {
				}
				if (iLocal_463 != 2 && iLocal_463 != 4) {
					if (!func_492(&iLocal_2948, Local_2779[0 /*20*/].f_6, iLocal_2934, &uLocal_2825, &iLocal_2826,
								  iLocal_2702)) {
						iLocal_2885 = 15;
						func_491();
					}
				}
				if (bLocal_2742) {
					func_490(&iLocal_2949, iLocal_2934, &uLocal_2828, &iLocal_2829, iLocal_2702);
				}
			}
			if (bLocal_2713) {
				if (iLocal_2941 >= 7) {
					if (!iLocal_504) {
						func_485(iLocal_2934, Local_2779[0 /*20*/].f_6, Local_2800, &Local_2779[0 /*20*/].f_8,
								 &vLocal_2659, &cLocal_2863, &vLocal_480, bLocal_2713, &iLocal_2766);
					}
				}
			}
			iLocal_2704 = 0;
			if ((iLocal_463 == 0 || iLocal_463 == 2) && iLocal_2941 > 4 && iLocal_2941 < 17) {
				if (!bLocal_2713) {
					if (func_476()) {
					}
				}
			}
			else if (iLocal_463 == 1 && iLocal_2941 > 4 && iLocal_2941 < 17) {
				if (func_471()) {
					func_603(uParam1, 1);
				}
				if (iLocal_2945 > 0) {
					func_466();
				}
			}
			else if (iLocal_463 == 3) {
				if (iLocal_2941 == 5 && iLocal_2943 < 1 && !iLocal_2689) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
						!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
						if (entity::is_entity_touching_entity(player::player_ped_id(), Local_2779[0 /*20*/].f_6)) {
							iLocal_2689 = 1;
							if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
								ai::clear_ped_tasks(Local_2779[0 /*20*/]);
								ai::task_turn_ped_to_face_entity(Local_2779[0 /*20*/], player::player_ped_id(), 0);
							}
						}
					}
				}
			}
			if (iLocal_2706 && !bLocal_485) {
				func_462(&Local_1913[func_505() /*28*/], &Local_1913[func_505() /*28*/].f_10,
						 Local_693[iLocal_2647 /*23*/].f_1, &Local_2779[0 /*20*/], &Local_2779[0 /*20*/].f_2,
						 &uLocal_2772, fLocal_2861, cLocal_2653, &sLocal_2654, iLocal_2835);
			}
			if (iLocal_463 == 4) {
				func_460(&iLocal_2942, iLocal_2935, iLocal_2936, iLocal_2934, &Local_2779[0 /*20*/].f_2, iLocal_2835,
						 cLocal_2653, &sLocal_2654, &iLocal_2766, iLocal_2702, &Local_2779[0 /*20*/].f_6);
			}
			if (bLocal_485 && !bLocal_2716) {
				if (func_453(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, &uLocal_455, &iLocal_462, 0, 1, 1, 1, 0)) {
					func_452();
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::clear_ped_tasks(Local_2779[0 /*20*/]);
						ped::set_ped_keep_task(Local_2779[0 /*20*/], 1);
						ai::task_smart_flee_ped(Local_2779[0 /*20*/], player::player_ped_id(), 1000f, -1, 0, 0);
						if (iLocal_462 == 4) {
							iLocal_2885 = 19;
						}
						else if (iLocal_462 == 1) {
							iLocal_2885 = 20;
						}
						else {
							iLocal_2885 = 18;
						}
					}
					if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_1, 0)) {
						ai::clear_ped_tasks(Local_2779[0 /*20*/].f_1);
						ped::set_ped_keep_task(Local_2779[0 /*20*/].f_1, 1);
						ai::clear_sequence_task(&iLocal_464);
						ai::open_sequence_task(&iLocal_464);
						ai::task_leave_any_vehicle(0, 1, 256);
						ai::task_smart_flee_ped(0, player::player_ped_id(), 1000f, -1, 0, 0);
						ai::close_sequence_task(iLocal_464);
						if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_1, 0)) {
							ai::task_perform_sequence(Local_2779[0 /*20*/].f_1, iLocal_464);
						}
						ai::clear_sequence_task(&iLocal_464);
						if (iLocal_462 == 4) {
							iLocal_2885 = 19;
						}
						else {
							iLocal_2885 = 18;
						}
					}
					if (!bLocal_2713) {
						switch (iLocal_462) {
						case 16:
							if (iLocal_463 == 2) {
								iLocal_2885 = 17;
								func_491();
							}
							else {
								iLocal_2885 = 16;
								func_491();
							}
							break;
						}
					}
					else {
						iLocal_2885 = 21;
						func_491();
					}
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						func_491();
					}
				}
				if (func_453(Local_2779[0 /*20*/].f_1, Local_2779[0 /*20*/].f_6, &uLocal_455, &iLocal_462, 0, 1, 0, 1,
							 0)) {
					func_452();
					if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_1, 0)) {
						ai::clear_ped_tasks(Local_2779[0 /*20*/].f_1);
						ped::set_ped_keep_task(Local_2779[0 /*20*/].f_1, 1);
						ai::task_smart_flee_ped(Local_2779[0 /*20*/].f_1, player::player_ped_id(), 1000f, -1, 0, 0);
						if (iLocal_462 == 4) {
							iLocal_2885 = 19;
						}
						else {
							iLocal_2885 = 18;
						}
					}
				}
			}
			else if (bLocal_2716) {
			}
			if (!iLocal_2704 && func_451(0)) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2934, 0) &&
					ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0)) {
					if (!iLocal_511) {
						if (entity::does_entity_exist(Local_2779[0 /*20*/].f_6)) {
							if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
								func_450(&iLocal_442, entity::get_entity_coords(Local_2779[0 /*20*/].f_6, 1), 0, 0, 1,
										 1, 1);
								if (cam::is_gameplay_hint_active()) {
									if (!audio::is_audio_scene_active("TOWING_FOCUS_CAM_ON_CAR")) {
										audio::start_audio_scene("TOWING_FOCUS_CAM_ON_CAR");
									}
								}
								else if (audio::is_audio_scene_active("TOWING_FOCUS_CAM_ON_CAR")) {
									audio::stop_audio_scene("TOWING_FOCUS_CAM_ON_CAR");
								}
							}
						}
					}
					else {
						func_434(&iLocal_442, vLocal_2663, 0, 0, 1, 1, 1);
					}
				}
				else {
					func_433(&iLocal_442, 0, 0);
					cam::set_cinematic_button_active(1);
				}
			}
			if (!func_451(0)) {
				func_433(&iLocal_442, 0, 0);
			}
			func_431(&iLocal_2895, 7f, 1);
			func_430();
			func_429();
			if (!bLocal_510 || iLocal_2941 >= 15 || uLocal_2701) {
				if (func_240(*uParam0, uParam1)) {
					return true;
				}
			}
			if (iLocal_2941 == 9) {
				func_239();
			}
			if (iLocal_463 == 1) {
				if (iLocal_2941 == 9) {
					func_218(Local_2391, &Local_2779, &iLocal_2934);
				}
			}
			else if (iLocal_463 == 3) {
				if (iLocal_2941 == 7 || iLocal_2941 == 9) {
					func_218(Local_2391, &Local_2779, &iLocal_2934);
				}
			}
			break;
		}
		pathfind::_0x0B919E1FB47CC4E0(1.5f);
		if (func_205(*uParam0)) {
			func_491();
		}
		if (bLocal_2688) {
		}
	}
	return false;
}

// Position - 0x26339
bool func_205(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) {
	vector3 vVar0;
	vector3 vVar3;

	if (bLocal_2721) {
		iLocal_2885 = 13;
		return true;
	}
	if (bLocal_2731) {
		iLocal_2885 = 10;
		return true;
	}
	if (func_217()) {
		iLocal_2885 = 11;
		return true;
	}
	if (entity::does_entity_exist(Local_2779[0 /*20*/].f_6)) {
		if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (vehicle::is_vehicle_stuck_timer_up(Local_2779[0 /*20*/].f_6, 0, 7000)) {
				iLocal_2885 = 15;
				return true;
			}
		}
	}
	if (bLocal_510) {
		if (gameplay::get_game_timer() - iLocal_2836 > 50000) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			if (entity::does_entity_exist(iLocal_2934) && !entity::is_entity_dead(iLocal_2934, 0)) {
				vVar3 = {entity::get_entity_coords(iLocal_2934, 1)};
			}
			if (system::vdist2(vVar0, vVar3) > 2500f) {
				iLocal_2885 = 0;
				return true;
			}
		}
	}
	if (bLocal_2699) {
		iLocal_2885 = 22;
		return true;
	}
	if (bLocal_2700) {
		iLocal_2885 = 23;
		return true;
	}
	if (entity::does_entity_exist(iLocal_2934)) {
		if (!vehicle::is_vehicle_driveable(iLocal_2934, 0) || func_216()) {
			iLocal_2885 = 2;
			return true;
		}
	}
	else {
		iLocal_2885 = 2;
		return true;
	}
	if (entity::does_entity_exist(iLocal_2934)) {
		if (entity::is_entity_dead(iLocal_2934, 0)) {
			iLocal_2885 = 2;
			return true;
		}
	}
	switch (vParam0.z) {
	case 1:
		if (iLocal_2941 > 4 && iLocal_2941 < 17) {
			if (entity::does_entity_exist(Local_2779[0 /*20*/].f_6)) {
				if (entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					iLocal_2885 = 5;
					return true;
				}
				else if (func_213()) {
					return true;
				}
			}
		}
		if (iLocal_2941 <= 9) {
			if (func_206()) {
				return true;
			}
		}
		switch (iLocal_463) {
		case 3:
		case 1:
		case 0:
			if (bLocal_485) {
				if (!bLocal_2716) {
					if (entity::does_entity_exist(Local_2779[0 /*20*/])) {
						if (entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
							iLocal_2885 = 8;
							return true;
						}
					}
				}
			}
			break;
		}
		break;
	}
	if (!vehicle::does_vehicle_have_stuck_vehicle_check(iLocal_2934)) {
		vehicle::add_vehicle_upsidedown_check(iLocal_2934);
	}
	else if (vehicle::is_vehicle_stuck_on_roof(iLocal_2934)) {
		iLocal_2885 = 4;
		return true;
	}
	if (vehicle::is_vehicle_stuck_timer_up(iLocal_2934, 0, 7000) ||
		vehicle::is_vehicle_stuck_timer_up(iLocal_2934, 1, 40000) ||
		vehicle::is_vehicle_stuck_timer_up(iLocal_2934, 2, 30000) ||
		vehicle::is_vehicle_stuck_timer_up(iLocal_2934, 3, 30000)) {
		iLocal_2885 = 4;
		return true;
	}
	return false;
}

// Position - 0x265B6
bool func_206() {
	if (!bLocal_2707) {
		if (func_208(&uLocal_2901, 180f)) {
			bLocal_2707 = true;
			func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
			func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
			func_495(&Local_2391, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (!iLocal_2752) {
		if (iLocal_2941 == 9) {
			if (bLocal_2707) {
				if (!func_499()) {
					func_207("TOWT_HELP_TM", -1);
					iLocal_2752 = 1;
				}
			}
		}
	}
	if (func_208(&uLocal_2901, 300f)) {
		iLocal_2885 = 14;
		return true;
	}
	return false;
}

// Position - 0x2664E
void func_207(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x26665
bool func_208(var *uParam0, float fParam1) {
	if (func_212(uParam0)) {
		if (func_209(uParam0) > fParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x26687
float func_209(var *uParam0) {
	if (func_212(uParam0)) {
		if (func_211(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_210(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x266C6
float func_210(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0x2671E
bool func_211(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x2672E
bool func_212(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x2673E
bool func_213() {
	bool bVar0;
	bool bVar1;
	char *sVar2;

	bVar0 = false;
	bVar1 = false;
	if (player::get_player_wanted_level(player::player_id()) > 0) {
		return false;
	}
	if (iLocal_463 == 3) {
		bVar0 = true;
	}
	if (iLocal_2941 < 9) {
		bVar1 = true;
	}
	if (bVar1) {
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0) {
		sVar2 = "TOW_DISP_GAR";
	}
	else {
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_215(vLocal_2659[0 /*3*/])) {
		if (!iLocal_2708) {
			if (func_553(vLocal_2659[0 /*3*/], 0) > fLocal_473 + 250f) {
				if (!iLocal_2708) {
					if (func_499()) {
						func_496();
					}
				}
				if (!func_214()) {
					if (func_495(&Local_2391, "TOWAUD", sVar2, 9, 0, 0, 0)) {
						iLocal_2708 = 1;
					}
				}
			}
		}
		if (func_553(vLocal_2659[0 /*3*/], 0) > fLocal_473 + 450f) {
			if (func_214()) {
				iLocal_2885 = 12;
				return true;
			}
			else {
				iLocal_2885 = 11;
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2682E
bool func_214() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1 ||
		script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
		if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (ped::is_ped_in_vehicle(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x26892
bool func_215(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return true;
	}
	return false;
}

// Position - 0x268BC
int func_216() {
	if (vehicle::is_vehicle_tyre_burst(iLocal_2934, 2, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 3, 0) &&
		vehicle::is_vehicle_tyre_burst(iLocal_2934, 1, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 0, 0)) {
		return 1;
	}
	if (vehicle::is_vehicle_tyre_burst(iLocal_2934, 4, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 5, 0) &&
		vehicle::is_vehicle_tyre_burst(iLocal_2934, 1, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 0, 0)) {
		return 1;
	}
	if (vehicle::is_vehicle_tyre_burst(iLocal_2934, 4, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 5, 0) &&
		vehicle::is_vehicle_tyre_burst(iLocal_2934, 2, 0) && vehicle::is_vehicle_tyre_burst(iLocal_2934, 3, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x26973
bool func_217() { return Global_91543.f_303 > 0; }

// Position - 0x26984
void func_218(struct<165> Param0, var *uParam165, int iParam166) {
	if (!iLocal_506) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (iLocal_2648 > 1) {
				if (func_238(uParam165, iParam166)) {
					if (func_499()) {
						Local_520 = {func_498()};
						func_496();
						iLocal_506 = 1;
						iLocal_2648 = 3;
					}
					else {
						iLocal_506 = 1;
						iLocal_2648 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2648) {
	case 0:
		if (!func_499()) {
			system::settimera(0);
			iLocal_2648 = 1;
		}
		break;

	case 1:
		if (system::timera() > 3000 && iLocal_511 && !func_237("TOWT_OBJ_04", 0, 0)) {
			if (!func_499()) {
				func_506(&Param0, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1 ||
					script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
					if (iLocal_463 == 1) {
						func_495(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
						sLocal_526 = "TOW_TRN_C1";
					}
					else if (iLocal_463 == 3) {
						func_495(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
						sLocal_526 = "TOW_BRK_C";
					}
					bLocal_507 = true;
				}
				else if (iLocal_463 == 1) {
					if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1) {
						func_506(&Param0, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
						func_495(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
						sLocal_526 = "TOW_MECH";
					}
					else if (Global_101700.f_18932.f_5 == 2) {
						func_506(&Param0, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_495(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
						sLocal_526 = "TOW_MECH2";
					}
					else {
						func_236(Param0, uParam165);
					}
					bLocal_507 = true;
				}
				else if (iLocal_463 == 3) {
					if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1) {
						func_506(&Param0, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
						func_495(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
						sLocal_526 = "TOW_BRK_CONV";
					}
					else if (Global_101700.f_18932.f_7 == 2) {
						func_506(&Param0, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
						func_495(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
						sLocal_526 = "TOW_BRK_CON2";
					}
					else {
						func_235(Param0, uParam165);
					}
					bLocal_507 = true;
				}
			}
			else if (func_233(sLocal_526)) {
				iLocal_2648 = 2;
			}
		}
		break;

	case 3:
		func_232(Param0, uParam165);
		if (iLocal_508) {
			iLocal_2648 = 2;
		}
		break;

	case 2:
		if (func_231(iParam166)) {
			if (bLocal_507) {
				if (iLocal_506) {
					if (!func_499()) {
						if (func_219(&Local_2391, "TOWAUD", sLocal_526, &Local_520, 8, 0, 0)) {
							iLocal_506 = 0;
							iLocal_2648 = 4;
						}
					}
				}
			}
		}
		break;

	case 4: func_231(iParam166); break;
	}
}

// Position - 0x26C7F
bool func_219(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_230(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_220(sParam2, iParam4, 0);
}

// Position - 0x26CD3
int func_220(char *sParam0, int iParam1, int iParam2) {
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
					func_229();
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
		if (func_228(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_227();
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
				func_225();
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
				if (func_224()) {
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
			if (func_223()) {
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
			func_222();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_221();
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
		func_229();
	}
	return 0;
}

// Position - 0x26F9F
void func_221() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x26FCF
void func_222() {
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

// Position - 0x27064
bool func_223() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x2708B
bool func_224() {
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

// Position - 0x27124
void func_225() {
	if (func_93(14)) {
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
		Global_14443 = func_226();
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

// Position - 0x271C6
int func_226() {
	func_156();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x271DF
void func_227() {
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

// Position - 0x27235
bool func_228(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x27270
void func_229() {
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

// Position - 0x272C7
void func_230(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x2731D
bool func_231(var *uParam0) {
	switch (iLocal_2649) {
	case 1:
		if (player::get_player_wanted_level(player::player_id()) == 0 &&
			!ped::is_ped_shooting(player::player_ped_id())) {
			iLocal_508 = 0;
			return true;
		}
		break;

	case 2: break;

	case 4: break;

	case 6:
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(*uParam0, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), *uParam0, 0)) {
				iLocal_508 = 0;
				return true;
			}
		}
		break;
	}
	return false;
}

// Position - 0x273A7
void func_232(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14,
			  var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21,
			  var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28,
			  var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35,
			  var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42,
			  var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49,
			  var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56,
			  var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63,
			  var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70,
			  var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77,
			  var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84,
			  var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91,
			  var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98,
			  var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105,
			  var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112,
			  var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119,
			  var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126,
			  var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133,
			  var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140,
			  var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147,
			  var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154,
			  var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161,
			  var uParam162, var uParam163, var uParam164, var *uParam165) {
	switch (iLocal_2649) {
	case 1:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("towing")) == 0) {
			if (iLocal_463 == 1) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0)) {
						player::clear_player_has_damaged_at_least_one_non_animal_ped(player::player_id());
						iLocal_508 = 1;
					}
				}
			}
			else if (iLocal_463 == 3) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0)) {
						player::clear_player_has_damaged_at_least_one_non_animal_ped(player::player_id());
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 1) {
			if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_5 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 3) {
			if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_7 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		break;

	case 2:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("towing")) == 0) {
			if (iLocal_463 == 1) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (iLocal_463 == 3) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 1) {
			if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_5 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 3) {
			if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_7 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		break;

	case 4:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("towing")) == 0) {
			if (iLocal_463 == 1) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (iLocal_463 == 3) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 1) {
			if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_5 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 3) {
			if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_7 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		break;

	case 6:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("towing")) == 0) {
			if (iLocal_463 == 1) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (iLocal_463 == 3) {
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 1) {
			if (Global_101700.f_18932.f_5 == 0 || Global_101700.f_18932.f_5 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_5 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		else if (iLocal_463 == 3) {
			if (Global_101700.f_18932.f_7 == 0 || Global_101700.f_18932.f_7 == 1) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
			else if (Global_101700.f_18932.f_7 == 2) {
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_506(&Local_2391, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
				if (!iLocal_508) {
					if (func_495(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0)) {
						iLocal_508 = 1;
					}
				}
			}
		}
		break;
	}
}

// Position - 0x27B7B
bool func_233(char *sParam0) {
	var uVar0;

	if (func_499()) {
		MemCopy(&uVar0, {func_234()}, 4);
		if (gameplay::are_strings_equal(sParam0, &uVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x27BA3
struct<6> func_234() {
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		return Global_15364;
	}
	return Var0;
}

//Position - 0x27BC7
void func_235(var* uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var* uParam165)
{
	int iVar0;

	iVar0 = gameplay::get_random_int_in_range(0, 65535) % 4;
	if (iVar0 == 0) {
		func_506(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_495(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_526 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1) {
		func_506(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_495(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_526 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2) {
		func_506(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_495(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_526 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3) {
		func_506(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_495(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_526 = "TOW_GEN_MCH4";
	}
}

// Position - 0x27CAD
void func_236(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14,
			  var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21,
			  var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28,
			  var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35,
			  var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42,
			  var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49,
			  var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56,
			  var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63,
			  var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70,
			  var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77,
			  var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84,
			  var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91,
			  var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98,
			  var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105,
			  var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112,
			  var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119,
			  var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126,
			  var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133,
			  var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140,
			  var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147,
			  var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154,
			  var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161,
			  var uParam162, var uParam163, var uParam164, var *uParam165) {
	func_506(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_495(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_526 = "TOW_GEN_MCH2";
}

// Position - 0x27CE1
bool func_237(char *sParam0, int iParam1, char *sParam2) {
	ui::begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1) {
		ui::add_text_component_substring_text_label(sParam2);
	}
	return ui::end_text_command_is_message_displayed();
}

// Position - 0x27CFF
bool func_238(var *uParam0, var *uParam1) {
	if (player::get_player_wanted_level(player::player_id()) > 0 || ped::is_ped_shooting(player::player_ped_id())) {
		if (player::has_player_damaged_at_least_one_non_animal_ped(player::player_id())) {
			player::clear_player_has_damaged_at_least_one_non_animal_ped(player::player_id());
		}
		iLocal_2649 = 1;
		return true;
	}
	if (entity::does_entity_exist((*uParam0)[0 /*20*/].f_6) && !entity::is_entity_dead((*uParam0)[0 /*20*/].f_6, 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!bLocal_470) {
			if (entity::has_entity_been_damaged_by_entity((*uParam0)[0 /*20*/].f_6, player::player_ped_id(), 1) ||
				entity::has_entity_been_damaged_by_any_object((*uParam0)[0 /*20*/].f_6) ||
				entity::has_entity_been_damaged_by_any_ped((*uParam0)[0 /*20*/].f_6)) {
				iLocal_2649 = 2;
				return true;
			}
		}
	}
	if (entity::does_entity_exist((*uParam0)[0 /*20*/]) && !entity::is_entity_dead((*uParam0)[0 /*20*/], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (entity::has_entity_been_damaged_by_entity(player::player_ped_id(), (*uParam0)[0 /*20*/], 1)) {
			iLocal_2649 = 4;
			return true;
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(*uParam1, 0)) {
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), *uParam1, 0)) {
			iLocal_2649 = 6;
			return true;
		}
	}
	return false;
}

// Position - 0x27E28
void func_239() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1 ||
		script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
		return;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
		!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		if (entity::has_entity_been_damaged_by_entity(Local_2779[0 /*20*/].f_6, player::player_ped_id(), 1)) {
			if (!func_499()) {
				if (!iLocal_2756) {
					if (func_495(&Local_2391, "TOWAUD", "TONYA_CARDAM", 8, 1, 0, 0)) {
						iLocal_2756 = 1;
					}
				}
			}
		}
	}
}

// Position - 0x27EBE
bool func_240(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var *uParam9) {
	int *iVar0;
	char *sVar1;
	var *uVar2;
	var *uVar5;
	vector3 vVar8;
	var *uVar11;
	float fVar12;

	if (iLocal_2941 > 2) {
		if (iLocal_2737) {
			func_424();
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 248, 1);
	}
	switch (iLocal_2941) {
	case 1:
		audio::set_veh_radio_station(iLocal_2934, "RADIO_03_HIPHOP_NEW");
		if (!entity::is_entity_dead(iLocal_2934, 0)) {
			vehicle::set_vehicle_doors_locked(iLocal_2934, 9);
		}
		if (entity::does_entity_exist(iLocal_2766) && !entity::is_entity_dead(iLocal_2766, 0)) {
			if (ped::is_ped_in_group(iLocal_2766)) {
				ped::remove_ped_from_group(iLocal_2766);
			}
		}
		if (iLocal_463 == 1) {
			func_423();
		}
		func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
		func_506(&Local_2391, 3, iLocal_2766, "TONYA", 0, 1);
		func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
		func_382(1, "towing_tonya_franklin_towing", 1, 0, 0, 1);
		if (iLocal_463 == 3) {
			if (func_381(&vLocal_2858, &fLocal_2861, &uLocal_2842, &uLocal_2845)) {
				if (!func_212(&uLocal_2916)) {
					func_508(&uLocal_2916);
				}
				else {
					func_379(&uLocal_2916);
				}
				iLocal_2941 = 2;
			}
		}
		else {
			if (!func_212(&uLocal_2916)) {
				func_508(&uLocal_2916);
			}
			else {
				func_379(&uLocal_2916);
			}
			iLocal_2941 = 2;
		}
		break;

	case 2:
		if (iLocal_463 == 3) {
			Local_693[iLocal_2647 /*23*/].f_1 = {-476.1537f, 132.6556f, 62.9586f};
		}
		if (!ui::does_blip_exist(Local_2779[0 /*20*/].f_8)) {
			if (!iLocal_504) {
				Local_2779[0 /*20*/].f_8 = ui::add_blip_for_coord(Local_693[iLocal_2647 /*23*/].f_1);
				ui::set_blip_colour(Local_2779[0 /*20*/].f_8, 3);
				ui::set_blip_route(Local_2779[0 /*20*/].f_8, 1);
				ui::set_blip_name_from_text_file(Local_2779[0 /*20*/].f_8, "TOW_BLIP_VEH");
			}
			vLocal_2659[0 /*3*/] = {Local_693[iLocal_2647 /*23*/].f_1};
		}
		if (func_212(&uLocal_2916)) {
			if (func_209(&uLocal_2916) > fLocal_2862) {
				if (!ui::is_message_being_displayed()) {
					switch (iLocal_463) {
					case 3:
						func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
						func_506(&Local_2391, 3, 0, "TOWDISPATCH", 0, 1);
						if (func_495(&Local_2391, "TOWAUD", "TOW_ACC_EXP", 9, 0, 0, 0)) {
							iLocal_2941 = 3;
						}
						break;

					case 2:
						func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
						func_506(&Local_2391, 3, iLocal_2766, "TONYA", 0, 1);
						func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
						if (func_495(&Local_2391, "TOWAUD", "TOW_ABN_EXP", 9, 0, 0, 0)) {
							iLocal_2941 = 3;
						}
						break;

					case 0:
						func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
						func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_495(&Local_2391, "TOWAUD", "TOW_HAN_EXP", 9, 0, 0, 0)) {
							iLocal_2941 = 3;
						}
						break;

					case 1:
						func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
						func_506(&Local_2391, 3, 0, "TOWDISPATCH", 0, 1);
						if (iLocal_2647 == 28) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0)) {
								iLocal_2941 = 3;
							}
						}
						else if (func_495(&Local_2391, "TOWAUD", "TOW_TRN_EXP", 9, 0, 0, 0)) {
							iLocal_2941 = 3;
						}
						break;

					case 4:
						func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
						func_506(&Local_2391, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_495(&Local_2391, "TOWAUD", "TOW_ACD_EXP", 9, 0, 0, 0)) {
							iLocal_2941 = 3;
						}
						break;
					}
				}
			}
		}
		break;

	case 3:
		if (!bLocal_2736) {
			if (iLocal_463 == 2) {
				sLocal_2940 = "TOWT_OBJ_AB";
			}
			else if (iLocal_463 == 0) {
				sLocal_2940 = "TOWT_OBJ_01B";
			}
			else if (iLocal_463 == 1) {
				sLocal_2940 = "TOWT_OBJ_TR";
			}
			else if (iLocal_463 == 3) {
				sLocal_2940 = "TOWT_OBJ_01";
			}
			else if (iLocal_463 == 4) {
				sLocal_2940 = "TOWT_OBJ_CC";
			}
			StringCopy(&cLocal_2863, sLocal_2940, 64);
			if (!func_499() && !iLocal_504) {
				func_378(sLocal_2940, 7500, 1);
				bLocal_2736 = true;
			}
		}
		if (!iLocal_2737) {
			if (bLocal_2736) {
				if (!ui::is_message_being_displayed()) {
					func_508(&uLocal_2901);
					iLocal_2737 = 1;
				}
			}
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vVar8 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		fVar12 = system::vdist(vVar8, Local_693[iLocal_2647 /*23*/].f_1);
		func_377();
		func_332();
		func_331();
		if (fVar12 < 250f) {
			if (func_313(&uParam0, uParam9)) {
				iLocal_2941 = 4;
			}
		}
		break;

	case 4:
		switch (iLocal_463) {
		case 3:
			if (func_306("TOWT_OBJ_01", "TOWT_HELP_01", &iVar0, 1, 0)) {
				if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					vehicle::set_vehicle_doors_locked(Local_2779[0 /*20*/].f_6, 10);
				}
				func_304();
				iLocal_2941 = 6;
			}
			break;

		case 2:
			if (func_306("TOWT_OBJ_AB", "TOWT_HELP_AB", &iVar0, 0, 0)) {
				vLocal_2666 = {vLocal_2659[0 /*3*/] + 15f, vLocal_2659[0 /*3*/].f_1 + 15f,
							   vLocal_2659[0 /*3*/].f_2 + 15f};
				vLocal_2669 = {vLocal_2659[0 /*3*/] - 15f, vLocal_2659[0 /*3*/].f_1 - 15f,
							   vLocal_2659[0 /*3*/].f_2 - 15f};
				iLocal_2715 = 1;
				vehicle::set_vehicle_undriveable(Local_2779[0 /*20*/].f_6, 1);
				iLocal_2941 = 6;
			}
			break;

		case 0:
			if (func_306("TOWT_OBJ_01B", "TOWT_HELP_03", &iVar0, 0, 0)) {
				vehicle::set_vehicle_doors_locked(Local_2779[0 /*20*/].f_6, 2);
				iLocal_2941 = 6;
			}
			break;

		case 1:
			if (func_306("TOWT_OBJ_TR", "TOWT_HELP_TR", &iVar0, 0, 1)) {
				vehicle::set_vehicle_undriveable(Local_2779[0 /*20*/].f_6, 1);
				vehicle::set_vehicle_doors_locked(Local_2779[0 /*20*/].f_6, 3);
				func_304();
				iLocal_2941 = 6;
			}
			break;

		case 4:
			if (func_306("TOWT_OBJ_CC", "TOWT_HELP_04", &iVar0, 0, 0)) {
				vehicle::set_vehicle_undriveable(Local_2779[0 /*20*/].f_6, 1);
				func_304();
				iLocal_2941 = 6;
			}
			break;

		default: break;
		}
		break;

	case 5:
		if (func_296(&iLocal_2943, 0, "TOW_BREAK1")) {
			iLocal_2941 = 7;
		}
		break;

	case 6:
		if (iLocal_463 == 3) {
			iLocal_2941 = 5;
		}
		else {
			iLocal_2941 = 7;
		}
		break;

	case 7:
		func_295();
		switch (iLocal_463) {
		case 3:
		case 1:
		case 4: sVar1 = "TOWT_OBJ_04"; break;

		case 2:
		case 0:
			if (func_215(vLocal_2663)) {
				vLocal_2663 = {vLocal_113[0 /*3*/]};
			}
			func_294(8, &Local_2800);
			sVar1 = "TOWT_OBJ_06";
			break;
		}
		if (iLocal_463 == 1 && !ped::is_ped_in_vehicle(Local_2779[0 /*20*/], iLocal_2934, 0)) {
			iLocal_2711 = 1;
		}
		if (iLocal_2727) {
			if (!iLocal_2728) {
				if (!func_499()) {
					func_378("TOWT_OBJ_03Ga", 7500, 1);
					StringCopy(&cLocal_2863, "TOWT_OBJ_03Ga", 64);
					iLocal_2728 = 1;
				}
			}
		}
		else if (iLocal_2735 && !iLocal_2727) {
			if (bLocal_2713) {
				if (!func_292(&uVar2, &uVar5, &uVar11)) {
					if (func_495(&Local_2391, "TOWAUD", "TONYA_DETACH", 9, 0, 0, 0)) {
						iLocal_2727 = 1;
					}
				}
			}
			else if (!func_292(&uVar2, &uVar5, &uVar11)) {
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_LOSTCAR", 9, 0, 0, 0)) {
						iLocal_2727 = 1;
					}
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_CAR_UNHO", 9, 0, 0, 0)) {
						iLocal_2727 = 1;
					}
				}
			}
		}
		if (Global_101700.f_18932.f_3 == 1 || Global_101700.f_18932.f_3 == 2) {
			func_291();
		}
		func_290();
		if (func_215(vLocal_2851)) {
			if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				vLocal_2851 = {entity::get_entity_coords(Local_2779[0 /*20*/].f_6, 1)};
			}
		}
		func_331();
		if (!iLocal_504) {
			if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				vehicle::_0x2B6747FAA9DB9D6B(Local_2779[0 /*20*/].f_6, 0);
			}
			if (func_283(sVar1, vLocal_2663)) {
				iLocal_2735 = 0;
				iLocal_2727 = 0;
				iLocal_2728 = 0;
				if (iLocal_463 == 1 && !ped::is_ped_in_vehicle(Local_2779[0 /*20*/], iLocal_2934, 0)) {
					iLocal_2711 = 0;
					iLocal_2709 = 1;
					if (entity::does_entity_exist(Local_2779[0 /*20*/])) {
						Local_2779[0 /*20*/].f_9 = ui::add_blip_for_entity(Local_2779[0 /*20*/]);
						ui::set_blip_colour(Local_2779[0 /*20*/].f_9, 3);
						ui::set_blip_scale(Local_2779[0 /*20*/].f_9, 0.7f);
					}
					iLocal_2941 = 5;
				}
				else {
					object::_door_control(joaat("prop_facgate_08"), 414.951f, -1623.813f, 28.2928f, 0, 1f, 0f, 0f);
					object::_door_control(joaat("prop_facgate_08"), 415.484f, -1653.171f, 28.2928f, 0, 1f, 0f, 0f);
					iLocal_2941 = 9;
				}
			}
		}
		else if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			vehicle::_0x2B6747FAA9DB9D6B(Local_2779[0 /*20*/].f_6, 1);
		}
		if (func_292(&uVar2, &uVar5, &uVar11)) {
			iLocal_2694 = 1;
			iLocal_2941 = 9;
		}
		break;

	case 9:
		if (iLocal_463 == 3) {
			sVar1 = "TOWT_OBJ_03a";
		}
		else {
			sVar1 = "TOWT_OBJ_03Ga";
		}
		func_282();
		if (!iLocal_504) {
			func_281();
			func_280();
			func_331();
			if (func_277(sVar1)) {
				vehicle::set_vehicle_automatically_attaches(Local_2779[0 /*20*/].f_6, 0, 0);
				vehicle::set_vehicle_doors_locked(Local_2779[0 /*20*/].f_6, 2);
				vehicle::_0x02398B627547189C(iLocal_2934, 0);
				if (iLocal_2821 == 0) {
					iLocal_2698 = 0;
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1 ||
						script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
						if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
							entity::is_entity_in_angled_area(player::player_ped_id(), 395.9464f, -1647.359f, 26.29278f,
															 414.9789f, -1624f, 35.29278f, 23.25f, 0, 1, 0)) {
							iLocal_2941 = 12;
						}
						else {
							iLocal_2941 = 14;
						}
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1 ||
							 script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
						iLocal_2941 = 13;
					}
					else {
						iLocal_2941 = 11;
					}
				}
			}
		}
		else if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			iLocal_511 = vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6);
		}
		break;

	case 14:
		if (func_276()) {
			iLocal_2941 = 12;
		}
		break;

	case 11:
		if (func_273()) {
			iLocal_2941 = 12;
		}
		break;

	case 12:
		if (ui::does_blip_exist(iLocal_2769)) {
			ui::remove_blip(&iLocal_2769);
		}
		func_272();
		vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1) {
			if (!bLocal_2733) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDa", 9, 0, 0, 0)) {
					bLocal_2733 = true;
				}
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
			if (!bLocal_2733) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDb", 9, 0, 0, 0)) {
					bLocal_2733 = true;
				}
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			if (!bLocal_2733) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDc", 9, 0, 0, 0)) {
					bLocal_2733 = true;
				}
			}
		}
		if (bLocal_2733) {
			if (!func_499()) {
				ai::clear_sequence_task(&iLocal_464);
				ai::open_sequence_task(&iLocal_464);
				ai::task_leave_any_vehicle(0, 0, 0);
				ai::close_sequence_task(iLocal_464);
				if (!entity::is_entity_dead(iLocal_2766, 0)) {
					ai::task_perform_sequence(iLocal_2766, iLocal_464);
					ped::set_ped_keep_task(iLocal_2766, 1);
				}
				iLocal_2941 = 15;
			}
		}
		break;

	case 13:
		if (func_269()) {
			iLocal_2941 = 15;
		}
		break;

	case 15:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			func_272();
		}
		func_268();
		ui::clear_help(1);
		if (iLocal_515 > 0) {
			func_242(func_226(), 1, iLocal_515, 0, 0);
		}
		if (!func_212(&uLocal_2925)) {
			func_508(&uLocal_2925);
		}
		iLocal_2941 = 17;
		break;

	case 17:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			func_272();
		}
		if (func_212(&uLocal_2925)) {
			if (func_209(&uLocal_2925) > 3f) {
				func_241();
				return true;
			}
		}
		break;
	}
	uLocal_513 = uLocal_513;
	iLocal_2694 = iLocal_2694;
	fLocal_472 = fLocal_472;
	vLocal_113[0 /*3*/] = {vLocal_113[0 /*3*/]};
	return false;
}

// Position - 0x28B39
void func_241() {
	controls::enable_control_action(0, 71, 1);
	controls::enable_control_action(0, 72, 1);
	controls::enable_control_action(0, 76, 1);
	controls::enable_control_action(0, 73, 1);
	controls::enable_control_action(0, 59, 1);
	controls::enable_control_action(0, 60, 1);
	controls::enable_control_action(0, 75, 1);
	controls::enable_control_action(0, 80, 1);
	controls::enable_control_action(0, 69, 1);
	controls::enable_control_action(0, 70, 1);
	controls::enable_control_action(0, 68, 1);
	controls::enable_control_action(0, 74, 1);
	controls::enable_control_action(0, 86, 1);
	controls::enable_control_action(0, 81, 1);
	controls::enable_control_action(0, 82, 1);
}

// Position - 0x28BB9
void func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_243(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0x28CA0
int func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_267();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_266(99, 1);
			func_265(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_265(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_265(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_251(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_250(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_265(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_265(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_265(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_250(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_265(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_265(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_265(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_265(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_265(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_265(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_265(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_265(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_265(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_265(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_265(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_265(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_265(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_265(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_265(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_250(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_265(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_265(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_265(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_265(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_265(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_265(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_249(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_266(95, iParam3); break;

		case 1: func_266(97, iParam3); break;

		case 2: func_266(96, iParam3); break;
		}
		func_266(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_246(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_246(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_265(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_265(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_265(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_245(iParam0);
	if (Global_35781 == 15) {
		func_244(0);
	}
	return 1;
}

// Position - 0x2929F
void func_244(int iParam0) {
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

// Position - 0x29521
void func_245(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x2957B
void func_246(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_247(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x2963C
char *func_247(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x296B5
int func_248() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x296C2
void func_249(int iParam0) {
	func_266(93, iParam0);
	func_266(29, iParam0);
	func_266(30, iParam0);
}

// Position - 0x296E2
bool func_250(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x2971E
int func_251(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_11(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_252(27, 1);
	return 1;
}

// Position - 0x297D5
int func_252(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_253(iParam0, iParam1);
}

// Position - 0x297F0
int func_253(int iParam0, int iParam1) {
	if (func_93(14) && !func_264(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_263(&Global_2595550)) {
		if (func_261(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_254(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x2988D
bool func_254(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_93(14) && !func_264(iParam1)) {
		return false;
	}
	if (func_261(uParam0, iParam1)) {
		return false;
	}
	if (func_260(uParam0) < 0f) {
		func_259(uParam0, 0);
	}
	func_257(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_255(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x2993E
int func_255(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_93(14) && !func_264(iParam1)) {
		return 0;
	}
	if (func_261(uParam0, iParam1)) {
		return 0;
	}
	if (func_260(uParam0) < 0f) {
		func_259(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_256(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x299B9
bool func_256(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x299CA
void func_257(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_258(uParam0, iVar0);
		iVar0++;
	}
	func_259(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x299FE
void func_258(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x29A0E
void func_259(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x29A2B
float func_260(var *uParam0) { return uParam0->f_72; }

// Position - 0x29A37
bool func_261(var *uParam0, int iParam1) { return func_262(uParam0, iParam1) != -1; }

// Position - 0x29A49
int func_262(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x29A76
bool func_263(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x29A84
int func_264(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x29AD4
void func_265(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x29AF7
void func_266(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x29B54
void func_267() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x29BC9
void func_268() {
	Global_101700.f_18932.f_3++;
	Global_101700.f_18932.f_2 = iLocal_463;
	switch (iLocal_463) {
	case 2: Global_101700.f_18932.f_4++; break;

	case 3: Global_101700.f_18932.f_7++; break;

	case 0: Global_101700.f_18932.f_6++; break;

	case 1: Global_101700.f_18932.f_5++; break;

	case 4: Global_101700.f_18932.f_8++; break;
	}
}

// Position - 0x29C8A
bool func_269() {
	if (!func_212(&uLocal_2922)) {
		func_508(&uLocal_2922);
	}
	if (func_212(&uLocal_2922)) {
		if (func_209(&uLocal_2922) > 7f) {
			if (!iLocal_2729) {
				if (!func_499()) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
					}
					func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
					func_506(&Local_2391, 3, 0, "TONYA", 0, 1);
					if (Global_101700.f_18932.f_3 == 2) {
						func_271(&Local_2391, 103, "TOWAUD", "TONYA_WRAP3", 14, 1, 0, 0, 0);
					}
					else if (Global_101700.f_18932.f_3 == 3) {
						func_271(&Local_2391, 103, "TOWAUD", "TONYA_WRAP4", 14, 1, 0, 0, 0);
					}
					iLocal_2729 = 1;
				}
			}
		}
	}
	if (iLocal_2729 && func_270()) {
		return true;
	}
	return false;
}

// Position - 0x29D6D
int func_270() {
	if (Global_15745 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x29D84
int func_271(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7, int iParam8) {
	func_230(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1) {
		Global_15757 = 1;
	}
	else {
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_220(sParam3, iParam4, iParam8);
}

// Position - 0x29DE3
void func_272() {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	controls::disable_control_action(0, 80, 1);
	controls::disable_control_action(0, 69, 1);
	controls::disable_control_action(0, 70, 1);
	controls::disable_control_action(0, 68, 1);
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
}

// Position - 0x29E5B
bool func_273() {
	func_275();
	switch (iLocal_2837) {
	case 0:
		vLocal_2659[0 /*3*/] = {406.3804f, -1635.867f, 28.2928f};
		fLocal_473 = func_553(vLocal_2659[0 /*3*/], 0);
		func_274(iLocal_2769);
		iLocal_2769 = ui::add_blip_for_coord(406.3804f, -1635.867f, 28.2928f);
		ui::set_blip_route(iLocal_2769, 1);
		if (!func_212(&uLocal_2919)) {
			func_508(&uLocal_2919);
		}
		else {
			func_379(&uLocal_2919);
		}
		iLocal_2837 = 1;
		break;

	case 1:
		if (!bLocal_2733) {
			if (!ui::is_message_being_displayed()) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_DROPS", 9, 0, 0, 0)) {
					bLocal_2733 = true;
				}
			}
		}
		else if (!iLocal_2741) {
			if (!func_499()) {
				func_378("TOWT_DRIVE", 7500, 1);
				iLocal_2741 = 1;
			}
		}
		if (!iLocal_2739 && bLocal_2733) {
			if (func_212(&uLocal_2919)) {
				if (func_209(&uLocal_2919) > 25f) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_LASTCHAT", 9, 0, 0, 0)) {
						iLocal_2739 = 1;
					}
				}
			}
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
			!entity::is_entity_dead(iLocal_2934, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
				ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
				if (entity::is_entity_at_coord(player::player_ped_id(), 406.3804f, -1635.867f, 28.2928f, 5f, 5f, 2f, 1,
											   1, 0)) {
					if (ui::does_blip_exist(iLocal_2769)) {
						ui::remove_blip(&iLocal_2769);
					}
					vehicle::_set_vehicle_halt(iLocal_2934, 5f, 1, 0);
					vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
					func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
					return true;
				}
			}
		}
		break;

	case 2:
		if (!entity::is_entity_dead(iLocal_2766, 0) && !entity::is_entity_dead(iLocal_2934, 0)) {
			if (!ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
				return true;
			}
		}
		break;

	case 3: break;
	}
	return false;
}

// Position - 0x2A064
void func_274(int iParam0) {
	if (ui::does_blip_exist(iParam0)) {
		ui::remove_blip(&iParam0);
	}
}

// Position - 0x2A07B
void func_275() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2934, 0)) {
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0)) {
			if (ui::does_blip_exist(iLocal_2769)) {
				ui::remove_blip(&iLocal_2769);
			}
			if (!ui::does_blip_exist(iLocal_2767)) {
				iLocal_2767 = ui::add_blip_for_entity(iLocal_2934);
				ui::set_blip_colour(iLocal_2767, 3);
			}
		}
		else {
			if (!ui::does_blip_exist(iLocal_2769)) {
				func_274(iLocal_2769);
				iLocal_2769 = ui::add_blip_for_coord(406.3804f, -1635.867f, 28.2928f);
				ui::set_blip_route(iLocal_2769, 1);
			}
			if (ui::does_blip_exist(iLocal_2767)) {
				ui::remove_blip(&iLocal_2767);
			}
		}
	}
}

// Position - 0x2A120
bool func_276() {
	switch (iLocal_2840) {
	case 0:
		ui::clear_help(1);
		if (!ui::does_blip_exist(iLocal_2769)) {
			func_274(iLocal_2769);
			iLocal_2769 = ui::add_blip_for_coord(406.3804f, -1635.867f, 28.2928f);
			ui::set_blip_route(iLocal_2769, 1);
		}
		func_378("TOWT_DRIVE", 7500, 1);
		iLocal_2840 = 1;
		break;

	case 1:
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
			!entity::is_entity_dead(iLocal_2934, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
				ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 398.9666f, -1641.233f, 27.29277f,
													 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0)) {
					if (ui::does_blip_exist(iLocal_2769)) {
						ui::remove_blip(&iLocal_2769);
					}
					vehicle::_set_vehicle_halt(iLocal_2934, 5f, 1, 0);
					vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
					iLocal_2840 = 2;
				}
			}
		}
		break;

	case 2: return true;
	}
	return false;
}

// Position - 0x2A235
bool func_277(char *sParam0) {
	var *uVar0;
	var *uVar3;
	var *uVar6;

	if (iLocal_2820 == -1) {
	}
	if (Local_2779[iLocal_2820 /*20*/].f_15) {
		if (func_209(&Local_2779[iLocal_2820 /*20*/].f_11) - Local_2779[iLocal_2820 /*20*/].f_14 > 120f) {
			vehicle::explode_vehicle(Local_2779[iLocal_2820 /*20*/].f_6, 1, 0);
		}
	}
	if (func_292(&uVar0, &uVar3, &uVar6)) {
		if (!entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/], 0) &&
				ped::is_ped_in_vehicle(Local_2779[iLocal_2820 /*20*/], iLocal_2934, 0) ||
			!entity::is_entity_dead(iLocal_2766, 0) && ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
			vehicle::_set_vehicle_halt(iLocal_2934, 6f, 2, 0);
			iLocal_509 = 1;
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
				if (entity::does_entity_exist(Local_2779[iLocal_2820 /*20*/]) &&
					!entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/], 0)) {
					ai::open_sequence_task(&iLocal_464);
					ai::task_clear_look_at(0);
					ai::task_leave_any_vehicle(0, 0, 0);
					ai::task_follow_nav_mesh_to_coord(0, 538.5295f, -174.2699f, 53.493f, 1f, 20000, 0.25f, 0, 64.6725f);
					ai::task_start_scenario_in_place(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					ai::close_sequence_task(iLocal_464);
					ai::task_perform_sequence(Local_2779[iLocal_2820 /*20*/], iLocal_464);
					ai::clear_sequence_task(&iLocal_464);
					ped::set_ped_keep_task(Local_2779[iLocal_2820 /*20*/], 1);
				}
			}
			else if (entity::does_entity_exist(Local_2779[iLocal_2820 /*20*/]) &&
					 !entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/], 0)) {
				ai::open_sequence_task(&iLocal_464);
				ai::task_clear_look_at(0);
				ai::task_leave_any_vehicle(0, 0, 0);
				ai::task_follow_nav_mesh_to_coord(0, -215.5652f, -1385.4f, 30.2583f, 1f, 20000, 0.25f, 0, 234.3862f);
				ai::task_start_scenario_in_place(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				ai::close_sequence_task(iLocal_464);
				ai::task_perform_sequence(Local_2779[iLocal_2820 /*20*/], iLocal_464);
				ai::clear_sequence_task(&iLocal_464);
				ped::set_ped_keep_task(Local_2779[iLocal_2820 /*20*/], 1);
			}
			if (func_499()) {
				func_452();
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 398.9666f, -1641.233f, 27.29277f,
													 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0)) {
					if (!bLocal_2733) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDa", 9, 0, 0, 0)) {
							bLocal_2733 = true;
						}
					}
				}
			}
			else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 398.9666f, -1641.233f, 27.29277f,
													 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0)) {
					if (!bLocal_2733) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_TUT_ENDb", 9, 0, 0, 0)) {
							bLocal_2733 = true;
						}
					}
				}
			}
			else if (iLocal_463 == 3) {
				func_495(&Local_2391, "TOWAUD", "TOW_BREAK2", 9, 0, 0, 0);
			}
			else if (iLocal_463 == 1) {
				func_495(&Local_2391, "TOWAUD", "TOW_TRAIN_TK", 9, 0, 0, 0);
			}
		}
		if (!bLocal_2713) {
		}
		iLocal_511 = 0;
		ui::remove_blip(&Local_2779[iLocal_2820 /*20*/].f_8);
		func_379(&uLocal_2889);
		iLocal_2821--;
		return true;
	}
	else {
		func_279();
	}
	if (!bLocal_2696) {
		if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/].f_6, 0)) {
			if (!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[iLocal_2820 /*20*/].f_6)) {
				iLocal_511 = 0;
				func_433(&iLocal_442, 0, 0);
				iLocal_2735 = 1;
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1) {
					func_278(829);
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
					func_278(832);
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1) {
					func_278(835);
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
					func_278(838);
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
					func_278(841);
				}
				if (ui::does_blip_exist(Local_2779[iLocal_2820 /*20*/].f_8)) {
					ui::set_blip_route(Local_2779[iLocal_2820 /*20*/].f_8, 0);
					ui::remove_blip(&Local_2779[iLocal_2820 /*20*/].f_8);
				}
				if (entity::does_entity_exist(Local_2779[iLocal_2820 /*20*/].f_6) &&
					!entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/].f_6, 0)) {
					if (!ui::does_blip_exist(Local_2779[iLocal_2820 /*20*/].f_8)) {
						Local_2779[iLocal_2820 /*20*/].f_8 =
							ui::add_blip_for_entity(Local_2779[iLocal_2820 /*20*/].f_6);
						ui::set_blip_colour(Local_2779[iLocal_2820 /*20*/].f_8, 3);
					}
				}
				if (func_499()) {
					Local_2879 = {func_498()};
					func_496();
					iLocal_2734 = 1;
				}
				if (bLocal_2742) {
					if (!iLocal_2727) {
						if (func_495(&Local_2391, "TOWAUD", "TONYA_DETACH", 9, 0, 0, 0)) {
							iLocal_2727 = 1;
						}
					}
				}
				else if (iLocal_463 == 1) {
					if (!iLocal_2727) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_LOSTCAR", 9, 0, 0, 0)) {
							iLocal_2727 = 1;
						}
					}
				}
				else if (iLocal_463 == 3) {
					if (!iLocal_2727) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_CAR_UNHO", 9, 0, 0, 0)) {
							iLocal_2727 = 1;
						}
					}
				}
				func_379(&uLocal_2889);
				if (!iLocal_2711) {
					if (!func_499()) {
						if (iLocal_2690) {
							ui::clear_prints();
							func_378(sParam0, 7500, 1);
							iLocal_2690 = 0;
						}
						else {
							ui::clear_prints();
							func_378(sParam0, 7500, 1);
						}
						StringCopy(&cLocal_2863, sParam0, 64);
					}
				}
				else {
					StringCopy(&cLocal_2863, sParam0, 64);
				}
				iLocal_2941 = 7;
			}
		}
	}
	return false;
}

// Position - 0x2A7A2
void func_278(int iParam0) {
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

// Position - 0x2A813
void func_279() {
	vector3 vVar0;
	vector3 vVar3;

	if (iLocal_2749) {
		return;
	}
	if (bLocal_2713) {
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1 ||
		script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
		if (!entity::is_entity_at_coord(player::player_ped_id(), 402.5694f, -1632.391f, 28.2928f, 50f, 50f, 50f, 0, 1,
										0)) {
			return;
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		vVar3 = {entity::get_entity_coords(Local_2779[0 /*20*/].f_6, 1)};
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
		if (!iLocal_2749) {
			if (system::vdist2(vVar0, -227.7806f, -1170.663f, 21.8945f) < 400f) {
				if (func_209(&uLocal_2928) > 90f) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_WAITING3", 9, 0, 0, 0)) {
						iLocal_2749 = 1;
					}
				}
			}
		}
	}
	if (system::vdist2(vVar0, vVar3) < 400f) {
		if (!func_212(&uLocal_2928)) {
			func_508(&uLocal_2928);
		}
		else {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1) {
				if (func_209(&uLocal_2928) > 25f) {
					if (!iLocal_2749) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0)) {
							iLocal_2749 = 1;
						}
					}
				}
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
				if (func_209(&uLocal_2928) > 20f) {
					if (!iLocal_2749) {
						if (func_495(&Local_2391, "TOWAUD", "TOW_WAIT3", 9, 0, 0, 0)) {
							iLocal_2749 = 1;
						}
					}
				}
			}
		}
	}
}

// Position - 0x2A9BF
void func_280() {
	if (!iLocal_2738) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 399.8853f, -1649.835f, 27.29447f,
													 432.559f, -1612.316f, 35.34176f, 35f, 0, 1, 0)) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_DROP", 8, 0, 0, 0)) {
						iLocal_2738 = 1;
					}
				}
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -233.3394f, -1183.598f, 21.07301f,
													 -232.1382f, -1141.946f, 29.08136f, 29.25f, 0, 1, 0)) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_SHOP", 8, 0, 0, 0)) {
						iLocal_2738 = 1;
					}
				}
			}
		}
	}
}

// Position - 0x2AA9D
void func_281() {
	vector3 vVar0;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
		if (!bLocal_2740) {
			if (func_495(&Local_2391, "TOWAUD", "TOW_REPAIR", 9, 0, 0, 0)) {
				bLocal_2740 = true;
			}
		}
		else if (bLocal_2740) {
			if (!iLocal_2743) {
				if (!func_499()) {
					func_378("TOWT_OBJ_04", 7500, 1);
					iLocal_2743 = 1;
				}
			}
		}
	}
	if (system::vdist2(vLocal_2851, vVar0) > 10000f) {
		switch (Global_101700.f_18932.f_3) {
		case 0:
			if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
				!entity::is_entity_dead(iLocal_2934, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
					ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
					if (!iLocal_2730) {
						if (!func_499()) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_TALK", 8, 0, 0, 0)) {
								iLocal_2730 = 1;
							}
						}
					}
					else if (iLocal_2734) {
						if (func_219(&Local_2391, "TOWAUD", "TOW_TALK", &Local_2879, 8, 0, 0)) {
							iLocal_2734 = 0;
						}
					}
				}
			}
			break;

		case 1:
			if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
				!entity::is_entity_dead(iLocal_2934, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
					ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
					if (!iLocal_2730) {
						if (!func_499()) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_TALK2", 8, 0, 0, 0)) {
								iLocal_2730 = 1;
							}
						}
					}
					else if (iLocal_2734) {
						if (func_219(&Local_2391, "TOWAUD", "TOW_TALK2", &Local_2879, 8, 0, 0)) {
							iLocal_2734 = 0;
						}
					}
				}
			}
			break;

		case 4:
			if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2766, 0) &&
				!entity::is_entity_dead(iLocal_2934, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
					ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
					if (!iLocal_2730) {
						if (!func_499()) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_CHAT2", 8, 0, 0, 0)) {
								iLocal_2730 = 1;
							}
						}
					}
					else if (iLocal_2734) {
						if (func_219(&Local_2391, "TOWAUD", "TOW_CHAT2", &Local_2879, 8, 0, 0)) {
							iLocal_2734 = 0;
						}
					}
				}
			}
			break;
		}
	}
}

// Position - 0x2AD1D
void func_282() {
	vector3 vVar0;
	int iVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (iLocal_463 == 0) {
		if (system::vdist2(vVar0, Local_693[iLocal_2647 /*23*/].f_1) > 22500f) {
			if (entity::does_entity_exist(Local_2779[0 /*20*/]) && !entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
				if (entity::is_entity_occluded(Local_2779[0 /*20*/])) {
					ped::delete_ped(&Local_2779[0 /*20*/]);
				}
				else {
					entity::set_ped_as_no_longer_needed(&Local_2779[0 /*20*/]);
				}
			}
			streaming::remove_anim_dict("oddjobs@towing");
			streaming::remove_anim_dict("oddjobs@towingangryidle_a");
			streaming::remove_anim_dict("oddjobs@towingpleadingidle_b");
			streaming::remove_anim_dict("oddjobs@towingpleadingidle_a");
			streaming::remove_anim_dict("RANDOM@BICYCLE_THIEF@IDLE_A");
			streaming::remove_anim_dict("move_m@JOG@");
		}
	}
	else if (iLocal_463 == 1) {
		if (system::vdist2(vVar0, Local_693[iLocal_2647 /*23*/].f_1) > 22500f) {
			if (entity::does_entity_exist(iLocal_2765) && !entity::is_entity_dead(iLocal_2765, 0)) {
				if (entity::is_entity_occluded(iLocal_2765)) {
					ped::delete_ped(&iLocal_2765);
				}
				else {
					entity::set_ped_as_no_longer_needed(&iLocal_2765);
				}
			}
			if (entity::does_entity_exist(Local_2779[0 /*20*/].f_7) &&
				!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0)) {
				if (entity::is_entity_occluded(Local_2779[0 /*20*/].f_7)) {
					vehicle::delete_mission_train(&Local_2779[0 /*20*/].f_7);
				}
				else {
					vehicle::_0x1CF38D529D7441D9(Local_2779[0 /*20*/].f_7, 1);
					vehicle::set_mission_train_as_no_longer_needed(&Local_2779[0 /*20*/].f_7, 0);
				}
			}
		}
	}
	else if (iLocal_463 == 4) {
		iVar3 = 0;
		while (iVar3 < 2) {
			if (entity::does_entity_exist(Local_2779[0 /*20*/].f_2[iVar3]) &&
				!entity::is_entity_dead(Local_2779[0 /*20*/].f_2[iVar3], 0)) {
				if (entity::is_entity_occluded(Local_2779[0 /*20*/].f_2[iVar3])) {
					ped::delete_ped(&Local_2779[0 /*20*/].f_2[iVar3]);
				}
				else {
					entity::set_ped_as_no_longer_needed(&Local_2779[0 /*20*/].f_2[iVar3]);
				}
			}
			iVar3++;
		}
		if (entity::does_entity_exist(iLocal_2936)) {
			entity::set_ped_as_no_longer_needed(&iLocal_2936);
		}
		if (entity::does_entity_exist(iLocal_2935)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_2935);
		}
		streaming::remove_anim_dict("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		streaming::remove_anim_dict("move_m@JOG@");
	}
}

// Position - 0x2AF35
bool func_283(char *sParam0, vector3 vParam1) {
	bool bVar0;
	int iVar1;

	bVar0 = true;
	func_377();
	iVar1 = 0;
	while (iVar1 < 1) {
		if (entity::does_entity_exist(Local_2779[iVar1 /*20*/].f_6)) {
			if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[iVar1 /*20*/].f_6, 0)) {
				if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[iVar1 /*20*/].f_6) &&
					func_289()) {
					if (!iLocal_2751) {
						ui::clear_prints();
						iLocal_2751 = 1;
					}
					unk1::_0x293220DA1B46CEBC(3f, 3f, 0);
					vehicle::set_vehicle_siren(iLocal_2934, 1);
					func_286();
					func_433(&iLocal_442, 0, 0);
					iLocal_511 = 1;
					if (iLocal_2714 && !ped::is_ped_in_vehicle(Local_2779[iVar1 /*20*/], iLocal_2934, 0)) {
						bVar0 = false;
						if (iLocal_2946 < 4) {
							system::settimerb(0);
							iLocal_2946 = 5;
						}
					}
					if (bVar0) {
						func_284(&iLocal_2895);
						if (ui::does_blip_exist(Local_2779[iVar1 /*20*/].f_8)) {
							ui::set_blip_route(Local_2779[iVar1 /*20*/].f_8, 0);
						}
						iLocal_2718 = 0;
						func_274(Local_2779[iVar1 /*20*/].f_8);
						Local_2779[iVar1 /*20*/].f_14 = func_209(&Local_2779[iVar1 /*20*/].f_11);
						if (iLocal_2775 == 0) {
							Local_2779[iVar1 /*20*/].f_8 = ui::add_blip_for_coord(vParam1);
							fLocal_473 = func_553(vParam1, 0);
							vLocal_2659[0 /*3*/] = {vParam1};
						}
						if (iLocal_463 == 4) {
							vehicle::set_vehicle_door_shut(Local_2779[0 /*20*/].f_6, 0, 0);
						}
						func_379(&uLocal_2901);
						if (ui::does_blip_exist(Local_2779[iVar1 /*20*/].f_8)) {
							ui::set_blip_colour(Local_2779[iVar1 /*20*/].f_8, 5);
							ui::set_blip_route(Local_2779[iVar1 /*20*/].f_8, 1);
						}
						if (!bLocal_2713 &&
							script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) != 1) {
							if (iLocal_2691) {
								func_378(sParam0, 7500, 1);
								iLocal_2691 = 0;
							}
						}
						StringCopy(&cLocal_2863, sParam0, 64);
						gameplay::clear_area_of_vehicles(vLocal_2659[0 /*3*/], 6f, 0, 0, 0, 0, 0);
						iLocal_2820 = iVar1;
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	return false;
}

// Position - 0x2B117
void func_284(int *iParam0) {
	func_285(iParam0);
	StringCopy(&cLocal_360, "", 32);
}

// Position - 0x2B12C
void func_285(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x2B142
void func_286() {
	func_287("TOW_TUT_03");
	func_287("TOW_TUT_02");
	func_287("TOW_TUT_01");
	ui::clear_this_print("TOWT_OBJ_03");
	ui::clear_this_print("TOWT_OBJ_03a");
	ui::clear_this_print("TOWT_OBJ_03G");
	ui::clear_this_print("TOWT_OBJ_03Ga");
	ui::clear_this_print("TOWT_OBJS_03");
}

// Position - 0x2B18A
void func_287(char *sParam0) {
	if (func_288(sParam0)) {
		ui::clear_help(1);
	}
}

// Position - 0x2B1A0
bool func_288(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x2B1B3
int func_289() {
	if (bLocal_2713) {
		if (bLocal_2645) {
			return 1;
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0x2B1D3
void func_290() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
		if (!entity::is_entity_dead(iLocal_2766, 0) && !entity::is_entity_dead(player::player_ped_id(), 0) &&
			!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 0) &&
				ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 0)) {
				if (!func_499()) {
					if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
						if (!iLocal_2757) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_CANGO", 9, 1, 0, 0)) {
								iLocal_2757 = 1;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x2B27F
void func_291() {
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;

	if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0) &&
			vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6) ||
		Global_101700.f_18932.f_3 == 0 || Global_101700.f_18932.f_3 > 2) {
		return;
	}
	if (!entity::is_entity_dead(iLocal_2934, 0)) {
		vVar1 = {entity::get_entity_coords(iLocal_2934, 1)};
	}
	if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		vVar4 = {entity::get_entity_coords(Local_2779[0 /*20*/].f_6, 1)};
	}
	bVar7 = false;
	if (system::vdist2(vVar1, vVar4) < 900f) {
		if (!func_212(&uLocal_2907)) {
			func_508(&uLocal_2907);
		}
		else if (func_209(&uLocal_2907) > 1f) {
			bVar7 = true;
		}
	}
	else if (system::vdist2(vVar1, vVar4) > 2500f) {
		func_379(&uLocal_2907);
	}
	if (bVar7) {
		switch (iLocal_2833) {
		case 0:
			if (!ui::is_help_message_on_screen()) {
				func_207("TOW_TUT_02", -1);
				func_379(&uLocal_2907);
				iLocal_2833 = 1;
			}
			break;

		case 1:
			if (func_212(&uLocal_2907)) {
				if (func_209(&uLocal_2907) > 14f) {
					if (!ui::is_help_message_on_screen()) {
						func_207("TOW_TUT_03", 10000);
						func_379(&uLocal_2907);
						iLocal_2833 = 2;
					}
				}
			}
			break;

		case 2:
			if (func_212(&uLocal_2907)) {
				if (func_209(&uLocal_2907) > 14f) {
					if (!ui::is_help_message_on_screen()) {
						iVar0 = gameplay::get_random_int_in_range(0, 65535) % 2;
						if (iVar0 == 0) {
							func_207("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1) {
							func_207("TOWT_HELP_CR", -1);
						}
						iLocal_2833 = 3;
					}
				}
			}
			break;

		case 3: break;
		}
	}
}

// Position - 0x2B44D
bool func_292(var *uParam0, var *uParam1, var *uParam2) {
	if (iLocal_2820 != -1) {
		if (!func_215(Local_2800.f_14)) {
			vLocal_2663 = {Local_2800.f_14};
			*uParam0 = {Local_2800.f_7};
			*uParam1 = {Local_2800.f_10};
			*uParam2 = Local_2800.f_13;
		}
		else {
			*uParam0 = {Local_2800};
			*uParam1 = {Local_2800.f_3};
			*uParam2 = Local_2800.f_6;
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2934, 0) &&
			!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
				iLocal_2760 = 1;
			}
			else {
				iLocal_2760 = 0;
			}
		}
		if (!bLocal_2713) {
			if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_2663, 30f, 30f, 2f, iLocal_2760, 1, 0)) {
				if (iLocal_463 == 0 || iLocal_463 == 4) {
					if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					}
				}
			}
			else if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_2663, 3f, 3f, 2f, 0, 1, 0)) {
				if (!entity::is_entity_dead(iLocal_2934, 0)) {
					vehicle::_set_vehicle_halt(iLocal_2934, 1f, 0, 0);
				}
			}
		}
		if (entity::does_entity_exist(Local_2779[iLocal_2820 /*20*/].f_6)) {
			if (entity::is_entity_in_angled_area(Local_2779[iLocal_2820 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0,
												 0)) {
				if (iLocal_2698) {
					func_207("TOWT_HELP_UH", -1);
				}
				if (!entity::is_entity_dead(iLocal_2934, 0) &&
					!entity::is_entity_dead(Local_2779[iLocal_2820 /*20*/].f_6, 0)) {
					if (!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[iLocal_2820 /*20*/].f_6) ||
						ped::is_ped_in_vehicle(player::player_ped_id(), Local_2779[iLocal_2820 /*20*/].f_6, 0) &&
							!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934,
																	   Local_2779[iLocal_2820 /*20*/].f_6)) {
						if (func_499()) {
							func_452();
						}
						ui::clear_help(1);
						iLocal_2745 = 1;
						return true;
					}
				}
			}
			else {
				func_293();
			}
		}
	}
	iLocal_2745 = 0;
	return false;
}

// Position - 0x2B642
void func_293() {
	if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_2663, 30f, 30f, 2f, 0, 1, 0)) {
		if (!func_212(&uLocal_2910)) {
			func_508(&uLocal_2910);
		}
		else if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2934, 0) &&
				 !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
				if (func_209(&uLocal_2910) > 30f) {
					func_207("TOWT_HELP_DP", -1);
				}
			}
		}
	}
}

// Position - 0x2B6D6
void func_294(int iParam0, var *uParam1) {
	if (func_215(vLocal_88[0 /*3*/])) {
	}
	switch (iParam0) {
	case 0:
		*uParam1 = {-230.8514f, -1181.072f, 21.06031f};
		uParam1->f_3 = {-230.4658f, -1163.16f, 28.99641f};
		uParam1->f_6 = 22.25f;
		uParam1->f_17 = {vLocal_88[0 /*3*/]};
		break;

	case 1:
		*uParam1 = {-204.0603f, -1390.024f, 30.25342f};
		uParam1->f_3 = {-207.5665f, -1382.582f, 33.46937f};
		uParam1->f_6 = 17f;
		uParam1->f_17 = {vLocal_88[1 /*3*/]};
		break;

	case 2:
		*uParam1 = {-204.0603f, -1390.024f, 30.25342f};
		uParam1->f_3 = {-207.5665f, -1382.582f, 33.46937f};
		uParam1->f_6 = 17f;
		uParam1->f_17 = {vLocal_88[2 /*3*/]};
		break;

	case 3:
		*uParam1 = {538.747f, -177.535f, 74.484f};
		uParam1->f_3 = {528.747f, -177.535f, 34.484f};
		uParam1->f_6 = 28f;
		uParam1->f_17 = {vLocal_88[3 /*3*/]};
		break;

	case 4:
		*uParam1 = {1158.944f, -776.686f, 77.608f};
		uParam1->f_3 = {1118.944f, -776.686f, 37.608f};
		uParam1->f_6 = 10f;
		uParam1->f_17 = {vLocal_88[4 /*3*/]};
		break;

	case 5:
		*uParam1 = {798.455f, -821.201f, 46.186f};
		uParam1->f_3 = {813.455f, -821.201f, 6.186f};
		uParam1->f_6 = 20f;
		uParam1->f_17 = {vLocal_88[5 /*3*/]};
		break;

	case 6:
		*uParam1 = {2504.934f, 4085.125f, 58.636f};
		uParam1->f_3 = {2500.285f, 4075.156f, 18.636f};
		uParam1->f_6 = 12f;
		uParam1->f_17 = {vLocal_88[6 /*3*/]};
		break;

	case 7:
		*uParam1 = {256.5623f, 2600.458f, 43.3306f};
		uParam1->f_3 = {268.6701f, 2602.716f, 46.74961f};
		uParam1->f_6 = 5f;
		uParam1->f_17 = {vLocal_88[7 /*3*/]};
		break;

	case 8:
		*uParam1 = {398.7471f, -1650.806f, 27.29324f};
		uParam1->f_3 = {434.1311f, -1610.011f, 33.34294f};
		uParam1->f_6 = 40.5f;
		uParam1->f_14 = {400.2854f, -1632.597f, 28.29278f};
		uParam1->f_17 = {vLocal_113[0 /*3*/]};
		uParam1->f_7 = {396.8347f, -1639.045f, 27.29278f};
		uParam1->f_10 = {408.0073f, -1625.608f, 33.29277f};
		uParam1->f_13 = 10f;
		break;
	}
}

// Position - 0x2B9B6
void func_295() {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		vVar3 = {entity::get_entity_coords(Local_2779[0 /*20*/].f_6, 1)};
	}
	if (system::vdist2(vVar0, vVar3) < 100f) {
		if (!iLocal_2761) {
			if (ui::does_blip_exist(Local_2779[0 /*20*/].f_8)) {
				ui::remove_blip(&Local_2779[0 /*20*/].f_8);
				iLocal_2761 = 1;
			}
		}
		if (!ui::does_blip_exist(Local_2779[0 /*20*/].f_8)) {
			if (entity::does_entity_exist(Local_2779[0 /*20*/].f_6)) {
				Local_2779[0 /*20*/].f_8 = ui::add_blip_for_entity(Local_2779[0 /*20*/].f_6);
				ui::set_blip_colour(Local_2779[0 /*20*/].f_8, 3);
				ui::set_blip_route(Local_2779[0 /*20*/].f_8, 1);
			}
		}
	}
}

// Position - 0x2BA85
bool func_296(int *iParam0, int iParam1, char *sParam2) {
	vector3 vVar0;
	vector3 vVar3;

	switch (*iParam0) {
	case 0:
		if (!bLocal_2712) {
			if (func_303(Local_2779[iParam1 /*20*/].f_6, iLocal_2934, &iLocal_2646, 10, 150f, 2f, 1) || iLocal_2709 ||
				iLocal_511) {
				if (!bLocal_2695) {
					iLocal_2646 = 0;
					func_302(&iLocal_2641);
					if (!entity::is_entity_dead(Local_2779[iParam1 /*20*/], 0)) {
						if (ai::get_script_task_status(Local_2779[iParam1 /*20*/], -875674219) != 1) {
							ai::task_turn_ped_to_face_entity(Local_2779[iParam1 /*20*/], player::player_ped_id(), -1);
						}
					}
					bLocal_2695 = true;
				}
				if (bLocal_2695) {
					if (entity::is_entity_at_coord(iLocal_2934,
												   entity::get_entity_coords(Local_2779[iParam1 /*20*/], 1), 25f, 25f,
												   25f, 0, 1, 0)) {
						if (entity::is_entity_playing_anim(Local_2779[iParam1 /*20*/], "oddjobs@towingcome_here",
														   "come_here_idle_a", 3)) {
							ai::stop_anim_task(Local_2779[iParam1 /*20*/], "oddjobs@towingcome_here",
											   "come_here_idle_a", -4f);
						}
						if (!func_301()) {
							if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1) {
								func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
								func_506(&Local_2391, 3, Local_2779[iParam1 /*20*/], "TOWTRAINM", 0, 1);
								func_495(&Local_2391, "TOWAUD", "TOW_TRAIN1", 9, 1, 0, 0);
								ped::set_ped_movement_clipset(Local_2779[iParam1 /*20*/], "move_m@JOG@", 1048576000);
								ui::clear_help(1);
								if (!entity::is_entity_dead(Local_2779[iParam1 /*20*/], 0)) {
									vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
									ai::task_enter_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, -1, 0, 2f, 1048577,
														   0);
								}
							}
							else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
								func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
								func_506(&Local_2391, 3, Local_2779[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
								func_495(&Local_2391, "TOWAUD", sParam2, 9, 1, 0, 0);
								ui::clear_help(1);
								if (!entity::is_entity_dead(Local_2779[iParam1 /*20*/], 0)) {
									vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
									ai::task_enter_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, -1, 0, 1f, 1048577,
														   0);
								}
							}
							else {
								func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
								func_506(&Local_2391, iLocal_2839, Local_2779[iParam1 /*20*/], sLocal_2658, 0, 1);
								func_495(&Local_2391, "TOWAUD", sParam2, 9, 1, 0, 0);
								ped::set_ped_movement_clipset(Local_2779[iParam1 /*20*/], "move_m@JOG@", 1048576000);
								ui::clear_help(1);
								if (!entity::is_entity_dead(Local_2779[iParam1 /*20*/], 0)) {
									vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
									ai::task_enter_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, 20000, 0, 2f,
														   1048577, 0);
								}
							}
							if (iLocal_2709) {
								if (ui::does_blip_exist(Local_2779[iParam1 /*20*/].f_8)) {
									ui::remove_blip(&Local_2779[iParam1 /*20*/].f_8);
								}
								if (!ui::does_blip_exist(Local_2779[iParam1 /*20*/].f_8)) {
									if (entity::does_entity_exist(Local_2779[iParam1 /*20*/])) {
										if (ui::does_blip_exist(Local_2779[0 /*20*/].f_9)) {
											ui::remove_blip(&Local_2779[0 /*20*/].f_9);
										}
										Local_2779[iParam1 /*20*/].f_8 =
											ui::add_blip_for_entity(Local_2779[iParam1 /*20*/]);
										ui::set_blip_colour(Local_2779[iParam1 /*20*/].f_8, 3);
										ui::set_blip_scale(Local_2779[iParam1 /*20*/].f_8, 0.7f);
									}
								}
							}
							system::settimera(0);
							*iParam0 = 1;
						}
					}
					else if (entity::is_entity_at_coord(iLocal_2934,
														entity::get_entity_coords(Local_2779[iParam1 /*20*/], 1), 50f,
														50f, 50f, 0, 1, 0)) {
						if (!iLocal_2744) {
							if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
								func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
								func_506(&Local_2391, 3, Local_2779[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
								if (func_495(&Local_2391, "TOWAUD", "TOW_CALLOUT", 9, 1, 0, 0)) {
									iLocal_2744 = 1;
								}
							}
						}
					}
				}
			}
		}
		break;

	case 1:
		iLocal_2697 = 1;
		func_379(&uLocal_2901);
		func_379(&uLocal_2886);
		func_274(Local_2779[iParam1 /*20*/].f_8);
		if (!ui::does_blip_exist(Local_2779[0 /*20*/].f_9)) {
			if (entity::does_entity_exist(Local_2779[iParam1 /*20*/])) {
				Local_2779[0 /*20*/].f_9 = ui::add_blip_for_entity(Local_2779[iParam1 /*20*/]);
				ui::set_blip_colour(Local_2779[0 /*20*/].f_9, 3);
				ui::set_blip_scale(Local_2779[0 /*20*/].f_9, 0.7f);
			}
		}
		func_378("TOWT_OBJ_02", 7500, 1);
		*iParam0 = 2;
		break;

	case 2:
		ped::add_relationship_group("TOWBUDDIES", &iLocal_2778);
		ped::set_relationship_between_groups(1, iLocal_2778, 1862763509);
		ped::set_ped_relationship_group_hash(Local_2779[iParam1 /*20*/], iLocal_2778);
		func_300(iParam1);
		*iParam0 = 3;
		break;

	case 3:
		if (!ped::is_ped_in_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, 0)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
				vVar3 = {entity::get_entity_coords(Local_2779[0 /*20*/], 1)};
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
				if (ai::get_script_task_status(Local_2779[0 /*20*/], -1794415470) != 1) {
					ai::task_enter_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, -1, 0, 2f, 1048577, 0);
				}
			}
			if (!iLocal_2750) {
				if (system::vdist2(vVar0, vVar3) > 2500f) {
					func_378("TOW_OBJ_REOWNER", 7500, 1);
					iLocal_2750 = 1;
				}
			}
			if (func_297(&iLocal_2950, Local_2779[iParam1 /*20*/], 1125515264, 30000)) {
				iLocal_2885 = 11;
				func_491();
			}
		}
		if (ped::is_ped_in_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, 0)) {
			if (!entity::is_entity_dead(iLocal_2934, 0)) {
				vehicle::set_vehicle_doors_locked(iLocal_2934, 9);
				func_274(Local_2779[0 /*20*/].f_9);
			}
		}
		if (ped::is_ped_in_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, 0) &&
			!audio::is_scripted_conversation_ongoing()) {
			if (iLocal_2709) {
				func_495(&Local_2391, "TOWAUD", "TOW_TRAIN2", 9, 1, 0, 0);
			}
			else {
				func_495(&Local_2391, "TOWAUD", "TOW_BREAKS", 9, 1, 0, 0);
			}
			*iParam0 = 4;
		}
		break;

	case 4:
		if (ped::is_ped_in_vehicle(Local_2779[iParam1 /*20*/], iLocal_2934, 0)) {
			func_300(iParam1);
			if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				if (iLocal_2709 && vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
					return true;
				}
			}
			if (!ui::does_blip_exist(Local_2779[0 /*20*/].f_8)) {
				if (entity::does_entity_exist(Local_2779[iParam1 /*20*/].f_6) &&
					!entity::is_entity_dead(Local_2779[iParam1 /*20*/].f_6, 0)) {
					Local_2779[0 /*20*/].f_8 = ui::add_blip_for_entity(Local_2779[iParam1 /*20*/].f_6);
					ui::set_blip_colour(Local_2779[iParam1 /*20*/].f_8, 3);
				}
			}
			if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				if (!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
					func_378("TOWT_OBJ_03", 7500, 1);
					StringCopy(&cLocal_2863, "TOWT_OBJ_03", 64);
				}
			}
			func_379(&uLocal_2886);
			*iParam0 = 0;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2C163
bool func_297(int *iParam0, int iParam1, int iParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;

	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*iParam0) {
	case 0:
		iParam0->f_1 = gameplay::get_game_timer();
		iParam0->f_2 = func_298(iParam1, 1);
		*iParam0 = 1;
		break;

	case 1:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		if (!entity::is_entity_dead(iParam1, 0)) {
			vVar3 = {entity::get_entity_coords(iParam1, 1)};
		}
		if (system::vdist2(vVar0, vVar3) > 22500f) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2C1EE
float func_298(int iParam0, int iParam1) {
	return func_299(player::get_player_ped(player::get_player_index()), iParam0, iParam1);
}

// Position - 0x2C206
float func_299(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2C264
void func_300(int iParam0) {
	int iVar0;

	bLocal_2712 = true;
	iVar0 = 0;
	while (iVar0 < 1) {
		if (iVar0 != iParam0) {
			if (ui::does_blip_exist(Local_2779[iVar0 /*20*/].f_8)) {
				ui::remove_blip(&Local_2779[iVar0 /*20*/].f_8);
			}
		}
		iVar0++;
	}
}

// Position - 0x2C2A6
int func_301() {
	float fVar0;

	if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
			fVar0 = entity::get_entity_speed(iLocal_2934);
			if (fVar0 > 1f) {
				if (!iLocal_2758) {
					func_207("TOWT_HELP_SL", -1);
					iLocal_2758 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2C308
void func_302(int *iParam0) {
	if (*iParam0 != -1) {
		audio::stop_sound(*iParam0);
		audio::release_sound_id(*iParam0);
		*iParam0 = -1;
	}
}

// Position - 0x2C329
bool func_303(int iParam0, int iParam1, int *iParam2, int iParam3, float fParam4, float fParam5, int iParam6) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_ped(iParam0)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam0);
		}
	}
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iVar0, 0) && ped::is_ped_injured(iVar0)) {
			return false;
		}
	}
	if (entity::does_entity_exist(iParam0) && entity::does_entity_exist(iParam1)) {
		if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
			if (iParam6) {
			}
			if (!entity::is_entity_occluded(iParam0) && func_298(iParam0, 1) < fParam4) {
				*iParam2++;
			}
			else {
				*iParam2 = 0;
			}
			if (*iParam2 > iParam3 || func_298(iParam0, 1) < 8f)
				&&entity::get_entity_speed(iParam1) < fParam5 && !entity::is_entity_occluded(iParam0) {
					*iParam2 = 0;
					return true;
				}
		}
	}
	if (iParam6) {
	}
	return false;
}

// Position - 0x2C40B
void func_304() {
	int iVar0;

	iVar0 = func_305(&vLocal_88, vLocal_2659[0 /*3*/], 400f);
	if (iVar0 != -1) {
		vLocal_2663 = {vLocal_88[iVar0 /*3*/]};
		func_294(iVar0, &Local_2800);
	}
	else {
		vLocal_2663 = {vLocal_88[0 /*3*/]};
	}
}

// Position - 0x2C453
int func_305(var *uParam0, vector3 vParam1, float fParam4) {
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (!func_215((*uParam0)[iVar0 /*3*/])) {
			fVar3 = system::vdist2((*uParam0)[iVar0 /*3*/], vParam1);
			if (fVar3 < fVar2 && fVar3 > fParam4) {
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1) {
	}
	return iVar1;
}

// Position - 0x2C4BD
bool func_306(char *sParam0, char *sParam1, int *iParam2, int iParam3, int iParam4) {
	fLocal_473 = func_553(vLocal_2858, 0);
	vLocal_2659[0 /*3*/] = {vLocal_2858};
	sLocal_2940 = sParam0;
	sParam1 = sParam1;
	if (iParam3) {
		if (func_312(vLocal_2858, fLocal_2861, iParam2, 0)) {
			func_311(Local_2779[0 /*20*/].f_6, &uLocal_2825, &uLocal_2827);
			vehicle::set_force_hd_vehicle(Local_2779[0 /*20*/].f_6, 1);
			vehicle::set_vehicle_tyres_can_burst(Local_2779[0 /*20*/].f_6, 0);
			entity::set_entity_load_collision_flag(Local_2779[0 /*20*/].f_6, 1);
			vehicle::set_vehicle_has_strong_axles(Local_2779[0 /*20*/].f_6, 1);
			return true;
		}
	}
	else if (func_307(iParam4, 0)) {
		func_311(Local_2779[0 /*20*/].f_6, &uLocal_2825, &uLocal_2827);
		vehicle::set_force_hd_vehicle(Local_2779[0 /*20*/].f_6, 1);
		vehicle::set_vehicle_tyres_can_burst(Local_2779[0 /*20*/].f_6, 0);
		entity::set_entity_load_collision_flag(Local_2779[0 /*20*/].f_6, 1);
		vehicle::set_vehicle_has_strong_axles(Local_2779[0 /*20*/].f_6, 1);
		return true;
	}
	return false;
}

// Position - 0x2C5A1
bool func_307(bool bParam0, int iParam1) {
	int *iVar0;

	iVar0 = 0;
	if (!func_309(Local_693[iLocal_2647 /*23*/].f_1, Local_693[iLocal_2647 /*23*/].f_4, &iVar0, 0, iParam1)) {
		return false;
	}
	fLocal_473 = func_553(Local_693[iLocal_2647 /*23*/].f_1, 0);
	vLocal_2659[0 /*3*/] = {Local_693[iLocal_2647 /*23*/].f_1};
	if (Local_693[iLocal_2647 /*23*/] == 2) {
		vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_693[iLocal_2647 /*23*/] == 4) {
		fLocal_2861 = -1f;
		iLocal_2706 = 1;
		iLocal_2935 = vehicle::create_vehicle(joaat("ambulance"), Local_1913[func_505() /*28*/].f_23,
											  Local_1913[func_505() /*28*/].f_26, 1, 1);
		entity::set_entity_as_mission_entity(iLocal_2935, 1, 0);
		if (!entity::is_entity_dead(iLocal_2935, 0)) {
			vehicle::set_vehicle_siren(iLocal_2935, 1);
			vehicle::set_vehicle_engine_on(iLocal_2935, 1, 1, 0);
			streaming::set_model_as_no_longer_needed(joaat("ambulance"));
		}
		if (entity::does_entity_exist(iLocal_2935)) {
			iLocal_2936 = ped::create_ped_inside_vehicle(iLocal_2935, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			entity::set_entity_as_mission_entity(iLocal_2936, 1, 0);
			streaming::set_model_as_no_longer_needed(joaat("s_m_m_paramedic_01"));
		}
		if (!func_215(Local_1913[func_505() /*28*/].f_17)) {
			uLocal_2390 = func_308(Local_1913[func_505() /*28*/].f_17, Local_1913[func_505() /*28*/].f_20);
		}
		switch (Local_693[iLocal_2647 /*23*/].f_21) {
		case 1:
			vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
			vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
			break;

		case 0:
			vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
			vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
			break;

		case 2: vehicle::set_vehicle_damage(Local_2779[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1); break;
		}
		vehicle::set_vehicle_door_open(Local_2779[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0) {
		bLocal_485 = true;
		if (iLocal_463 == 1) {
			Local_2779[0 /*20*/] =
				ped::create_ped_inside_vehicle(Local_2779[0 /*20*/].f_6, 26, joaat("a_m_m_bevhills_02"), -1, 1, 1);
			entity::set_entity_load_collision_flag(Local_2779[0 /*20*/], 1);
			ped::set_ped_component_variation(Local_2779[0 /*20*/], 0, 0, 1, 0);
			ped::set_ped_component_variation(Local_2779[0 /*20*/], 3, 1, 0, 0);
			ped::set_ped_component_variation(Local_2779[0 /*20*/], 4, 0, 2, 0);
			streaming::set_model_as_no_longer_needed(joaat("a_m_m_bevhills_02"));
		}
		else {
			Local_2779[0 /*20*/] =
				ped::create_ped_inside_vehicle(Local_2779[0 /*20*/].f_6, 26, uLocal_2772[0], -1, 1, 1);
			streaming::set_model_as_no_longer_needed(uLocal_2772[0]);
		}
	}
	return true;
}

// Position - 0x2C8D9
var func_308(vector3 vParam0, vector3 vParam3) {
	ped::set_ped_non_creation_area(vParam0, vParam3);
	pathfind::disable_navmesh_in_area(vParam0, vParam3, 1);
	return ped::add_scenario_blocking_area(vParam0, vParam3, 0, 1, 1, 1);
}

// Position - 0x2C90A
int func_309(vector3 vParam0, float fParam3, int *iParam4, int iParam5, bool bParam6) {
	float fVar0;
	float fVar1;
	float fVar2;

	*iParam4 = func_310(&Local_2779);
	if (*iParam4 == -1) {
		return 0;
	}
	if (iLocal_2822 >= 2) {
		iLocal_2822 = 0;
	}
	if (iLocal_463 == 2) {
		iLocal_2770[0] = joaat("primo");
	}
	else if (iLocal_463 == 0) {
		iLocal_2770[0] = joaat("landstalker");
	}
	else if (iLocal_463 == 1) {
		iLocal_2770[0] = joaat("schwarzer");
	}
	else if (iLocal_463 == 3) {
		iLocal_2770[0] = joaat("tailgater");
	}
	else if (iLocal_463 == 4) {
		iLocal_2770[0] = joaat("intruder");
	}
	Local_2779[*iParam4 /*20*/].f_6 = vehicle::create_vehicle(iLocal_2770[0], vParam0, fParam3, 1, 1);
	entity::set_entity_load_collision_flag(Local_2779[*iParam4 /*20*/].f_6, 1);
	streaming::set_model_as_no_longer_needed(iLocal_2770[0]);
	if (iLocal_463 == 3) {
		vehicle::set_vehicle_colours(Local_2779[*iParam4 /*20*/].f_6, 27, 27);
	}
	iLocal_2822++;
	fLocal_473 = func_553(vParam0, 0);
	if (iLocal_463 == 1) {
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else {
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_215(Local_693[iLocal_2647 /*23*/].f_10)) {
		Local_2779[*iParam4 /*20*/].f_17 =
			vehicle::_0x2CE544C68FB812A0(Local_693[iLocal_2647 /*23*/].f_10, fVar0, 0f, 0);
	}
	else {
		Local_2779[*iParam4 /*20*/].f_17 = vehicle::_0x2CE544C68FB812A0(vParam0, fVar0, 0f, 0);
	}
	Local_2779[*iParam4 /*20*/].f_18 = vehicle::_0x2CE544C68FB812A0(vParam0, fVar1, 2.5f, 0);
	Local_2779[*iParam4 /*20*/].f_19 = vehicle::_0x2CE544C68FB812A0(vParam0, fVar2, 4f, 0);
	if (iParam5) {
		if (Local_2779[*iParam4 /*20*/].f_15) {
			vehicle::set_disable_vehicle_petrol_tank_fires(Local_2779[*iParam4 /*20*/].f_6, 1);
			vehicle::set_vehicle_engine_health(Local_2779[*iParam4 /*20*/].f_6, 1f);
			vehicle::set_vehicle_engine_can_degrade(Local_2779[*iParam4 /*20*/].f_6, 0);
		}
		else {
			vehicle::set_disable_vehicle_petrol_tank_fires(Local_2779[*iParam4 /*20*/].f_6, 1);
			vehicle::set_vehicle_engine_health(Local_2779[*iParam4 /*20*/].f_6, 1f);
			vehicle::set_vehicle_engine_can_degrade(Local_2779[*iParam4 /*20*/].f_6, 0);
		}
	}
	if (!bLocal_2712 && bParam6) {
		if (entity::does_entity_exist(Local_2779[*iParam4 /*20*/].f_6)) {
			Local_2779[*iParam4 /*20*/].f_8 = ui::add_blip_for_entity(Local_2779[*iParam4 /*20*/].f_6);
			ui::set_blip_colour(Local_2779[*iParam4 /*20*/].f_8, 3);
		}
	}
	else {
		if (bLocal_2712) {
		}
		if (bParam6) {
		}
	}
	iLocal_2821++;
	func_508(&Local_2779[*iParam4 /*20*/].f_11);
	return 1;
}

// Position - 0x2CB84
int func_310(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1) {
		if ((*uParam0)[iVar0 /*20*/].f_6 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2CBB0
void func_311(int iParam0, var *uParam1, var *uParam2) {
	if (entity::does_entity_exist(iParam0)) {
		*uParam1 = entity::get_entity_health(iParam0);
		*uParam2 = *uParam1;
	}
}

// Position - 0x2CBD0
bool func_312(vector3 vParam0, float fParam3, int *iParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	if (!func_309(vParam0, fParam3, iParam4, 1, iParam5)) {
		return false;
	}
	if (*iParam4 == -1) {
	}
	vehicle::set_vehicle_door_open(Local_2779[*iParam4 /*20*/].f_6, 4, 0, 0);
	gameplay::get_model_dimensions(entity::get_entity_model(Local_2779[*iParam4 /*20*/].f_6), &vVar3, &vVar6);
	vVar9 = {vVar6 - vVar3};
	vVar9 = {vVar9 / FtoV(2f)};
	iLocal_2706 = 1;
	vVar0 = {entity::get_offset_from_entity_in_world_coords(Local_2779[*iParam4 /*20*/].f_6, 1.5f, 0f, 0f)};
	vVar12 = {entity::get_entity_coords(Local_2779[*iParam4 /*20*/].f_6, 1)};
	fVar15 = entity::get_entity_heading(Local_2779[*iParam4 /*20*/].f_6);
	iLocal_2831 = vehicle::_0x2CE544C68FB812A0(object::_get_object_offset_from_coords(vVar12, fVar15, -1.5f, -30f, 0f),
											   10f, 0f, 0);
	iLocal_2832 = vehicle::_0x2CE544C68FB812A0(object::_get_object_offset_from_coords(vVar12, fVar15, -1.5f, 30f, 0f),
											   10f, 0f, 0);
	gameplay::clear_area_of_vehicles(vVar0, 30f, 0, 0, 0, 0, 0);
	Local_1913[func_505() /*28*/][0 /*3*/] = {vVar0.x, vVar0.y, vVar0.z + 1f};
	return true;
}

// Position - 0x2CCE8
bool func_313(var *uParam0, var *uParam1) {
	func_330();
	func_329();
	if (uParam0->f_3 == 3) {
		sLocal_2654[0] = "base";
		func_327(&uLocal_2680, "amb@world_human_smoking@male@male_a@base");
		func_327(&uLocal_2680, "oddjobs@towingcome_here");
		func_327(&uLocal_2680, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2713) {
		func_327(&uLocal_2680, "Ped");
		func_327(&uLocal_2680, "oddjobs@towing");
		func_327(&uLocal_2680, "oddjobs@towingangryidle_a");
		func_327(&uLocal_2680, "oddjobs@towingpleadingidle_b");
		func_327(&uLocal_2680, "oddjobs@towingpleadingidle_a");
		func_327(&uLocal_2680, "RANDOM@BICYCLE_THIEF@IDLE_A");
		func_327(&uLocal_2680, "move_m@JOG@");
	}
	if (uParam0->f_3 == 4) {
		cLocal_2653 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_327(&uLocal_2680, cLocal_2653);
		func_325(&uLocal_2672, joaat("ambulance"));
		func_325(&uLocal_2672, joaat("s_m_m_paramedic_01"));
		func_327(&uLocal_2680, "move_m@JOG@");
		sLocal_2654[0] = "react_big_variations_a";
		sLocal_2654[1] = "react_big_variations_b";
		sLocal_2654[2] = "react_big_variations_c";
	}
	vehicle::set_vehicle_model_is_suppressed(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1) {
		streaming::request_ptfx_asset();
		func_327(&uLocal_2680, "oddjobs@towing");
		func_327(&uLocal_2680, "amb@world_human_smoking@male@male_a@base");
		func_327(&uLocal_2680, "oddjobs@towingpleadingidle_b");
		func_327(&uLocal_2680, "move_m@JOG@");
		func_325(&uLocal_2672, joaat("freightcont1"));
		func_325(&uLocal_2672, joaat("tankercar"));
		func_325(&uLocal_2672, joaat("freight"));
		func_325(&uLocal_2672, joaat("freightcar"));
		func_325(&uLocal_2672, joaat("s_m_m_lsmetro_01"));
	}
	Local_125 = {Local_125};
	Local_118 = {Local_118};
	func_325(&uLocal_2672, iLocal_692);
	func_324(uParam1, "TOW", 2, 0);
	func_324(uParam1, "DTRSHRD", 3, 0);
	func_323(&uLocal_2672);
	func_320(&uLocal_2680, uParam1);
	if (uParam0->f_3 == 0) {
		while (!streaming::has_model_loaded(joaat("a_m_m_genfat_01"))) {
			func_580(uParam1);
			system::wait(0);
		}
	}
	while (!func_315(uParam1)) {
		func_580(uParam1);
		system::wait(0);
	}
	while (!func_314(&uLocal_2672)) {
		func_580(uParam1);
		system::wait(0);
	}
	if (uParam0->f_3 == 1) {
		while (!audio::request_script_audio_bank("SCRIPT\TOWING_TRAIN", 0, -1) || !streaming::has_ptfx_asset_loaded()) {
			func_580(uParam1);
			system::wait(0);
		}
	}
	while (!ui::has_additional_text_loaded(2) || !ui::has_additional_text_loaded(3)) {
		func_580(uParam1);
		system::wait(0);
	}
	return true;
}

// Position - 0x2CF72
int func_314(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			if (!streaming::has_model_loaded((*uParam0)[iVar0])) {
				if (!streaming::has_model_loaded((*uParam0)[iVar0])) {
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x2CFB9
int func_315(var *uParam0) { return func_316(uParam0); }

// Position - 0x2CFC7
int func_316(var *uParam0) {
	int iVar0;

	if (!uParam0->f_271) {
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 29)) {
				return 0;
			}
			if (!func_317(&(*uParam0)[iVar0 /*18*/])) {
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

// Position - 0x2D02B
int func_317(var *uParam0) { return func_318(*uParam0, &uParam0->f_2, uParam0->f_1); }

// Position - 0x2D042
int func_318(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		if (gameplay::is_bit_set(iParam0, 29)) {
			switch (func_319(iParam0)) {
			case 0: return streaming::has_model_loaded(iParam2);

			case 1: return streaming::has_anim_dict_loaded(sParam1);

			case 2: return streaming::has_clip_set_loaded(sParam1);

			case 3: return graphics::has_streamed_texture_dict_loaded(sParam1);

			case 4: return vehicle::has_vehicle_recording_been_loaded(iParam2, sParam1);

			case 5: return ai::get_is_waypoint_recording_loaded(sParam1);

			case 6: return audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(iParam0, 27), -1);

			case 7: return script::has_script_with_name_hash_loaded(iParam2);

			case 8: return ui::has_additional_text_loaded(iParam2);

			case 9: return streaming::has_ptfx_asset_loaded();

			default: break;
			}
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x2D136
int func_319(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (gameplay::is_bit_set(iParam0, iVar0)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2D162
void func_320(var *uParam0, var *uParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (!gameplay::is_string_null((*uParam0)[iVar0])) {
			func_321(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x2D198
void func_321(var *uParam0, char *sParam1) { func_322(uParam0, 1, -1, sParam1, 0); }

// Position - 0x2D1AB
void func_322(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], iParam1)) {
				if (iParam2 != -1) {
					if ((*uParam0)[iVar0 /*18*/].f_1 == iParam2) {
						return;
					}
				}
				if (iParam1 != 4) {
					if (!gameplay::are_strings_equal(sParam3, "NULL")) {
						if (gameplay::are_strings_equal(&(*uParam0)[iVar0 /*18*/].f_2, sParam3)) {
							return;
						}
					}
				}
				if (iParam1 == 9) {
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271) {
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			StringCopy(&(*uParam0)[iVar0 /*18*/].f_2, sParam3, 64);
			(*uParam0)[iVar0 /*18*/].f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			gameplay::set_bit(&(*uParam0)[iVar0 /*18*/], iParam1);
			gameplay::set_bit(&(*uParam0)[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

// Position - 0x2D295
void func_323(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			streaming::request_model((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x2D2C5
void func_324(var *uParam0, char *sParam1, int iParam2, int iParam3) {
	var uVar0;

	if (iParam3) {
		gameplay::set_bit(&uVar0, 26);
	}
	func_322(uParam0, 8, iParam2, sParam1, uVar0);
}

// Position - 0x2D2E8
int func_325(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			if ((*uParam0)[iVar0] == iParam1) {
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_326(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0) {
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

// Position - 0x2D345
int func_326(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2D371
int func_327(var *uParam0, char *sParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (!gameplay::is_string_null((*uParam0)[iVar0])) {
			if (gameplay::are_strings_equal((*uParam0)[iVar0], sParam1)) {
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_328(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0) {
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

// Position - 0x2D3D6
int func_328(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (gameplay::is_string_null((*uParam0)[iVar0])) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2D405
void func_329() {
	if (iLocal_463 == 2) {
		streaming::request_model(joaat("primo"));
	}
	else if (iLocal_463 == 0) {
		streaming::request_model(joaat("landstalker"));
		streaming::request_model(joaat("a_m_m_genfat_01"));
	}
	else if (iLocal_463 == 1) {
		streaming::request_model(joaat("schwarzer"));
		streaming::request_model(joaat("a_m_m_bevhills_02"));
	}
	else if (iLocal_463 == 3) {
		streaming::request_model(joaat("tailgater"));
		streaming::request_model(joaat("a_m_m_tourist_01"));
	}
	else if (iLocal_463 == 4) {
		streaming::request_model(joaat("intruder"));
		streaming::request_model(joaat("s_m_m_paramedic_01"));
		streaming::request_model(joaat("a_m_y_genstreet_02"));
		streaming::request_model(joaat("a_m_m_bevhills_02"));
	}
	if (iLocal_463 == 2) {
		while (!streaming::has_model_loaded(joaat("primo"))) {
			system::wait(0);
		}
	}
	else if (iLocal_463 == 0) {
		while (!streaming::has_model_loaded(joaat("landstalker")) ||
			   !streaming::has_model_loaded(joaat("a_m_m_genfat_01"))) {
			system::wait(0);
		}
	}
	else if (iLocal_463 == 1) {
		while (!streaming::has_model_loaded(joaat("schwarzer")) ||
			   !streaming::has_model_loaded(joaat("a_m_m_bevhills_02"))) {
			system::wait(0);
		}
	}
	else if (iLocal_463 == 3) {
		while (!streaming::has_model_loaded(joaat("tailgater")) ||
			   !streaming::has_model_loaded(joaat("a_m_m_tourist_01"))) {
			system::wait(0);
		}
	}
	else if (iLocal_463 == 4) {
		while (!streaming::has_model_loaded(joaat("intruder")) ||
			   !streaming::has_model_loaded(joaat("s_m_m_paramedic_01")) ||
			   !streaming::has_model_loaded(joaat("a_m_y_genstreet_02")) ||
			   !streaming::has_model_loaded(joaat("a_m_m_bevhills_02"))) {
			system::wait(0);
		}
	}
}

// Position - 0x2D597
void func_330() {
	func_551(&uLocal_455, 8);
	func_551(&uLocal_455, 16);
	func_551(&uLocal_455, 2);
}

// Position - 0x2D5B9
void func_331() {
	float fVar0;

	if (!entity::is_entity_dead(iLocal_2934, 0)) {
		fVar0 = entity::get_entity_speed(iLocal_2934);
	}
	if (fVar0 < 1f && !entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iLocal_2934, 0) &&
		ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_2934, 1)) {
		if (!func_212(&uLocal_2931)) {
			func_508(&uLocal_2931);
		}
		else if (!iLocal_2753) {
			if (func_209(&uLocal_2931) > 30f) {
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1 ||
					script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1) {
						if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0) &&
							ped::is_ped_in_vehicle(Local_2779[0 /*20*/], iLocal_2934, 1)) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_DAWDLE", 9, 0, 0, 0)) {
								iLocal_2753 = 1;
							}
						}
						else if (func_212(&uLocal_2931)) {
							func_379(&uLocal_2931);
						}
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
						if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0) &&
							ped::is_ped_in_vehicle(Local_2779[0 /*20*/], iLocal_2934, 1)) {
							if (func_495(&Local_2391, "TOWAUD", "TOW_DAWDLE2", 9, 0, 0, 0)) {
								iLocal_2753 = 1;
							}
						}
						else if (func_212(&uLocal_2931)) {
							func_379(&uLocal_2931);
						}
					}
				}
				else if (!entity::is_entity_dead(iLocal_2766, 0) &&
						 ped::is_ped_in_vehicle(iLocal_2766, iLocal_2934, 1)) {
					if (func_495(&Local_2391, "TOWAUD", "TONYA_STOP", 9, 1, 0, 0)) {
						iLocal_2753 = 1;
					}
				}
				else if (func_212(&uLocal_2931)) {
					func_379(&uLocal_2931);
				}
			}
		}
	}
	else if (func_212(&uLocal_2931)) {
		func_379(&uLocal_2931);
	}
}

// Position - 0x2D777
void func_332() {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (entity::does_entity_exist(iLocal_469) && !entity::is_entity_dead(iLocal_469, 0)) {
		vVar3 = {entity::get_entity_coords(iLocal_469, 1)};
		if (!iLocal_2759) {
			if (system::vdist2(vVar0, vVar3) > 40000f) {
				if (!entity::is_entity_on_screen(iLocal_469) && !vehicle::is_big_vehicle(iLocal_469) &&
					!vehicle::is_this_model_a_boat(entity::get_entity_model(iLocal_469)) &&
					!vehicle::is_this_model_a_plane(entity::get_entity_model(iLocal_469)) &&
					!vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_469))) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya1")) == 1) {
						entity::set_entity_coords(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_469, 230.2828f);
						vehicle::_0x02398B627547189C(iLocal_469, 0);
						entity::set_entity_load_collision_flag(iLocal_469, 1);
						func_333(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya2")) == 1) {
						entity::set_entity_coords(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_469, 230.2828f);
						vehicle::_0x02398B627547189C(iLocal_469, 0);
						entity::set_entity_load_collision_flag(iLocal_469, 1);
						func_333(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya3")) == 1) {
						entity::set_entity_coords(iLocal_469, -214.5613f, -1397.907f, 30.2688f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_469, 176.0831f);
						vehicle::_0x02398B627547189C(iLocal_469, 0);
						entity::set_entity_load_collision_flag(iLocal_469, 1);
						func_333(iLocal_469, -214.5613f, -1397.907f, 30.2688f, 176.0831f, 24, 0);
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
						entity::set_entity_coords(iLocal_469, 537.5104f, -168.8889f, 53.5066f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_469, 358.4492f);
						vehicle::_0x02398B627547189C(iLocal_469, 0);
						entity::set_entity_load_collision_flag(iLocal_469, 1);
						func_333(iLocal_469, 537.5104f, -168.8889f, 53.5066f, 358.4492f, 24, 0);
					}
					else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
						entity::set_entity_coords(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_469, 230.2828f);
						vehicle::_0x02398B627547189C(iLocal_469, 0);
						entity::set_entity_load_collision_flag(iLocal_469, 1);
						func_333(iLocal_469, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					iLocal_2759 = 1;
				}
			}
		}
	}
}

// Position - 0x2DA19
void func_333(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
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
		func_376(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_373(iParam0, &Var0);
		if (func_372(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_368(iParam5, &Var0, vParam1, fParam4, func_371(iParam0));
		func_334(iParam5, iParam0, 0);
	}
}

// Position - 0x2DB42
void func_334(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_365(&Global_68531.f_555[0 /*21*/], iParam0)) {
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
				Global_101700.f_31389.f_4801 = func_354();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_353(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_335(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x2DC5F
void func_335(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_336(iParam0)) {
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
	func_373(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x2DE61
int func_336(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_351(iParam0, 0, 0) ||
		func_351(iParam0, 1, 0) || func_351(iParam0, 2, 0) || func_371(iParam0) != 145 || func_350(iParam0) ||
		func_349(iParam0) || func_348(iParam0) || func_347(iParam0) || !func_337(entity::get_entity_model(iParam0))) {
		if (func_349(iParam0)) {
		}
		if (func_349(iParam0)) {
		}
		if (func_351(iParam0, 0, 0)) {
		}
		if (func_351(iParam0, 1, 0)) {
		}
		if (func_351(iParam0, 2, 0)) {
		}
		if (func_371(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x2DF3E
int func_337(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_338(iParam0, 0)) {
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

// Position - 0x2E0EF
int func_338(int iParam0, int iParam1) {
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
		if (!func_346()) {
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
		if (!func_345() && !func_344() && !func_343() && !func_342() && !func_346()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_343()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_341(iParam0)) {
			return 0;
		}
	}
	if (!func_339(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x2E27D
int func_339(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_340()) {
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

// Position - 0x2E34C
int func_340() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x2E360
int func_341(int iParam0) {
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

// Position - 0x2F0A3
int func_342() { return 0; }

// Position - 0x2F0AC
int func_343() { return 1; }

// Position - 0x2F0B5
int func_344() { return 1; }

// Position - 0x2F0BE
int func_345() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x2F0D7
bool func_346() {
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

// Position - 0x2F192
int func_347(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_338(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x2F1D9
int func_348(int iParam0) {
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

// Position - 0x2F214
bool func_349(int iParam0) {
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

// Position - 0x2F290
int func_350(int iParam0) {
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

// Position - 0x2F378
bool func_351(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_352(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2F3E9
bool func_352(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x2F4C7
int func_353(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x2F4E3
var func_354() {
	int *iVar0;

	func_364(&iVar0, time::get_clock_seconds());
	func_363(&iVar0, time::get_clock_minutes());
	func_362(&iVar0, time::get_clock_hours());
	func_357(&iVar0, time::get_clock_day_of_month());
	func_356(&iVar0, time::get_clock_month());
	func_355(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x2F529
void func_355(int *iParam0, int iParam1) {
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

// Position - 0x2F5AF
void func_356(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x2F5E2
void func_357(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_361(*uParam0);
	iVar1 = func_359(*uParam0);
	if (iParam1 < 1 || iParam1 > func_358(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x2F633
int func_358(int iParam0, int iParam1) {
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

// Position - 0x2F6D5
var func_359(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_360(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x2F6FA
int func_360(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x2F711
int func_361(var uParam0) { return uParam0 & 15; }

// Position - 0x2F71E
void func_362(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x2F758
void func_363(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x2F793
void func_364(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x2F7CF
bool func_365(var *uParam0, int iParam1) {
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
		uParam0->f_4 = func_366(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_366(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_366(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_366(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_366(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_366(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_366(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_366(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_366(2, 1);
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
		if (func_346()) {
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
		if (func_346()) {
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
		if (!func_372(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_372(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_372(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x30EC7
int func_366(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_153(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_367(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x30F09
void func_367(int iParam0, var *uParam1, int iParam2) {
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

// Position - 0x3116A
void func_368(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_365(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_370(iParam0);
			func_369(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_180(iParam0, 1);
		}
	}
}

// Position - 0x31269
void func_369(var *uParam0, var *uParam1) {
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

// Position - 0x31335
void func_370(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_365(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_180(iParam0, 0);
		}
	}
}

// Position - 0x313AF
int func_371(int iParam0) {
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

// Position - 0x31412
bool func_372(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x31459
void func_373(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_27(uParam1);
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
		func_375(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_374(iVar0 + 1));
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

// Position - 0x31707
int func_374(int iParam0) {
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

// Position - 0x317B7
int func_375(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x31891
void func_376(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_370(iParam0);
	func_180(iParam0, 0);
}

// Position - 0x318B8
void func_377() {
	int iVar0;

	if (bLocal_2742) {
		if (!iLocal_2745) {
			if (entity::does_entity_exist(iLocal_2934) && !entity::is_entity_dead(iLocal_2934, 0)) {
				iVar0 = vehicle::get_entity_attached_to_tow_truck(iLocal_2934);
				if (entity::does_entity_exist(iVar0) && !entity::is_entity_dead(iVar0, 0)) {
					if (entity::is_entity_a_vehicle(iVar0)) {
						if (entity::get_vehicle_index_from_entity_index(iVar0) != Local_2779[0 /*20*/].f_6) {
							if (!iLocal_2723) {
								func_506(&Local_2391, 3, iLocal_2766, "TONYA", 0, 1);
								func_207("TOW_TUT_07", -1);
								if (func_495(&uLocal_527, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0)) {
									iLocal_2723 = 1;
								}
							}
						}
					}
				}
				else {
					iLocal_2723 = 0;
				}
			}
		}
	}
}

// Position - 0x31963
void func_378(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x3197C
void func_379(var *uParam0) { func_380(uParam0, 0f); }

// Position - 0x3198B
void func_380(int *iParam0, float fParam1) {
	uParam0->f_1 = func_210(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x319B9
bool func_381(var *uParam0, float *fParam1, var *uParam2, var uParam3) {
	vector3 vVar0;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = gameplay::get_random_int_in_range(0, 3999) / 1000;
	if (iVar10 == 0) {
		fVar8 = -gameplay::get_random_float_in_range(450f, 700f);
		fVar9 = gameplay::get_random_float_in_range(-100f, 100f);
	}
	else if (iVar10 == 1) {
		fVar8 = gameplay::get_random_float_in_range(450f, 700f);
		fVar9 = gameplay::get_random_float_in_range(100f, 100f);
	}
	else if (iVar10 == 2) {
		fVar9 = gameplay::get_random_float_in_range(450f, 700f);
		fVar8 = gameplay::get_random_float_in_range(-100f, 100f);
	}
	else {
		fVar9 = -gameplay::get_random_float_in_range(450f, 700f);
		fVar8 = gameplay::get_random_float_in_range(-100f, 100f);
	}
	vVar0 = {entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), fVar8, fVar9, 0f)};
	if (!pathfind::get_random_vehicle_node(vVar0, 10f, 1, 1, 1, &vVar5, &uVar4)) {
		return false;
	}
	pathfind::get_nth_closest_vehicle_node_with_heading(vVar5, 2, uParam2, fParam1, &uVar3, 1, 3f, 0f);
	*uParam0 = {vVar5};
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
		*uParam0 = {-476.1537f, 132.6556f, 62.9586f};
		*fParam1 = 87.951f;
	}
	if (func_372(*uParam0, 0f, 0f, 0f, 0)) {
		return false;
	}
	return true;
}

// Position - 0x31AFA
void func_382(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
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
		func_244(1);
		if (iParam0 <= Global_91528) {
		}
		iVar1 = func_421(script::get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94) {
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_419(iVar1);
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
			iVar5 = func_203(script::get_this_script_name(), 1);
			if (iVar5 != -1) {
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_158(iVar5)}, 4);
				stats::playstats_mission_checkpoint(&uVar6, 0, Global_91528, iParam0);
			}
			else {
				iVar10 = func_418(&Global_91491.f_3);
				if (iVar10 > -1) {
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_383(iParam0, sParam1, iParam4, iParam5);
		if (gameplay::are_strings_equal(sParam1, "")) {
		}
	}
	else if (iParam0 < Global_91528) {
	}
}

// Position - 0x31C71
void func_383(int iParam0, var uParam1, int iParam2, int iParam3) {
	func_384(&Global_96040, script::get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

// Position - 0x31C8D
void func_384(var *uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_226();
	uParam0->f_1 = func_354();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_405(&uParam0->f_2305, 0);
		func_404(player::player_ped_id());
		func_398(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_397()) {
			func_393(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
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
		func_386(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_385(&uParam0->f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

// Position - 0x32B15
int func_385(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x32B37
void func_386(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_151(iParam2);
	}
	if (func_392(iParam2, &iVar0, iParam3, iParam5)) {
		func_387(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_387(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x32BBF
int func_387(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_389(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_388(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x32BFF
bool func_388(int iParam0) {
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

// Position - 0x32C2D
void func_389(var *uParam0, int iParam1, int iParam2) {
	func_373(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_391(iParam1, 145, 0);
	uParam0->f_11 = func_371(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_390(iParam1);
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

// Position - 0x32D09
int func_390(int iParam0) {
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

// Position - 0x32D4B
int func_391(int iParam0, int iParam1, int iParam2) {
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
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_366(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x32DD9
bool func_392(int iParam0, var *uParam1, int iParam2, int iParam3) {
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
						if (func_351(*uParam1, func_226(), 1)) {
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

// Position - 0x32F0B
void func_393(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_151(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_396(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_395(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_153(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_394(161, -1)) {
				uParam1->f_59 = func_72(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_72(747, Global_69521, 0);
			}
			uParam1->f_60 = func_72(748, Global_69521, 0);
			uParam1->f_61 = func_72(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_394(161, -1)) {
				uParam1->f_59 = func_72(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_72(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x330B5
bool func_394(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_71(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x330E1
void func_395(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_151(iParam0);
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

// Position - 0x33629
void func_396(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_151(iParam0);
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

// Position - 0x3386A
int func_397() {
	func_156();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x33883
void func_398(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_151(iParam0);
	if (func_153(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_399(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
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

// Position - 0x33976
void func_399(int iParam0, var *uParam1) {
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
			iVar3 = func_403(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_403(iVar0));
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
					iVar2 = func_401(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_401(vVar4.x, iVar1);
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
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_400(Var9.f_1) && iVar70 < 50) {
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

// Position - 0x33BDA
int func_400(int iParam0) {
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

// Position - 0x33D48
int func_401(int iParam0, int iParam1) {
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
			iVar1 = func_402(iParam0, &uVar2);
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

// Position - 0x34835
int func_402(int iParam0, var *uParam1) {
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

// Position - 0x34870
int func_403(int iParam0) {
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

// Position - 0x34AE4
void func_404(int iParam0) {
	int iVar0;

	iVar0 = func_151(iParam0);
	if (func_153(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x34B20
void func_405(var *uParam0, int iParam1) {
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
		if (func_408(&iVar0)) {
			if (func_407(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_226();
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
		else if (func_406(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x3507C
bool func_406(vector3 vParam0, char *sParam3, vector3 vParam4) {
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

// Position - 0x350C0
bool func_407(int iParam0, var *uParam1, float *fParam2) {
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
	return !func_372(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x3574F
bool func_408(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_217()) {
			*iParam0 = func_413(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_412(*iParam0) && !func_409(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x357AA
int func_409(int iParam0) { return func_410(iParam0, 0, 1); }

// Position - 0x357BA
int func_410(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_10() == 0) {
			return gameplay::is_bit_set(func_72(func_411(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x3581A
int func_411(int iParam0) {
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

// Position - 0x35AE1
int func_412(int iParam0) { return func_410(iParam0, 5, 1); }

// Position - 0x35AF1
int func_413(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_417(iVar0)) {
			if (!iParam5 || func_416(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_414(iVar0, 0), 1);
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

// Position - 0x35B93
Vector3 func_414(int iParam0, int iParam1) {
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

	case 45: return func_415(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x360AD
Vector3 func_415(int iParam0) {
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

// Position - 0x361C3
int func_416(int iParam0) { return func_410(iParam0, 0, 0); }

// Position - 0x361D3
int func_417(int iParam0) {
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

// Position - 0x36446
int func_418(char *sParam0) {
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

// Position - 0x364A0
int func_419(int iParam0) {
	switch (iParam0) {
	case 69:
	case 70: return func_420(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_420(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_420(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_420(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_420(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x3655C
int func_420(int iParam0) {
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

// Position - 0x365B0
int func_421(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_422(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x365DA
int func_422(int iParam0, int iParam1) {
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

// Position - 0x36610
void func_423() {
	vehicle::set_random_trains(0);
	func_185(0, 0);
	func_185(1, 0);
	func_185(2, 0);
	func_185(3, 0);
	func_185(4, 0);
	func_185(5, 0);
	func_185(6, 0);
	func_185(7, 0);
	func_185(8, 0);
	func_185(9, 0);
	func_185(10, 0);
	func_185(11, 0);
}

// Position - 0x36669
void func_424() {
	int iVar0;

	if (!iLocal_2697) {
		iVar0 = system::round((300f - func_428(&uLocal_2901)) * 1000f);
		if (iLocal_463 == 3) {
			if (iVar0 / 1000 < 60) {
				func_425(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else {
				func_425(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0x366DA
void func_425(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			  int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_427(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_426(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&Global_1354542.f_4282.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

// Position - 0x36828
void func_426(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x36841
int func_427(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x3685A
float func_428(var *uParam0) {
	if (func_212(uParam0)) {
		if (func_211(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_210(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return 0f;
}

// Position - 0x36896
void func_429() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12) {
		if (ui::does_blip_exist(vLocal_323[iVar0 /*3*/].f_1)) {
			if (entity::is_entity_dead(vLocal_323[iVar0 /*3*/], 0)) {
				ui::remove_blip(&vLocal_323[iVar0 /*3*/].f_1);
			}
			else if (vLocal_323[iVar0 /*3*/].f_2 && func_298(vLocal_323[iVar0 /*3*/], 1) > 200f) {
				ui::remove_blip(&vLocal_323[iVar0 /*3*/].f_1);
			}
		}
		iVar0++;
	}
}

// Position - 0x36910
void func_430() {
	if (!gameplay::are_strings_equal(&cLocal_315, "")) {
		if (!func_499()) {
			func_495(&Local_139, &cLocal_315, &cLocal_319, 9, 0, 0, 0);
			StringCopy(&cLocal_315, "", 16);
		}
	}
}

// Position - 0x36946
void func_431(int *iParam0, float fParam1, int iParam2) {
	if (func_432(iParam0, fParam1)) {
		if (iParam2) {
			func_207(&cLocal_360, -1);
		}
		else {
			func_378(&cLocal_360, 7500, 1);
		}
	}
}

// Position - 0x36974
bool func_432(int *iParam0, float fParam1) {
	if (func_208(iParam0, fParam1)) {
		func_285(iParam0);
		return true;
	}
	return false;
}

// Position - 0x36992
void func_433(int *iParam0, int iParam1, int iParam2) {
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
		if (func_288(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_288(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x36A76
void func_434(int *iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) {
	int iVar0;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_288(iVar0)) {
		func_449();
	}
	if (!cam::is_gameplay_hint_active()) {
		if (func_444(iParam0, iParam6, iParam8, 0)) {
			func_443(iParam0, vParam1, iParam5);
		}
		if (*iParam0) {
			*iParam0 = 0;
		}
		else if (iParam0->f_6 == 2) {
			if (func_439(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
					ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (cam::is_sphere_visible(vParam1, 1f) && !ui::is_help_message_being_displayed() && iParam7) {
						if (!func_288(iVar0)) {
							func_207(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_438(1);
							}
						}
					}
				}
			}
		}
		else if (func_439(iVar0)) {
			if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
				if (cam::is_sphere_visible(vParam1, 1f) && !ui::is_help_message_being_displayed() && iParam7) {
					if (!func_288(iVar0)) {
						func_207(iVar0, -1);
						iParam0->f_3 = iVar0;
						if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
							func_438(1);
						}
					}
				}
			}
		}
	}
	else {
		if (!gameplay::is_string_null(iVar0)) {
			if (func_288(iVar0) && ui::is_help_message_being_displayed()) {
				ui::clear_help(1);
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					func_433(iParam0, iVar0, 1);
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					func_433(iParam0, iVar0, 1);
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					func_433(iParam0, iVar0, 1);
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					func_433(iParam0, iVar0, 1);
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					func_433(iParam0, iVar0, 1);
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				func_433(iParam0, iVar0, 1);
			}
		}
		if (!func_444(iParam0, iParam6, iParam8, 0)) {
			if (!*iParam0 && !iParam0->f_1 && !func_437(iParam0)) {
				func_435(iParam0);
			}
		}
	}
}

// Position - 0x36D54
void func_435(int *iParam0) {
	if (func_436(player::player_ped_id())) {
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

// Position - 0x36DC2
bool func_436(int iParam0) {
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

// Position - 0x36E1D
bool func_437(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x36E48
int func_438(int iParam0) {
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

// Position - 0x36EF2
bool func_439(char *sParam0) {
	if (!func_440(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_288(sParam0) || func_288("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_438(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_438(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_438(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x36F8C
int func_440(int iParam0, int iParam1, int iParam2) {
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
	if (func_442(0)) {
		return 0;
	}
	if (func_441()) {
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

// Position - 0x37108
bool func_441() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x3711D
bool func_442(int iParam0) {
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

// Position - 0x37177
void func_443(int *iParam0, vector3 vParam1, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	cam::set_cinematic_button_active(0);
	iVar0 = iParam0->f_9;
	iVar1 = iParam0->f_10;
	if (iParam4 == 1726668277) {
		if (iVar0 < 1500) {
			iVar0 = 1500;
		}
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
	}
	cam::set_gameplay_coord_hint(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	ai::task_look_at_coord(player::player_ped_id(), vParam1, -1, iVar2, iVar3);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x37217
bool func_444(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
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
				if (func_448(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_447(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_447(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_448(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_437(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_448(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_447(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_447(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_448(bParam1, bParam2, iParam3)) {
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
				if (!func_448(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_447(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_447(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_448(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_446(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_445(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_445(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_446(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_437(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_440(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_449();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x37583
bool func_445(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_440(bParam0, bParam1, bParam2)) {
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

// Position - 0x375D5
bool func_446(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_440(bParam0, bParam1, bParam2)) {
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

// Position - 0x3761E
bool func_447(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_440(bParam0, bParam1, bParam2)) {
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

// Position - 0x3767D
bool func_448(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_440(bParam0, bParam1, bParam2)) {
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

// Position - 0x376D3
void func_449() { gameplay::set_bit(&G_SleepModeOffOn11, 4); }

// Position - 0x376E3
void func_450(int *iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_433(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_434(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x37719
int func_451(int iParam0) {
	if (bLocal_510 || iLocal_509) {
		return 0;
	}
	if (iParam0) {
		if (iLocal_511) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x37744
void func_452() {
	Global_14611 = 0;
	func_229();
}

// Position - 0x37754
bool func_453(int iParam0, int iParam1, var *uParam2, int *iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	int iVar0;
	bool bVar1;

	iVar0 = player::player_ped_id();
	if (!entity::is_entity_dead(iVar0, 0) && !entity::is_entity_dead(iParam0, 0)) {
		if (!func_554(*uParam2, 1)) {
			if (func_459(iParam0, uParam2)) {
				*iParam3 = 1;
				return true;
			}
		}
		if (!func_554(*uParam2, 2)) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				*iParam3 = 2;
				return true;
			}
		}
		if (!func_554(*uParam2, 4)) {
			if (func_457(iVar0, iParam0, uParam2, iParam5)) {
				*iParam3 = 4;
				return true;
			}
		}
		if (!func_554(*uParam2, 8)) {
			if (func_456(iVar0, iParam0, uParam2)) {
				*iParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_554(*uParam2, 128);
		if (iParam4) {
			if (func_454(iParam0, iParam1, 1, iParam6, bVar1, 1)) {
				*iParam3 = 32;
				return true;
			}
		}
		else if (!func_554(*uParam2, 16)) {
			if (func_454(iParam0, iParam1, 0, iParam6, bVar1, iParam8)) {
				*iParam3 = 16;
				return true;
			}
		}
	}
	else if (entity::does_entity_exist(iParam0)) {
		if (iParam7 && entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
			*iParam3 = 16;
			return true;
		}
	}
	return false;
}

// Position - 0x3787E
bool func_454(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) {
	int iVar0;
	int iVar1;

	if (bParam3) {
		if (!bLocal_438) {
			iLocal_439 = entity::get_entity_health(iParam0);
			bLocal_438 = true;
		}
		iLocal_440 = entity::get_entity_health(iParam0);
		iLocal_441 = iLocal_439 - iLocal_440;
		iVar0 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
				if (IntToFloat(iLocal_441) > 100f) {
					return true;
				}
			}
		}
		if (bLocal_438) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
				if (IntToFloat(iLocal_441) > 100f) {
					return true;
				}
			}
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		return true;
	}
	if (!bParam3) {
		iVar1 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar1, 1)) {
				return true;
			}
		}
	}
	if (bParam4) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ped::is_ped_being_jacked(iParam0)) {
				if (ped::get_peds_jacker(iParam0) == player::player_ped_id()) {
					return true;
				}
			}
		}
	}
	if (iParam5) {
		if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
			if (entity::is_entity_at_coord(iParam0, entity::get_entity_coords(player::player_ped_id(), 1), 10f, 10f,
										   10f, 0, 1, 0)) {
				if (player::has_player_damaged_at_least_one_ped(player::player_id())) {
					return true;
				}
			}
		}
	}
	if (ped::is_ped_performing_stealth_kill(player::player_ped_id())) {
		if (ped::was_ped_killed_by_stealth(iParam0)) {
			return true;
		}
	}
	if (func_455(player::player_ped_id(), iParam0)) {
		return true;
	}
	if (iParam2) {
		if (ped::is_ped_ragdoll(iParam0) && func_298(iParam0, 1) < 1.5f) {
			return true;
		}
		else if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), ped::get_vehicle_ped_is_in(iParam0, 0))) {
				return true;
			}
		}
		else if (entity::is_entity_touching_entity(player::player_ped_id(), iParam0)) {
			return true;
		}
		if (!entity::is_entity_dead(iParam1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x37A50
bool func_455(int iParam0, int iParam1) {
	int iVar0;

	weapon::get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan")) {
		if (ped::is_ped_shooting(iParam0)) {
			if (system::vdist(entity::get_entity_coords(iParam0, 1), entity::get_entity_coords(iParam1, 1)) < 2.5f) {
				if (ped::is_ped_facing_ped(iParam0, iParam1, 180f)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x37AA5
bool func_456(int iParam0, int iParam1, var *uParam2) {
	if (weapon::is_ped_armed(iParam0, 4)) {
		if (ped::is_ped_shooting(iParam0) && !weapon::is_ped_current_weapon_silenced(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_4),
										   IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x37AF3
bool func_457(int iParam0, int iParam1, var *uParam2, bool bParam3) {
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar0 = {entity::get_entity_coords(iParam1, 1)};
	}
	if (gameplay::is_bullet_in_area(vVar0, 4f, 1)) {
		return true;
	}
	if (gameplay::has_bullet_impacted_in_area(vVar0, system::to_float(uParam2->f_6), 1, 1)) {
		return true;
	}
	if (weapon::is_ped_armed(iParam0, 2)) {
		if (ped::is_ped_shooting(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_6 * 3),
										   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
				if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
					entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
					return true;
				}
			}
		}
		else {
			if (ped::is_ped_in_any_vehicle(entity::get_ped_index_from_entity_index(iParam1), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(entity::get_ped_index_from_entity_index(iParam1), 0);
			}
			if (ped::is_ped_planting_bomb(iParam0) || func_458(iVar3)) {
				if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1),
											   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3),
											   IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
					if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
						entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
						return true;
					}
				}
			}
		}
	}
	if (bParam3) {
		if (gameplay::is_projectile_in_area(vVar0.x - IntToFloat(uParam2->f_6), vVar0.y - IntToFloat(uParam2->f_6),
											vVar0.z - IntToFloat(uParam2->f_6), vVar0.x + IntToFloat(uParam2->f_6),
											vVar0.y + IntToFloat(uParam2->f_6), vVar0.z + IntToFloat(uParam2->f_6),
											0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x37C6C
int func_458(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0) != 0) {
				if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
					if (iVar0 == joaat("weapon_stickybomb")) {
						if (func_299(player::player_ped_id(), iParam0, 1) < 40f) {
							if (player::get_entity_player_is_free_aiming_at(player::player_id(), &iVar1)) {
								if (entity::is_entity_a_vehicle(iVar1) &&
										entity::get_vehicle_index_from_entity_index(iVar1) == iParam0 ||
									entity::is_entity_a_ped(iVar1) &&
										entity::get_ped_index_from_entity_index(iVar1) ==
											vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0)) {
									if (ped::is_ped_on_foot(player::player_ped_id()) &&
											controls::is_control_pressed(0, 24) ||
										ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
											controls::is_control_pressed(0, 69)) {
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x37D3A
bool func_459(int iParam0, var *uParam1) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
				player::is_player_targetting_entity(player::player_id(), iParam0)) {
				if (ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 90f)) {
					if (func_298(iParam0, 1) < uParam1->f_2) {
						if (uParam1->f_1 == 0) {
							uParam1->f_1 = gameplay::get_game_timer();
						}
						else if (gameplay::get_game_timer() - uParam1->f_1 > uParam1->f_3) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x37DBF
void func_460(int *iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, int iParam5, char *sParam6,
			  var *uParam7, int iParam8, int iParam9, var *uParam10) {
	int iVar0;

	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	iParam9 = iParam9;
	iVar0 = 0;
	while (iVar0 < iParam5) {
		if (entity::does_entity_exist((*uParam4)[iVar0])) {
			if (!entity::is_entity_dead((*uParam4)[iVar0], 0) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (func_453((*uParam4)[iVar0], 0, &uLocal_455, &iLocal_462, 0, 1, 0, 1, 1)) {
					ai::task_smart_flee_ped((*uParam4)[iVar0], player::player_ped_id(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*iParam0) {
	case 0:
		if (func_303(iParam1, iParam3, &iLocal_2646, 20, 70f, 65f, 0)) {
			iLocal_2646 = 0;
			*iParam0 = 1;
		}
		break;

	case 1:
		if (entity::does_entity_exist(iParam2)) {
			if (!entity::is_entity_dead(iParam1, 0) && !entity::is_entity_dead(iParam2, 0)) {
				ai::task_vehicle_drive_wander(iParam2, iParam1, 50f, 786469);
				ped::set_ped_keep_task(iParam2, 1);
				entity::set_ped_as_no_longer_needed(&iParam2);
				entity::set_vehicle_as_no_longer_needed(&iParam1);
			}
			*iParam0 = 2;
		}
		break;

	case 2:
		if (iLocal_511) {
			func_379(&uLocal_2556);
			*iParam0 = 3;
		}
		iVar0 = 0;
		while (iVar0 < iParam5) {
			if (entity::does_entity_exist((*uParam4)[iVar0])) {
				if (!entity::is_entity_dead((*uParam4)[iVar0], 0)) {
					if (func_298((*uParam4)[iVar0], 1) < 55f) {
						iLocal_514 = iVar0;
						iLocal_514 = iLocal_514;
						func_379(&uLocal_2556);
						*iParam0 = 3;
					}
				}
			}
			iVar0++;
		}
		break;

	case 3:
		if (!func_215(Local_1913[func_505() /*28*/].f_17)) {
			func_461(uLocal_2390, Local_1913[func_505() /*28*/].f_17, Local_1913[func_505() /*28*/].f_20);
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			if (!iLocal_500) {
				func_506(&uLocal_527, 3, *iParam8, "TONYA", 0, 1);
				if (func_495(&uLocal_527, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0)) {
					iLocal_500 = 1;
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < iParam5) {
			if (!entity::is_entity_dead((*uParam4)[iVar0], 0)) {
				ai::open_sequence_task(&iLocal_464);
				ai::task_play_anim(0, sParam6, (*uParam7)[iVar0], 4f, -4f,
								   gameplay::get_random_int_in_range(10000, 20000), 0, 0, 0, 0, 0);
				ai::task_wander_standard(0, 1193033728, 0);
				ai::close_sequence_task(iLocal_464);
				ai::task_perform_sequence((*uParam4)[iVar0], iLocal_464);
				ai::clear_sequence_task(&iLocal_464);
			}
			iVar0++;
		}
		*iParam0 = 5;
		break;

	case 4: break;

	case 5:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
			if (!iLocal_500) {
				func_506(&uLocal_527, 3, *iParam8, "TONYA", 0, 1);
				if (func_495(&uLocal_527, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0)) {
					iLocal_500 = 1;
				}
			}
			if (!iLocal_512) {
				if (!entity::is_entity_dead(iParam3, 0) && !entity::is_entity_dead(*uParam10, 0)) {
					if (!vehicle::is_vehicle_attached_to_tow_truck(iParam3, *uParam10)) {
						if (!func_212(&uLocal_2571)) {
							func_508(&uLocal_2571);
						}
						else if (func_209(&uLocal_2571) > 20f) {
							if (func_495(&uLocal_527, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0)) {
								iLocal_512 = 1;
							}
						}
					}
				}
			}
		}
		break;
	}
}

// Position - 0x38101
void func_461(int iParam0, vector3 vParam1, vector3 vParam4) {
	ped::remove_scenario_blocking_area(iParam0, 0);
	ped::clear_ped_non_creation_area();
	pathfind::disable_navmesh_in_area(vParam1, vParam4, 0);
}

// Position - 0x38121
int func_462(var *uParam0, var *uParam1, vector3 vParam2, int *iParam5, var *uParam6, var *uParam7, float fParam8,
			 char *sParam9, var *uParam10, int iParam11) {
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	vVar3 = {(*uParam0)[0 /*3*/]};
	vVar3.z++;
	if (gameplay::get_ground_z_for_3d_coord(vVar3, &uVar0, 0) || func_553((*uParam0)[0 /*3*/], 0) < 60f) {
		func_464(uParam1);
		gameplay::clear_area_of_peds(vParam2, 28f, 0);
		(*uParam0)[0 /*3*/].f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11) {
			if (fParam8 == -1f) {
				fParam8 = func_463((*uParam0)[iVar2 /*3*/], vParam2);
			}
			else {
				fParam8 += 180f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya4")) == 1) {
				iVar1 = ped::create_ped(4, joaat("a_m_m_tourist_01"), (*uParam0)[iVar2 /*3*/], fParam8, 1, 1);
				ped::set_ped_component_variation(iVar1, 0, 0, 1, 0);
				ped::set_ped_component_variation(iVar1, 2, 0, 0, 0);
				ped::set_ped_component_variation(iVar1, 3, 0, 2, 0);
				ped::set_ped_component_variation(iVar1, 4, 1, 2, 0);
				ped::set_ped_component_variation(iVar1, 8, 0, 0, 0);
				ped::set_ped_component_variation(iVar1, 10, 1, 1, 0);
				streaming::set_model_as_no_longer_needed(joaat("a_m_m_tourist_01"));
			}
			else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("tonya5")) == 1) {
				if (iVar2 == 0) {
					iVar1 = ped::create_ped(4, joaat("a_m_y_genstreet_02"), (*uParam0)[iVar2 /*3*/], fParam8, 1, 1);
					streaming::set_model_as_no_longer_needed(joaat("a_m_y_genstreet_02"));
				}
				else {
					iVar1 = ped::create_ped(4, joaat("a_m_m_bevhills_02"), (*uParam0)[iVar2 /*3*/], fParam8, 1, 1);
					streaming::set_model_as_no_longer_needed(joaat("a_m_m_bevhills_02"));
				}
			}
			else {
				iVar1 = ped::create_ped(4, (*uParam7)[iVar2 % 2], (*uParam0)[iVar2 /*3*/], fParam8, 1, 1);
			}
			entity::set_entity_load_collision_flag(iVar1, 1);
			fParam8 = -1f;
			if (iParam11 > 1) {
				(*uParam6)[iVar2] = iVar1;
			}
			else {
				*iParam5 = iVar1;
			}
			sParam9 = sParam9;
			(*uParam10)[iVar2] = (*uParam10)[iVar2];
			ped::set_blocking_of_non_temporary_events(iVar1, 1);
			ped::set_ped_config_flag(iVar1, 42, 1);
			ped::set_ped_movement_clipset(iVar1, "move_m@JOG@", 1048576000);
			ped::set_ped_reset_flag(iVar1, 109, 1);
			if (iLocal_463 == 3) {
				ai::clear_sequence_task(&iVar6);
				ai::open_sequence_task(&iVar6);
				ai::task_play_anim(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
				ai::close_sequence_task(iVar6);
				if (!entity::is_entity_dead(iVar1, 0)) {
					ai::task_perform_sequence(iVar1, iVar6);
				}
				ai::clear_sequence_task(&iVar6);
			}
			iVar2++;
		}
		bLocal_485 = true;
		return 1;
	}
	else if (func_553((*uParam0)[0 /*3*/], 0) < 70f) {
	}
	return 0;
}

// Position - 0x3836E
var func_463(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x38388
void func_464(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1) {
		Local_2599[iVar0 /*18*/].f_2 = {(*uParam0)[iVar0 /*3*/]};
		Local_2599[iVar0 /*18*/].f_5 = {0f, 0f, -1f};
		if (iVar0 == 0) {
			Local_2599[iVar0 /*18*/].f_8 = {
				func_465(gameplay::get_random_float_in_range(0f, 1f), gameplay::get_random_float_in_range(0f, 1f), 0f)};
		}
		else {
			Local_2599[iVar0 /*18*/].f_8 = {func_465(0.5f, 1f, 0f)};
		}
		Local_2599[iVar0 /*18*/].f_11 = 2f;
		Local_2599[iVar0 /*18*/].f_12 = 1f;
		Local_2599[iVar0 /*18*/].f_13 = 1f;
		Local_2599[iVar0 /*18*/].f_14 = -1f;
		Local_2599[iVar0 /*18*/].f_15 = 0.1f;
		Local_2599[iVar0 /*18*/].f_17 = 0;
		Local_2599[iVar0 /*18*/].f_1 = 1110;
		Local_2599[iVar0 /*18*/] = graphics::add_decal(Local_2599[iVar0 /*18*/].f_1, Local_2599[iVar0 /*18*/].f_2,
													   Local_2599[iVar0 /*18*/].f_5, Local_2599[iVar0 /*18*/].f_8,
													   Local_2599[iVar0 /*18*/].f_11, Local_2599[iVar0 /*18*/].f_12,
													   0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

// Position - 0x384A5
Vector3 func_465(vector3 vParam0) {
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

// Position - 0x384E4
int func_466() {
	if (iLocal_2641 == -1) {
		if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
			if (vehicle::get_ped_in_vehicle_seat(Local_2779[0 /*20*/].f_6, -1, 0) == Local_2779[0 /*20*/]) {
				func_470("ENGINE_FAIL", &iLocal_2641, 1, Local_2779[0 /*20*/].f_6, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
			}
			else {
				func_302(&iLocal_2641);
			}
		}
	}
	switch (iLocal_2946) {
	case 0:
		func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
		func_506(&Local_2391, iLocal_2839, Local_2779[0 /*20*/], sLocal_2658, 0, 1);
		ped::set_blocking_of_non_temporary_events(Local_2779[0 /*20*/], 1);
		iLocal_2824 = gameplay::get_random_int_in_range(35, 80);
		iLocal_2946 = 1;
		break;

	case 1:
		ai::open_sequence_task(&iLocal_464);
		ai::task_play_anim(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
		ai::close_sequence_task(iLocal_464);
		if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
			ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
		}
		ai::clear_sequence_task(&iLocal_464);
		if (func_553(Local_693[iLocal_2647 /*23*/].f_1, 1) < 40f || Local_2776.f_1 > 0) {
			func_506(&Local_2391, iLocal_2839, Local_2779[0 /*20*/], "TOWTRAINM", 0, 1);
			func_495(&Local_2391, "TOWAUD", "TOW_TRN_PEDA", 8, 0, 0, 0);
			iLocal_2946 = 2;
		}
		else if (func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) <
				 IntToFloat(iLocal_2824 + 10)) {
			ai::task_play_anim(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
			iLocal_2946 = 2;
		}
		break;

	case 2:
		if (!func_215(Local_693[iLocal_2647 /*23*/].f_13)) {
			Local_693[iLocal_2647 /*23*/].f_13.f_2 = 45f;
			Local_693[iLocal_2647 /*23*/].f_16.f_2 = -45f;
			if (!entity::is_entity_in_angled_area(Local_2779[0 /*20*/].f_6, Local_693[iLocal_2647 /*23*/].f_13,
												  Local_693[iLocal_2647 /*23*/].f_16,
												  Local_693[iLocal_2647 /*23*/].f_19, 0, 1, 0)) {
				func_506(&Local_2391, 3, Local_2779[0 /*20*/], "TOWTRAINM", 0, 1);
				func_495(&Local_2391, "TOWAUD", "TOW_TRN_PUSH", 9, 0, 0, 0);
				func_302(&iLocal_2641);
				iLocal_2703 = 1;
				iLocal_2710 = 1;
				bLocal_470 = true;
				if (ped::is_ped_in_any_vehicle(Local_2779[0 /*20*/], 0)) {
					ai::open_sequence_task(&iLocal_464);
					ai::task_leave_any_vehicle(0, 0, 0);
					ai::task_play_anim(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
					ai::close_sequence_task(iLocal_464);
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
					}
					ai::clear_sequence_task(&iLocal_464);
					ped::set_ped_movement_clipset(Local_2779[0 /*20*/], "move_m@JOG@", 1048576000);
					iLocal_2946 = 4;
				}
			}
		}
		if (func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) < IntToFloat(iLocal_2824 + 15)) {
			func_495(&Local_2391, "TOWAUD", "TOW_TRN_PEDA", 9, 0, 0, 0);
			func_302(&iLocal_2641);
			ai::task_look_at_entity(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_7, -1, 2, 2);
			system::settimerb(0);
			iLocal_2946 = 3;
		}
		break;

	case 3:
		if (func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) < IntToFloat(iLocal_2824)) {
			if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
				if (iLocal_2823 == 1) {
					func_468(&Local_2776);
				}
				iLocal_2703 = 1;
				if (ped::is_ped_in_any_vehicle(Local_2779[0 /*20*/], 0)) {
					ai::open_sequence_task(&iLocal_464);
					ai::task_leave_any_vehicle(0, 0, 0);
					ai::task_go_to_coord_any_means(
						0,
						object::_get_object_offset_from_coords(Local_693[iLocal_2647 /*23*/].f_1,
															   Local_693[iLocal_2647 /*23*/].f_4, 0f, 15f, 0f),
						3f, 0, 0, 786603, -1082130432);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
					ai::close_sequence_task(iLocal_464);
					ped::set_ped_flee_attributes(Local_2779[0 /*20*/], 64, 0);
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
					}
					ai::clear_sequence_task(&iLocal_464);
					iLocal_2946 = 4;
				}
			}
		}
		break;

	case 4:
		if (iLocal_2945 == 8 && iLocal_511 || func_467()) {
			system::settimerb(3000);
			iLocal_2946 = 5;
		}
		break;

	case 5:
		iLocal_2709 = 1;
		if (system::timerb() > 3000) {
			if (func_296(&iLocal_2943, 0, "TOW_TRAIN1")) {
				iLocal_2946 = 6;
			}
		}
		break;

	case 6: break;
	}
	return 0;
}

// Position - 0x38968
int func_467() {
	if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
		if (bLocal_470) {
			switch (iLocal_2841) {
			case 0:
				if (ai::get_sequence_progress(Local_2779[0 /*20*/]) == 1) {
					iLocal_2841 = 1;
				}
				break;

			case 1:
				if (!entity::is_entity_playing_anim(Local_2779[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d",
													3)) {
					iLocal_2841 = 2;
				}
				break;

			case 2: return 1;
			}
		}
	}
	return 0;
}

// Position - 0x389DB
void func_468(int iParam0) {
	iParam0->f_1 = 0;
	cam::destroy_cam(*iParam0, 0);
	cam::render_script_cams(0, 0, 3000, 1, 0, 0);
}

// Position - 0x389FC
float func_469(int iParam0, vector3 vParam1, int iParam4) {
	if (entity::is_entity_dead(iParam0, 0)) {
		return -1f;
	}
	return gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1), vParam1, iParam4);
}

// Position - 0x38A26
void func_470(char *sParam0, int *iParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6,
			  char *sParam7) {
	func_302(iParam1);
	if (iParam2) {
		*iParam1 = audio::get_sound_id();
	}
	else {
		*iParam1 = -1;
	}
	if (iParam3 != 0) {
		audio::play_sound_from_entity(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if (fParam4 != 0f || fParam5 != 0f || fParam6 != 0f) {
		audio::play_sound_from_coord(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else {
		audio::play_sound_frontend(*iParam1, sParam0, sParam7, 1);
	}
}

// Position - 0x38A9D
bool func_471() {
	vector3 vVar0;

	if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0) && !entity::is_entity_dead(iLocal_2934, 0)) {
		if (ped::is_ped_in_vehicle(Local_2779[0 /*20*/], iLocal_2934, 0)) {
			if (ui::does_blip_exist(Local_2779[0 /*20*/].f_10)) {
				ui::remove_blip(&Local_2779[0 /*20*/].f_10);
				func_302(&iLocal_2641);
			}
		}
		else if (!ped::is_ped_in_vehicle(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 0)) {
			func_302(&iLocal_2641);
		}
	}
	func_475();
	switch (iLocal_2945) {
	case 0:
		if (func_553(Local_693[iLocal_2647 /*23*/].f_1, 1) < 100f) {
			Local_2779[0 /*20*/].f_7 =
				vehicle::create_mission_train(6, Local_693[iLocal_2647 /*23*/].f_6, Local_693[iLocal_2647 /*23*/].f_5);
			if (entity::does_entity_exist(Local_2779[0 /*20*/].f_7)) {
				Local_2779[0 /*20*/].f_10 = ui::add_blip_for_entity(Local_2779[0 /*20*/].f_7);
			}
			iLocal_2765 =
				ped::create_ped_inside_vehicle(Local_2779[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_2765, 1);
			streaming::set_model_as_no_longer_needed(joaat("s_m_m_lsmetro_01"));
			if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0)) {
				vehicle::set_train_cruise_speed(Local_2779[0 /*20*/].f_7, 0f);
			}
			func_378("TOW_OBJ_05", 7500, 1);
			system::settimera(0);
			func_470("CROSSING_BELL", &iLocal_2642, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
			iLocal_2945 = 1;
		}
		break;

	case 1:
		if (func_553(Local_693[iLocal_2647 /*23*/].f_1, 1) < 80f || system::timera() > 10000) {
			if (!audio::is_audio_scene_active("TOWING_ONCOMING_TRAIN_SCENE")) {
				audio::start_audio_scene("TOWING_ONCOMING_TRAIN_SCENE");
			}
			iLocal_2945 = 2;
		}
		break;

	case 2:
		if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0)) {
			vehicle::set_train_cruise_speed(Local_2779[0 /*20*/].f_7, 26f);
			vehicle::set_train_speed(Local_2779[0 /*20*/].f_7, 22f);
		}
		iLocal_2945 = 3;
		break;

	case 3:
		if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0) &&
			!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) < 175f) {
				func_474(Local_2779[0 /*20*/].f_7);
				func_470("TRAIN_BREAKS", &iLocal_2640, 1, Local_2779[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
				func_473(&uLocal_2953, Local_2779[0 /*20*/].f_7);
				func_470("TRAIN_HORN", &iLocal_2639, 1, Local_2779[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
				iLocal_2945 = 4;
			}
		}
		else {
			iLocal_2945 = 8;
		}
		break;

	case 4:
		if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0) &&
			!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			func_474(Local_2779[0 /*20*/].f_7);
			if (!entity::is_entity_in_angled_area(Local_2779[0 /*20*/].f_6, Local_693[iLocal_2647 /*23*/].f_13,
												  Local_693[iLocal_2647 /*23*/].f_16,
												  Local_693[iLocal_2647 /*23*/].f_19, 0, 1, 0)) {
				func_472(&uLocal_2953);
			}
			vVar0 = {entity::get_entity_coords(Local_2779[0 /*20*/].f_7, 1)};
			if (func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) < 3f) {
				iLocal_2693 = 1;
			}
			if (entity::is_entity_touching_entity(Local_2779[0 /*20*/].f_7, Local_2779[0 /*20*/].f_6)) {
				if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
						vehicle::detach_vehicle_from_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6);
					}
				}
				vehicle::explode_vehicle(Local_2779[0 /*20*/].f_6, 1, 0);
				iLocal_2945 = 6;
			}
			else if (func_469(Local_2779[0 /*20*/].f_6, vVar0, 1) < 10f &&
					 entity::is_entity_in_angled_area(Local_2779[0 /*20*/].f_6, Local_693[iLocal_2647 /*23*/].f_13,
													  Local_693[iLocal_2647 /*23*/].f_16,
													  Local_693[iLocal_2647 /*23*/].f_19, 0, 1, 0)) {
				iLocal_2693 = 1;
				if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
						vehicle::detach_vehicle_from_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6);
					}
				}
				vehicle::explode_vehicle(Local_2779[0 /*20*/].f_6, 1, 0);
			}
			if (iLocal_2693 && func_469(Local_2779[0 /*20*/].f_7, Local_693[iLocal_2647 /*23*/].f_1, 1) > 4f) {
				iLocal_2945 = 6;
			}
		}
		else {
			iLocal_2945 = 6;
		}
		break;

	case 6:
		if (!bLocal_510) {
			if (!iLocal_511) {
				func_378("TOWT_OBJ_03G", 7500, 1);
			}
		}
		else {
			StringCopy(&cLocal_2863, "TOWT_OBJ_03G", 64);
		}
		func_302(&iLocal_2639);
		func_302(&iLocal_2640);
		func_472(&uLocal_2953);
		func_302(&iLocal_2641);
		func_302(&iLocal_2642);
		iLocal_2945 = 7;
		break;

	case 7:
		if (!func_499()) {
			if (!bLocal_510) {
				if (!iLocal_511) {
					func_378("TOWT_OBJ_03G", 7500, 1);
				}
			}
			else {
				StringCopy(&cLocal_2863, "TOWT_OBJ_03G", 64);
			}
			if (audio::is_audio_scene_active("TOWING_ONCOMING_TRAIN_SCENE")) {
				audio::stop_audio_scene("TOWING_ONCOMING_TRAIN_SCENE");
			}
			iLocal_2945 = 8;
		}
		break;

	case 8: break;
	}
	return false;
}

// Position - 0x38FE0
void func_472(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if ((*uParam0)[iVar0] != 0) {
			graphics::stop_particle_fx_looped((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

// Position - 0x39017
void func_473(var *uParam0, int iParam1) {
	(*uParam0)[0] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f,
																 -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f,
																 -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f,
																 -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f,
																 -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f,
																 -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f,
																 -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f,
																 -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = graphics::start_particle_fx_looped_on_entity("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f,
																 -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

// Position - 0x3918F
int func_474(int iParam0) {
	float fVar0;

	if (!func_212(&uLocal_2636)) {
		func_508(&uLocal_2636);
	}
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			fVar0 = entity::get_entity_speed(iParam0);
		}
		else {
			return 0;
		}
	}
	if (func_208(&uLocal_2636, 0.15f)) {
		fLocal_2643 = fVar0 - 0.35f;
		if (fLocal_2643 < 8f) {
			fLocal_2643 = 8f;
		}
		func_379(&uLocal_2636);
		vehicle::set_train_cruise_speed(iParam0, fLocal_2643);
		vehicle::set_train_speed(iParam0, fLocal_2643);
	}
	return 1;
}

// Position - 0x39214
void func_475() {
	if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
		if (entity::is_entity_touching_entity(Local_2779[0 /*20*/].f_7, Local_2779[0 /*20*/].f_6)) {
			if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
					vehicle::detach_vehicle_from_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6);
				}
			}
			vehicle::explode_vehicle(Local_2779[0 /*20*/].f_6, 1, 0);
		}
	}
}

// Position - 0x392A5
bool func_476() {
	switch (iLocal_2944) {
	case 0:
		if (bLocal_2717) {
			if (!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				Local_2779[0 /*20*/] =
					ped::create_ped_inside_vehicle(Local_2779[0 /*20*/].f_6, 26, uLocal_2772[0], 0, 1, 1);
				streaming::set_model_as_no_longer_needed(uLocal_2772[0]);
				ped::set_blocking_of_non_temporary_events(Local_2779[0 /*20*/], 1);
				ped::set_ped_config_flag(Local_2779[0 /*20*/], 42, 1);
				func_506(&Local_2391, iLocal_2839, Local_2779[0 /*20*/], sLocal_2658, 0, 1);
				ai::task_play_anim(Local_2779[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0,
								   0, 0);
				bLocal_485 = true;
			}
		}
		else if (func_484()) {
			bLocal_2716 = false;
		}
		else {
			bLocal_2716 = false;
		}
		iLocal_2944 = 1;
		break;

	case 1:
		if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
				if (!bLocal_2717) {
					func_483(&uLocal_2904, 1f);
				}
				else {
					func_508(&uLocal_2904);
				}
			}
		}
		if (func_212(&uLocal_2904) && func_209(&uLocal_2904) > 1f) {
			if (func_212(&uLocal_2904)) {
				if (bLocal_2717) {
					if (Global_101700.f_18932.f_4 % 2 == 0) {
						if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
							ai::open_sequence_task(&iLocal_464);
							ai::task_leave_any_vehicle(0, 0, 0);
							ai::task_go_to_entity(0, iLocal_2934, 20000, 9f, 1f, 1073741824, 0);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_play_anim(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0,
											   0);
							ai::task_wander_standard(0, 1193033728, 0);
							ai::close_sequence_task(iLocal_464);
							if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
								ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
							}
							ai::clear_sequence_task(&iLocal_464);
						}
						func_495(&Local_2391, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else {
						if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
							func_482(Local_2779[0 /*20*/]);
							ped::set_ped_combat_attributes(Local_2779[0 /*20*/], 0, 0);
							ped::set_ped_combat_attributes(Local_2779[0 /*20*/], 1, 0);
							ai::open_sequence_task(&iLocal_464);
							ai::task_leave_any_vehicle(0, 0, 0);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
							ai::close_sequence_task(iLocal_464);
							if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
								ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
							}
							ai::clear_sequence_task(&iLocal_464);
							if (entity::does_entity_exist(Local_2779[0 /*20*/])) {
								iLocal_2768 = ui::add_blip_for_entity(Local_2779[0 /*20*/]);
								ui::set_blip_colour(iLocal_2768, 1);
								ui::set_blip_scale(iLocal_2768, 0.7f);
								func_481(Local_2779[0 /*20*/], iLocal_2768, 1);
							}
							bLocal_2716 = true;
						}
						func_495(&Local_2391, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_2944 = 2;
				}
				else if (bLocal_2716) {
					Local_2779[0 /*20*/] = ped::create_ped(4, uLocal_2772[0], Local_693[iLocal_2647 /*23*/].f_6,
														   Local_693[iLocal_2647 /*23*/].f_9, 1, 1);
					ped::set_blocking_of_non_temporary_events(Local_2779[0 /*20*/], 1);
					ped::set_ped_config_flag(Local_2779[0 /*20*/], 42, 1);
					bLocal_485 = true;
					sLocal_2652 = "TOW_PED_ANGR";
					bLocal_485 = false;
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::open_sequence_task(&iLocal_464);
						ai::task_go_to_entity(0, iLocal_2934, 20000, 15f, 3f, 1073741824, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_464);
						ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
						ai::clear_sequence_task(&iLocal_464);
					}
					iLocal_2944 = 3;
				}
				else {
					Local_2779[0 /*20*/] =
						ped::create_ped(4, joaat("a_m_m_genfat_01"), Local_693[iLocal_2647 /*23*/].f_6,
										Local_693[iLocal_2647 /*23*/].f_9, 1, 1);
					ped::set_blocking_of_non_temporary_events(Local_2779[0 /*20*/], 1);
					ped::set_ped_config_flag(Local_2779[0 /*20*/], 42, 1);
					entity::set_entity_load_collision_flag(Local_2779[0 /*20*/], 1);
					ped::set_ped_movement_clipset(Local_2779[0 /*20*/], "move_m@JOG@", 1048576000);
					streaming::set_model_as_no_longer_needed(joaat("a_m_m_genfat_01"));
					func_506(&Local_2391, 6, Local_2779[0 /*20*/], "TOWILLEGALMAN1", 0, 1);
					bLocal_485 = true;
					sLocal_2652 = "TOW_ILLEG2";
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::open_sequence_task(&iLocal_464);
						ai::task_goto_entity_offset(0, player::player_ped_id(), 20000, 8f, 0f, 2f, 0);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
						ai::close_sequence_task(iLocal_464);
						if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
							ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
						}
						ai::clear_sequence_task(&iLocal_464);
					}
					iLocal_2944 = 3;
				}
			}
		}
		break;

	case 2:
		if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
			if (!ped::is_ped_in_any_vehicle(Local_2779[0 /*20*/], 0)) {
				if (bLocal_2717) {
					if (!func_499()) {
						if (ai::get_script_task_status(Local_2779[0 /*20*/], 242628503) == 1) {
							if (ai::get_sequence_progress(Local_2779[0 /*20*/]) == 2) {
								if (Global_101700.f_18932.f_4 % 2 == 0) {
									func_495(&Local_2391, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
								}
								else {
									func_495(&Local_2391, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
								}
								iLocal_2944 = 8;
							}
						}
					}
				}
				else if (!entity::is_entity_dead(iLocal_2934, 0) &&
						 !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
					if (func_479() ||
						!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
						func_452();
						iLocal_2944 = 5;
					}
				}
			}
		}
		break;

	case 3:
		if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
			if (func_299(Local_2779[0 /*20*/], player::player_ped_id(), 1) < 12f) {
				if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
					ai::clear_ped_tasks(Local_2779[0 /*20*/]);
				}
				if (bLocal_2716) {
					ai::task_combat_ped(Local_2779[0 /*20*/], player::player_ped_id(), 0, 16);
				}
				else if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
					ai::open_sequence_task(&iLocal_464);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
					ai::task_play_anim(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
					ai::close_sequence_task(iLocal_464);
					if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
						ai::task_perform_sequence(Local_2779[0 /*20*/], iLocal_464);
					}
					ai::clear_sequence_task(&iLocal_464);
				}
				iLocal_2705 = 1;
				system::settimerb(0);
				func_379(&uLocal_2898);
				iLocal_2944 = 4;
			}
		}
		break;

	case 4:
		func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
		func_506(&Local_2391, iLocal_2839, Local_2779[0 /*20*/], sLocal_2658, 0, 1);
		iLocal_2711 = 1;
		func_478(Local_2391, "TOWAUD", sLocal_2652, 0);
		system::settimera(0);
		if (bLocal_2716) {
			func_379(&uLocal_2898);
			iLocal_2944 = 6;
		}
		else {
			iLocal_2944 = 6;
		}
		break;

	case 5:
		if (!func_499()) {
			func_379(&uLocal_2898);
			if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0) &&
				!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0) && !entity::is_entity_dead(iLocal_2934, 0)) {
				if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
					ai::task_follow_to_offset_of_entity(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 0f, 0f, 0f, 2f,
														-1, 10f, 1);
				}
			}
			iLocal_2944 = 6;
		}
		break;

	case 6:
		func_477(0);
		if (!iLocal_2722) {
			if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
				if (!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
					iLocal_2944 = 7;
				}
				else {
					iLocal_2944 = 7;
				}
			}
		}
		break;

	case 7:
		func_477(0);
		if (entity::does_entity_exist(Local_2779[0 /*20*/])) {
			if (ped::is_ped_in_any_vehicle(Local_2779[0 /*20*/], 0) && !entity::is_entity_dead(iLocal_2934, 0) &&
				!entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0) &&
				!vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6)) {
				if (bLocal_2716) {
					sLocal_2652 = "TOW_PED_ANTH";
				}
				bLocal_2721 = true;
				func_495(&Local_2391, "TOWAUD", sLocal_2652, 9, 0, 0, 0);
				iLocal_2711 = 0;
				ai::task_vehicle_drive_wander(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 5f, 786597);
				iLocal_2944 = 8;
				return true;
			}
		}
		break;

	case 8:
		iLocal_2705 = 0;
		iLocal_2711 = 0;
		if (ui::does_blip_exist(Local_2779[0 /*20*/].f_9)) {
			ui::remove_blip(&Local_2779[0 /*20*/].f_9);
		}
		break;
	}
	return false;
}

// Position - 0x39AE1
void func_477(int iParam0) {
	int iVar0;
	float fVar1;

	iVar0 = 0;
	fVar1 = func_299(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 1);
	if (iParam0) {
		if (!entity::is_entity_dead(iLocal_2934, 0) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_6, 0)) {
			if (vehicle::is_vehicle_attached_to_tow_truck(iLocal_2934, Local_2779[0 /*20*/].f_6) &&
				!ped::is_ped_in_vehicle(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_6, 0)) {
				iVar0 = 1;
			}
		}
	}
	if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
		if (entity::has_entity_been_damaged_by_entity(Local_2779[0 /*20*/], player::player_ped_id(), 1) ||
			entity::has_entity_been_damaged_by_entity(player::player_ped_id(), Local_2779[0 /*20*/], 1)) {
			func_379(&uLocal_2898);
			entity::clear_entity_last_damage_entity(Local_2779[0 /*20*/]);
			entity::clear_entity_last_damage_entity(player::player_ped_id());
		}
	}
	if (entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
		iLocal_2944 = 8;
	}
	else if (fVar1 > 25f || func_209(&uLocal_2898) > 30f && fVar1 > 5f || iVar0 ||
			 !entity::is_entity_dead(player::player_ped_id(), 0) && weapon::is_ped_armed(player::player_ped_id(), 6)) {
		vLocal_2762[0] = Local_2779[0 /*20*/];
		vLocal_2762[1] = Local_2779[0 /*20*/].f_1;
		iLocal_2722 = 1;
		vLocal_2762 = {vLocal_2762};
		ui::remove_blip(&Local_2779[0 /*20*/].f_9);
		if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
			ai::clear_ped_tasks(Local_2779[0 /*20*/]);
			ai::task_smart_flee_ped(Local_2779[0 /*20*/], player::player_ped_id(), 1000f, -1, 0, 0);
		}
		iLocal_2944 = 8;
	}
}

// Position - 0x39C6D
void func_478(struct<165> Param0, char *sParam165, char *sParam166, int iParam167) {
	if (iParam167) {
		audio::stop_scripted_conversation(0);
	}
	StringCopy(&cLocal_315, sParam165, 16);
	StringCopy(&cLocal_319, sParam166, 16);
	Local_139 = {Param0};
}

// Position - 0x39C98
int func_479() {
	struct<6> Var0;

	switch (iLocal_2947) {
	case 0:
		if (ai::get_sequence_progress(Local_2779[0 /*20*/]) >= 1 && !ui::is_message_being_displayed()) {
			iLocal_2947 = 1;
		}
		break;

	case 1:
		Var0 = {func_480()};
		if (uLocal_2724 && !iLocal_2725) {
			if (!func_499()) {
				if (!iLocal_2726) {
					func_378("TOWT_OBJ_06", 7500, 1);
					iLocal_2726 = 1;
				}
				if (iLocal_2726 && !ui::is_message_being_displayed()) {
					if (func_495(&Local_2391, "TOWAUD", "TOW_SEX_SCAR", 9, 0, 0, 0)) {
						iLocal_2725 = 1;
						iLocal_2947 = 2;
					}
				}
			}
		}
		if (gameplay::are_strings_equal(&Var0, "TOW_SEX_SCAR_2")) {
			if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
				if (ai::get_script_task_status(Local_2779[0 /*20*/], -875674219) != 1) {
					ai::task_turn_ped_to_face_entity(Local_2779[0 /*20*/], Local_2779[0 /*20*/].f_1, 0);
				}
			}
		}
		if (func_298(Local_2779[0 /*20*/], 1) > 20f) {
			audio::stop_scripted_conversation(1);
			return 1;
		}
		break;

	case 2:
		if (func_298(Local_2779[0 /*20*/], 1) > 20f) {
			audio::stop_scripted_conversation(1);
			return 1;
		}
		if (!func_499()) {
			return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x39DD2
struct<6> func_480() {
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		iVar6 = audio::get_current_scripted_conversation_line();
		iVar6 += Global_16755;
		if (iVar6 > -1) {
			return Global_14613[iVar6 /*6*/];
		}
		else {
			return Var0;
		}
	}
	return Var0;
}

//Position - 0x39E18
int func_481(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12) {
		if (vLocal_323[iVar0 /*3*/] == iParam0 && !ui::does_blip_exist(vLocal_323[iVar0 /*3*/].f_1)) {
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		if (!ui::does_blip_exist(vLocal_323[iVar0 /*3*/].f_1)) {
			vLocal_323[iVar0 /*3*/] = iParam0;
			vLocal_323[iVar0 /*3*/].f_1 = iParam1;
			vLocal_323[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x39E9B
void func_482(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			ped::set_ped_combat_ability(iParam0, 1);
			ped::set_ped_combat_range(iParam0, 1);
			ped::set_ped_combat_attributes(iParam0, 23, 0);
			ped::set_ped_combat_movement(iParam0, 2);
			weapon::give_weapon_to_ped(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			ped::set_ped_shoot_rate(iParam0, 500);
		}
	}
}

// Position - 0x39EEE
void func_483(var *uParam0, float fParam1) {
	if (!func_212(uParam0)) {
		func_380(uParam0, fParam1);
	}
}

// Position - 0x39F08
bool func_484() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return true;
	}
	return false;
}

// Position - 0x39F29
int func_485(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12,
			 var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19,
			 var uParam20, var uParam21, int *iParam22, var *uParam23, char *sParam24, var uParam25, bool bParam26,
			 int iParam27) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (iLocal_2644 != 12) {
		func_489(Param2, iParam0, iParam1);
	}
	if (!bLocal_510) {
		if (iLocal_2644 >= 6 && iLocal_2644 <= 11) {
			if (bParam26) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (entity::is_entity_at_coord(player::player_ped_id(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f,
												   2f, 1, 1, 0)) {
					}
				}
			}
		}
		switch (iLocal_2644) {
		case 0:
			if (func_303(iParam1, iParam0, &iLocal_2646, 10, 90f, 100f, 0)) {
				vehicle::set_vehicle_tyres_can_burst(iParam1, 0);
				func_506(&Local_2391, 3, *iParam27, "TONYA", 0, 1);
				func_506(&Local_2391, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
				func_495(&Local_2391, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
				iLocal_2644 = 1;
			}
			break;

		case 1:
			if (!func_499()) {
				func_207("TOW_TUT_03", -1);
				system::settimera(0);
				iLocal_2644 = 2;
			}
			break;

		case 2:
			if (iLocal_511) {
				ui::clear_help(1);
				iLocal_2644 = 4;
			}
			if (system::timera() > 5000) {
				if (system::timera() > 12000 || func_299(iParam0, iParam1, 1) < 15f)
					&&func_299(iParam0, iParam1, 1) < 30f && !func_499() {
						func_495(&Local_2391, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2644 = 3;
					}
			}
			break;

		case 3:
			if (!iLocal_511) {
				if (!func_499() && !func_288("TOW_TUT_03")) {
					func_488("TOW_TUT_02");
					iLocal_2644 = 4;
				}
			}
			else {
				iLocal_2644 = 4;
			}
			break;

		case 4:
			if (system::timera() > 5000 || iLocal_511) {
				if (system::timera() > 12000 || func_299(iParam0, iParam1, 1) < 7.5f ||
					iLocal_511 && func_299(iParam0, iParam1, 1) < 30f) {
					iLocal_486 = 1;
					iLocal_486 = iLocal_486;
					func_488("TOW_TUT_01");
					iLocal_2644 = 5;
				}
			}
			break;

		case 5:
			if (system::timera() > 8000) {
				iLocal_2644 = 6;
			}
			break;

		case 6:
			if (!func_499() && !ui::is_message_being_displayed() && system::timera() > 12000) {
				if (!iLocal_503) {
					func_207("TOWT_HELP_CR", -1);
					iLocal_503 = 1;
				}
			}
			if (entity::is_entity_in_angled_area(iParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0)) {
				func_495(&Local_2391, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
				if (ui::does_blip_exist(*uParam22)) {
					ui::set_blip_route(*uParam22, 0);
					ui::remove_blip(uParam22);
				}
				StringCopy(sParam24, "TOW_TUT_04A", 64);
				(*uParam23)[0 /*3*/] = {Param2.f_14};
				fLocal_473 = func_553(Param2.f_14, 0);
				*iParam22 = ui::add_blip_for_coord(Param2.f_14);
				system::settimerb(0);
				iLocal_2644 = 7;
			}
			break;

		case 7:
			if (!func_499()) {
				if (system::timerb() > 6000) {
					system::settimera(0);
					func_378("TOW_TUT_04A", 7500, 1);
					iLocal_2644 = 9;
				}
			}
			break;

		case 9:
			if (func_215(Param2.f_14)) {
				iLocal_2644 = 10;
			}
			if (!func_499()) {
				if (entity::is_entity_in_angled_area(iParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0)) {
					uLocal_513 = gameplay::get_game_timer();
					if (bLocal_487) {
						ui::set_blip_route(*iParam22, 0);
						ui::remove_blip(iParam22);
						(*uParam23)[0 /*3*/] = {Param2.f_14};
						fLocal_473 = func_553(Param2.f_14, 0);
						*iParam22 = ui::add_blip_for_coord(Param2.f_14);
					}
					if (ui::does_blip_exist(*iParam22)) {
						ui::set_blip_colour(*iParam22, 5);
					}
					iLocal_2644 = 10;
				}
			}
			break;

		case 10:
			if (!func_215(Param2.f_14)) {
				vVar0 = {Param2.f_7};
				vVar3 = {Param2.f_10};
				fVar6 = Param2.f_13;
			}
			else {
				vVar0 = {Param2};
				vVar3 = {Param2.f_3};
				fVar6 = Param2.f_6;
			}
			if (entity::is_entity_in_angled_area(iParam1, vVar0, vVar3, fVar6, 0, 1, 0)) {
				func_207("TOWT_HELP_UH", -1);
				func_487();
				if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
					if (vehicle::is_vehicle_attached_to_tow_truck(iParam0, iParam1)) {
						iLocal_2644 = 11;
					}
				}
			}
			else {
				func_486();
			}
			break;

		case 11:
			if (!func_215(Param2.f_14)) {
				vVar0 = {Param2.f_7};
				vVar3 = {Param2.f_10};
				fVar6 = Param2.f_13;
			}
			else {
				vVar0 = {Param2};
				vVar3 = {Param2.f_3};
				fVar6 = Param2.f_6;
			}
			if (entity::is_entity_in_angled_area(iParam1, vVar0, vVar3, fVar6, 0, 1, 0)) {
				func_207("TOWT_HELP_UH", -1);
				func_487();
			}
			if (entity::does_entity_exist(iParam0) && entity::does_entity_exist(iParam1) &&
				!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
				if (!vehicle::is_vehicle_attached_to_tow_truck(iParam0, iParam1)) {
					ui::clear_help(1);
					ui::clear_prints();
					func_433(&iLocal_442, 0, 0);
					iLocal_2644 = 12;
				}
			}
			break;

		case 12: break;
		}
		if (bParam26) {
			if (entity::does_entity_exist(iParam0) && entity::does_entity_exist(iParam1) &&
				!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
				if (vehicle::is_vehicle_attached_to_tow_truck(iParam0, iParam1) && !bLocal_2645) {
					if (func_499()) {
						if (ui::is_help_message_being_displayed()) {
							ui::clear_help(1);
						}
						func_452();
						iLocal_2644 = 6;
					}
					else {
						func_274(*iParam22);
						system::settimera(0);
						iLocal_2644 = 6;
						func_495(&Local_2391, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2645 = true;
					}
				}
			}
			if (!iLocal_505) {
				if (bLocal_2645) {
					if (!func_499()) {
						ui::clear_help(1);
						func_378("TOWT_OBJ_06", 7500, 1);
						iLocal_505 = 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x3A507
void func_486() {
	switch (iLocal_519) {
	case 0:
		if (!func_212(&uLocal_2568)) {
			func_508(&uLocal_2568);
		}
		else if (func_209(&uLocal_2568) > 10f) {
			if (func_495(&uLocal_527, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0)) {
				iLocal_519 = 1;
			}
		}
		break;

	case 1:
		if (!func_499()) {
			if (func_495(&uLocal_527, "TOWAUD", "TOW_RESP", 9, 0, 0, 0)) {
				func_379(&uLocal_2568);
				iLocal_519 = 2;
			}
		}
		break;

	case 2:
		if (func_212(&uLocal_2568)) {
			if (func_209(&uLocal_2568) > 15f) {
				if (!func_499()) {
					if (func_495(&uLocal_527, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0)) {
						iLocal_519 = 3;
					}
				}
			}
		}
		break;

	case 3: break;
	}
}

// Position - 0x3A5E4
void func_487() {
	if (!iLocal_502) {
		if (!ui::is_message_being_displayed()) {
			if (!func_499()) {
				if (func_495(&uLocal_527, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0)) {
					iLocal_502 = 1;
				}
			}
		}
	}
}

// Position - 0x3A61F
void func_488(char *sParam0) {
	system::settimera(0);
	func_207(sParam0, -1);
}

// Position - 0x3A633
void func_489(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12,
			  var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19,
			  int iParam20, int iParam21) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (!entity::does_entity_exist(iParam20) || !entity::does_entity_exist(iParam21)) {
		return;
	}
	if (entity::is_entity_dead(iParam20, 0) || entity::is_entity_dead(iParam21, 0)) {
		return;
	}
	if (!func_215(Param0.f_14)) {
		vVar0 = {Param0.f_7};
		vVar3 = {Param0.f_10};
		fVar6 = Param0.f_13;
	}
	else {
		vVar0 = {Param0};
		vVar3 = {Param0.f_3};
		fVar6 = Param0.f_6;
	}
	if (!iLocal_488) {
		if (entity::is_entity_in_angled_area(iParam21, vVar0, vVar3, fVar6, 0, 1, 0)) {
			if (!entity::is_entity_dead(iParam20, 0) && !entity::is_entity_dead(iParam21, 0)) {
				if (!vehicle::is_vehicle_attached_to_tow_truck(iParam20, iParam21)) {
					ui::clear_help(1);
					ui::clear_prints();
					iLocal_2644 = 12;
					iLocal_488 = 1;
				}
			}
		}
	}
}

// Position - 0x3A705
int func_490(int *iParam0, int iParam1, var *uParam2, int *iParam3, int iParam4) {
	int iVar0;

	if (entity::does_entity_exist(iParam1)) {
		iVar0 = *uParam2 - entity::get_entity_health(iParam1);
	}
	if (fLocal_471 == 0f) {
	}
	if (iVar0 > 0) {
		if (entity::does_entity_exist(iParam1)) {
			if (!entity::is_entity_dead(iParam1, 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
						ped::is_ped_in_vehicle(player::player_ped_id(), iParam1, 0) ||
					entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
					*iParam3 += iVar0;
				}
				else if (entity::does_entity_exist(iParam1)) {
					*uParam2 = entity::get_entity_health(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*iParam0) {
	case 0:
		if (*iParam3 > 250) {
			if (iParam4) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0)) {
					*iParam0 = 1;
				}
			}
			else if (func_495(&Local_2391, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0)) {
				*iParam0 = 1;
			}
			if (iParam4) {
				fLocal_471 += 25f;
			}
		}
		break;

	case 1:
		if (*iParam3 > 500) {
			if (iParam4) {
				if (func_495(&Local_2391, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0)) {
					*iParam0 = 2;
				}
			}
			else if (func_495(&Local_2391, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0)) {
				*iParam0 = 2;
			}
			if (iParam4) {
				fLocal_471 += 25f;
			}
		}
		break;

	case 2:
		if (*iParam3 > 900) {
			if (iParam4) {
				func_495(&Local_2391, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
				*iParam0 = 3;
			}
			else {
				func_495(&Local_2391, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
				*iParam0 = 3;
			}
			if (iParam4) {
				fLocal_471 += 75f;
			}
		}
		break;

	case 3: break;
	}
	if (entity::does_entity_exist(iParam1)) {
		*uParam2 = entity::get_entity_health(iParam1);
	}
	return 0;
}

// Position - 0x3A8DA
void func_491() {
	if (iLocal_2941 < 16) {
		switch (iLocal_2885) {
		case 2: sLocal_2651 = "TOW_FAIL_05"; break;

		case 0: sLocal_2651 = "TOW_FAIL_10"; break;

		case 6: sLocal_2651 = "DTRSHRD_FAIL_03"; break;

		case 1: sLocal_2651 = "TOW_FAIL_08"; break;

		case 10: sLocal_2651 = "TOW_FAIL_17"; break;

		case 11: sLocal_2651 = "TOW_FAIL_08"; break;

		case 12: sLocal_2651 = "TOW_FAIL_08a"; break;

		case 13: sLocal_2651 = "TOW_FAIL_16"; break;

		case 4: sLocal_2651 = "TOW_FAIL_12"; break;

		case 5: sLocal_2651 = "TOW_FAIL_01"; break;

		case 3: sLocal_2651 = "TOW_FAIL_03a"; break;

		case 8: sLocal_2651 = "TOW_FAIL_04"; break;

		case 9: sLocal_2651 = "TOW_FAIL_04a"; break;

		case 14: sLocal_2651 = "TOW_FAIL_06"; break;

		case 15: sLocal_2651 = "TOW_FAIL_07"; break;

		case 16: sLocal_2651 = "TOW_FAIL_09"; break;

		case 17: sLocal_2651 = "TOW_FAIL_09a"; break;

		case 18: sLocal_2651 = "TOW_FAIL_02"; break;

		case 19: sLocal_2651 = "TOW_FAIL_02b"; break;

		case 20: sLocal_2651 = "TOW_FAIL_02b"; break;

		case 21: sLocal_2651 = "TOW_FAIL_11"; break;

		case 22: sLocal_2651 = "TOW_FAIL_13"; break;

		case 23: sLocal_2651 = "TOW_FAIL_14"; break;
		}
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			sLocal_2651 = "TOW_FAIL_15";
		}
		if (!gameplay::is_string_null_or_empty(sLocal_2651)) {
			func_4(sLocal_2651);
		}
		bLocal_2688 = true;
	}
}

// Position - 0x3AAA3
int func_492(int *iParam0, int iParam1, int iParam2, var *uParam3, int *iParam4, int iParam5) {
	int iVar0;

	if (entity::does_entity_exist(iParam1)) {
		iVar0 = *uParam3 - entity::get_entity_health(iParam1);
	}
	if (iParam5) {
		if (iVar0 > 0) {
			if (entity::does_entity_exist(iParam1) && entity::does_entity_exist(iParam2)) {
				if (!entity::is_entity_dead(iParam1, 0) && !entity::is_entity_dead(iParam2, 0)) {
					if (entity::is_entity_touching_entity(iParam1, iParam2) ||
						vehicle::is_vehicle_attached_to_tow_truck(iParam2, iParam1) ||
						entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
						*iParam4 += iVar0;
					}
					else if (entity::does_entity_exist(iParam1)) {
						*uParam3 = entity::get_entity_health(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*iParam0) {
		case 0:
			if (*iParam4 > 250) {
				*iParam0 = 1;
				func_494("TOW_DMG_01", 25, -1);
				func_493(func_226(), 1, 25);
				fLocal_471 += 25f;
			}
			break;

		case 1:
			if (*iParam4 > 500) {
				*iParam0 = 2;
				func_494("TOW_DMG_01", 75, -1);
				func_493(func_226(), 1, 75);
				fLocal_471 += 75f;
			}
			break;

		case 2:
			if (*iParam4 > 550) {
				*iParam0 = 3;
				func_207("TOW_DMG_03", -1);
			}
			break;

		case 3:
			if (*iParam4 > 900) {
				return 0;
			}
			break;
		}
	}
	if (entity::does_entity_exist(iParam1)) {
		*uParam3 = entity::get_entity_health(iParam1);
	}
	return 1;
}

// Position - 0x3AC06
int func_493(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_243(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x3AC4F
void func_494(char *sParam0, int iParam1, int iParam2) {
	ui::begin_text_command_display_help(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::end_text_command_display_help(0, 0, 1, iParam2);
}

// Position - 0x3AC6C
bool func_495(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_230(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_220(sParam2, iParam3, 0);
}

// Position - 0x3ACBA
void func_496() {
	Global_14611 = 0;
	func_497();
}

// Position - 0x3ACCA
void func_497() {
	if (audio::is_scripted_conversation_ongoing()) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x3ACEE
struct<6> func_498() {
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		iVar6 = audio::get_current_scripted_conversation_line();
		iVar6 += Global_16755;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1) {
			if (ui::does_text_label_exist(&Global_14613[iVar7 /*6*/])) {
				return Global_14613[iVar7 /*6*/];
			}
			else {
				iVar8 = iVar7;
				while (iVar8 < 70) {
					if (ui::does_text_label_exist(&Global_14613[iVar8 /*6*/])) {
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else {
			return Var0;
		}
	}
	return Var0;
}

//Position - 0x3AD9A
bool func_499()
{
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x3ADBC
void func_500(int iParam0, int *iParam1, var *uParam2, var *uParam3, char *sParam4, int *iParam5, int iParam6,
			  bool bParam7, int *iParam8, bool bParam9, var uParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;

	uParam10 = uParam10;
	if (iParam11) {
		if (ui::does_blip_exist(*iParam1)) {
			ui::remove_blip(iParam1);
		}
		*iParam5 = gameplay::get_game_timer();
		bLocal_510 = !func_501(iParam0);
		return;
	}
	else if (!ui::does_blip_exist(*iParam1) && bLocal_510) {
		*iParam1 = ui::add_blip_for_entity(*iParam0);
		ui::set_blip_colour(*iParam1, 3);
		ui::set_blip_route(*iParam1, 1);
	}
	if (!bParam9) {
		if (!bLocal_510) {
			if (!func_501(iParam0)) {
				ui::clear_small_prints();
				*iParam5 = gameplay::get_game_timer();
				if (iParam13) {
					if (iLocal_483) {
						func_378("DTRSHRD_03", 7500, 1);
						iLocal_483 = 0;
					}
					if (!ui::does_blip_exist(*iParam1)) {
						*iParam1 = ui::add_blip_for_entity(*iParam0);
						ui::set_blip_colour(*iParam1, 3);
						ui::set_blip_route(*iParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1) {
					if (ui::does_blip_exist((*uParam2)[iVar0 /*20*/].f_8)) {
						ui::set_blip_route((*uParam2)[iVar0 /*20*/].f_8, 0);
						ui::remove_blip(&(*uParam2)[iVar0 /*20*/].f_8);
						*iParam8 = 0;
					}
					iVar0++;
				}
				if (ui::does_blip_exist((*uParam2)[0 /*20*/].f_9)) {
					ui::remove_blip(&(*uParam2)[0 /*20*/].f_9);
				}
				bLocal_510 = true;
			}
		}
		else if (func_501(iParam0)) {
			if (ui::does_blip_exist(*iParam1)) {
				ui::remove_blip(iParam1);
			}
			if (!ped::is_ped_injured((*uParam2)[0 /*20*/])) {
				if (!ped::is_ped_in_vehicle((*uParam2)[0 /*20*/], *iParam0, 0) &&
					!ped::is_ped_in_vehicle((*uParam2)[0 /*20*/], (*uParam2)[iParam6 /*20*/].f_6, 0)) {
					if (!ui::does_blip_exist((*uParam2)[0 /*20*/].f_9)) {
						(*uParam2)[0 /*20*/].f_9 = ui::add_blip_for_entity((*uParam2)[iVar0 /*20*/]);
						ui::set_blip_colour((*uParam2)[0 /*20*/].f_9, 3);
						ui::set_blip_scale((*uParam2)[0 /*20*/].f_9, 0.7f);
					}
				}
			}
			if (iLocal_484) {
				func_378(sParam4, 7500, 1);
				iLocal_484 = 0;
			}
			if (!func_215((*uParam3)[0 /*3*/]) && iParam12 == 9) {
				if (!ui::does_blip_exist((*uParam2)[0 /*20*/].f_8)) {
					(*uParam2)[0 /*20*/].f_8 = ui::add_blip_for_coord((*uParam3)[0 /*3*/]);
					ui::set_blip_route((*uParam2)[0 /*20*/].f_8, 1);
				}
			}
			else if (bParam7) {
				if (!entity::is_entity_dead((*uParam2)[iParam6 /*20*/].f_6, 0)) {
					if (!ui::does_blip_exist((*uParam2)[iParam6 /*20*/].f_8)) {
						(*uParam2)[iParam6 /*20*/].f_8 = ui::add_blip_for_entity((*uParam2)[iParam6 /*20*/].f_6);
						ui::set_blip_colour((*uParam2)[iParam6 /*20*/].f_8, 3);
						ui::set_blip_route((*uParam2)[0 /*20*/].f_8, 1);
					}
				}
				else {
					if (iLocal_463 == 3) {
						Local_693[iLocal_2647 /*23*/].f_1 = {-476.1537f, 132.6556f, 62.9586f};
					}
					if (!ui::does_blip_exist((*uParam2)[0 /*20*/].f_8)) {
						(*uParam2)[0 /*20*/].f_8 = ui::add_blip_for_coord(Local_693[iLocal_2647 /*23*/].f_1);
						ui::set_blip_colour((*uParam2)[0 /*20*/].f_8, 3);
						ui::set_blip_route((*uParam2)[0 /*20*/].f_8, 1);
					}
				}
			}
			else {
				iVar0 = 0;
				while (iVar0 < 1) {
					if (!entity::is_entity_dead((*uParam2)[iVar0 /*20*/].f_6, 0)) {
						if (!ui::does_blip_exist((*uParam2)[iVar0 /*20*/].f_8)) {
							(*uParam2)[iVar0 /*20*/].f_8 = ui::add_blip_for_entity((*uParam2)[iVar0 /*20*/].f_6);
							ui::set_blip_colour((*uParam2)[iVar0 /*20*/].f_8, 3);
							ui::set_blip_route((*uParam2)[iVar0 /*20*/].f_8, 1);
						}
					}
					else {
						if (iLocal_463 == 3) {
							Local_693[iLocal_2647 /*23*/].f_1 = {-476.1537f, 132.6556f, 62.9586f};
						}
						if (!ui::does_blip_exist((*uParam2)[0 /*20*/].f_8)) {
							(*uParam2)[0 /*20*/].f_8 = ui::add_blip_for_coord(Local_693[iLocal_2647 /*23*/].f_1);
							ui::set_blip_colour((*uParam2)[0 /*20*/].f_8, 3);
							ui::set_blip_route((*uParam2)[0 /*20*/].f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*iParam5 = 0;
			bLocal_510 = false;
		}
	}
}

// Position - 0x3B14F
bool func_501(var *uParam0) {
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (ped::get_vehicle_ped_is_in(player::player_ped_id(), 0) != *uParam0) {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}
	return true;
}

// Position - 0x3B1A4
void func_502(var *uParam0) {
	if (*uParam0 != 0) {
		if (!uParam0->f_7) {
			if (object::_does_door_exist(*uParam0)) {
				object::remove_door_from_system(*uParam0);
			}
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
}

// Position - 0x3B1FC
void func_503(var *uParam0, int iParam1, float fParam2, int iParam3) {
	if (*uParam0 != 0) {
		if (iParam3 <= 0) {
			if (fParam2 != 99.9f) {
				object::_set_door_ajar_angle(*uParam0, fParam2, 0, 1);
			}
			if (iParam1) {
				object::_set_door_acceleration_limit(*uParam0, 1, 0, 1);
			}
			else {
				object::_set_door_acceleration_limit(*uParam0, 0, 0, 1);
			}
			uParam0->f_6 = 0;
			uParam0->f_5 = 0;
		}
		else if (fParam2 != 99.9f) {
			uParam0->f_1 = 1;
			uParam0->f_4 = iParam1;
			uParam0->f_2 = fParam2;
			uParam0->f_6 = gameplay::get_game_timer();
			uParam0->f_5 = iParam3;
			uParam0->f_3 = object::_0x65499865FCA6E5EC(*uParam0);
		}
	}
}

// Position - 0x3B288
void func_504() {
	switch (iLocal_463) {
	case 2:
		if (Global_101700.f_18932.f_4 % 2 == 0) {
			sLocal_2658 = "TOWABDBITCHM";
			iLocal_2839 = 2;
		}
		else {
			sLocal_2658 = "TOWABDATTACKM";
			iLocal_2839 = 2;
		}
		break;

	case 4: break;

	case 3:
		sLocal_2658 = "TOWBREAKDOWN1";
		iLocal_2839 = 3;
		break;

	case 0:
		sLocal_2658 = "TOWHANDIBEGM";
		iLocal_2839 = 5;
		break;

	case 1:
		sLocal_2658 = "TOWTRAINM";
		iLocal_2839 = 3;
		break;
	}
}

// Position - 0x3B311
int func_505() { return Local_693[iLocal_2647 /*23*/].f_22; }

// Position - 0x3B323
void func_506(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x3B3BE
int func_507(float fParam0, int iParam1, int iParam2) {
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;

	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53) {
		fVar2 = func_553(Local_693[iVar58 /*23*/].f_1, 1);
		if (!func_215(Local_693[iVar58 /*23*/].f_1)) {
			if (fVar2 < fParam0 && fVar2 > fVar0 && iVar58 != iParam2) {
				if (iParam1 == -1) {
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_693[iVar58 /*23*/] == iParam1) {
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1) {
		iVar1 = iVar3[gameplay::get_random_int_in_range(0, iVar57 - 1)];
	}
	else if (iVar57 == 1) {
		iVar1 = iVar3[0];
	}
	else {
		return 0;
	}
	return iVar1;
}

// Position - 0x3B48C
void func_508(var *uParam0) {
	if (!func_212(uParam0)) {
		func_379(uParam0);
	}
}

// Position - 0x3B4A4
void func_509() {
	vLocal_88[0 /*3*/] = {-227.6f, -1172.1f, 21.8963f};
	vLocal_88[1 /*3*/] = {-205.6866f, -1384.333f, 30.2585f};
	vLocal_88[2 /*3*/] = {-205.6866f, -1384.333f, 30.2585f};
	vLocal_88[3 /*3*/] = {532.4957f, -172.2088f, 53.6835f};
	vLocal_88[4 /*3*/] = {1151.507f, -773.4066f, 56.61f};
	vLocal_88[5 /*3*/] = {808.4329f, -822.9456f, 25.1821f};
	vLocal_88[6 /*3*/] = {2502.613f, 4080.141f, 37.6307f};
	vLocal_88[7 /*3*/] = {263.4725f, 2601.842f, 43.8197f};
	vLocal_113[0 /*3*/] = {401.6046f, -1632.781f, 28.2928f};
}

// Position - 0x3B572
void func_510(var *uParam0) {
	(*uParam0)[0 /*28*/][0 /*3*/] = {568.8983f, -1698.723f, 28.2631f};
	(*uParam0)[0 /*28*/][1 /*3*/] = {575.1474f, -1697.549f, 28.2631f};
	(*uParam0)[0 /*28*/][2 /*3*/] = {584.8786f, -1703.875f, 28.2631f};
	(*uParam0)[0 /*28*/].f_27 = 3;
	(*uParam0)[0 /*28*/].f_23 = {565.9069f, -1702.813f, 28.2227f};
	(*uParam0)[0 /*28*/].f_26 = 58.4094f;
	(*uParam0)[0 /*28*/].f_17 = {564.5385f, -1689.707f, 38.2854f};
	(*uParam0)[0 /*28*/].f_20 = {605.4141f, -1715.221f, 18.0923f};
	(*uParam0)[1 /*28*/][0 /*3*/] = {240.0033f, -1141.433f, 28.3033f};
	(*uParam0)[1 /*28*/][1 /*3*/] = {240.5303f, -1137.75f, 28.3091f};
	(*uParam0)[1 /*28*/][2 /*3*/] = {229.8743f, -1145.763f, 28.3013f};
	(*uParam0)[1 /*28*/].f_27 = 3;
	(*uParam0)[1 /*28*/].f_23 = {239.0778f, -1134.141f, 28.2367f};
	(*uParam0)[1 /*28*/].f_26 = 266.7983f;
	(*uParam0)[1 /*28*/].f_17 = {242.7403f, -1124.753f, 38.3223f};
	(*uParam0)[1 /*28*/].f_20 = {225.7671f, -1152.415f, 18.2047f};
	(*uParam0)[1 /*28*/].f_10[0 /*3*/] = {232.3824f, -1137.855f, 28.1944f};
	(*uParam0)[1 /*28*/].f_10[1 /*3*/] = {230.8579f, -1136.252f, 28.0348f};
	(*uParam0)[2 /*28*/][0 /*3*/] = {-95.1473f, -1716.656f, 28.4491f};
	(*uParam0)[2 /*28*/][1 /*3*/] = {-93.1677f, -1717.84f, 28.4239f};
	(*uParam0)[2 /*28*/].f_27 = 2;
	(*uParam0)[2 /*28*/].f_23 = {-102.9092f, -1729.668f, 28.7511f};
	(*uParam0)[2 /*28*/].f_26 = 105.1153f;
	(*uParam0)[2 /*28*/].f_10[0 /*3*/] = {-99.8953f, -1726.702f, 28.4622f};
	(*uParam0)[2 /*28*/].f_10[1 /*3*/] = {-101.1025f, -1728.689f, 28.6286f};
	(*uParam0)[3 /*28*/][0 /*3*/] = {-117.7085f, -1321.069f, 28.2857f};
	(*uParam0)[3 /*28*/][1 /*3*/] = {-116.6308f, -1325.362f, 28.3192f};
	(*uParam0)[3 /*28*/].f_27 = 2;
	(*uParam0)[3 /*28*/].f_23 = {-112.3024f, -1329.219f, 28.2685f};
	(*uParam0)[3 /*28*/].f_26 = 179.9845f;
	(*uParam0)[3 /*28*/].f_10[0 /*3*/] = {-113.1683f, -1319.459f, 28.2125f};
	(*uParam0)[3 /*28*/].f_10[1 /*3*/] = {-112.2886f, -1322.422f, 28.2633f};
	(*uParam0)[4 /*28*/][0 /*3*/] = {308.2367f, -1706.026f, 28.3827f};
	(*uParam0)[4 /*28*/][1 /*3*/] = {298.1392f, -1700.768f, 28.3234f};
	(*uParam0)[4 /*28*/].f_27 = 2;
	(*uParam0)[4 /*28*/].f_23 = {314.1078f, -1704.305f, 28.3111f};
	(*uParam0)[4 /*28*/].f_26 = 227.316f;
	(*uParam0)[4 /*28*/].f_10[0 /*3*/] = {304.5671f, -1697.522f, 28.2629f};
	(*uParam0)[4 /*28*/].f_10[1 /*3*/] = {308.3995f, -1699.695f, 28.3051f};
	(*uParam0)[5 /*28*/][0 /*3*/] = {776.3322f, -2046.078f, 28.2818f};
	(*uParam0)[5 /*28*/][1 /*3*/] = {776.0253f, -2048.392f, 28.2653f};
	(*uParam0)[5 /*28*/].f_27 = 2;
	(*uParam0)[5 /*28*/].f_23 = {787.8897f, -2034.542f, 28.2393f};
	(*uParam0)[5 /*28*/].f_26 = 348.1702f;
	(*uParam0)[5 /*28*/].f_10[0 /*3*/] = {782.5989f, -2047.48f, 28.159f};
	(*uParam0)[5 /*28*/].f_10[1 /*3*/] = {783.3265f, -2051.183f, 28.1589f};
	(*uParam0)[6 /*28*/][0 /*3*/] = {28.2787f, -986.7457f, 28.5094f};
	(*uParam0)[6 /*28*/][1 /*3*/] = {35.6153f, -988.3468f, 28.4971f};
	(*uParam0)[6 /*28*/][2 /*3*/] = {38.553f, -985.1667f, 28.5576f};
	(*uParam0)[6 /*28*/].f_27 = 3;
	(*uParam0)[6 /*28*/].f_23 = {43.6799f, -982.0863f, 28.4103f};
	(*uParam0)[6 /*28*/].f_26 = 251.1427f;
	(*uParam0)[6 /*28*/].f_10[0 /*3*/] = {30.5244f, -980.0237f, 28.4037f};
	(*uParam0)[6 /*28*/].f_10[1 /*3*/] = {34.0509f, -979.3044f, 28.4079f};
	(*uParam0)[7 /*28*/][0 /*3*/] = {99.1579f, -1521.963f, 28.3247f};
	(*uParam0)[7 /*28*/][1 /*3*/] = {105.699f, -1527.331f, 28.3186f};
	(*uParam0)[7 /*28*/].f_27 = 2;
	(*uParam0)[7 /*28*/].f_23 = {95.4077f, -1529.473f, 28.3325f};
	(*uParam0)[7 /*28*/].f_26 = 51.3731f;
	(*uParam0)[7 /*28*/].f_10[0 /*3*/] = {100.3829f, -1529.783f, 28.2238f};
	(*uParam0)[7 /*28*/].f_10[1 /*3*/] = {97.5322f, -1531.58f, 28.3374f};
	(*uParam0)[8 /*28*/][0 /*3*/] = {370.2508f, -871.9623f, 28.2916f};
	(*uParam0)[8 /*28*/][1 /*3*/] = {364.377f, -872.4929f, 28.2916f};
	(*uParam0)[8 /*28*/].f_27 = 2;
	(*uParam0)[8 /*28*/].f_23 = {370.0709f, -865.2366f, 28.2507f};
	(*uParam0)[8 /*28*/].f_26 = 271.3831f;
	(*uParam0)[8 /*28*/].f_10[0 /*3*/] = {363.9474f, -865.3307f, 28.2621f};
	(*uParam0)[8 /*28*/].f_10[1 /*3*/] = {361.2415f, -866.9158f, 28.1908f};
	(*uParam0)[9 /*28*/][0 /*3*/] = {258.1324f, -2035.098f, 17.2524f};
	(*uParam0)[9 /*28*/][1 /*3*/] = {263.1343f, -2026.365f, 17.7171f};
	(*uParam0)[9 /*28*/].f_27 = 2;
	(*uParam0)[9 /*28*/].f_23 = {260.0068f, -2041.806f, 16.9454f};
	(*uParam0)[9 /*28*/].f_26 = 140.9065f;
	(*uParam0)[9 /*28*/].f_10[0 /*3*/] = {264.5263f, -2036.198f, 17.2682f};
	(*uParam0)[9 /*28*/].f_10[1 /*3*/] = {264.3815f, -2032.379f, 17.329f};
	(*uParam0)[10 /*28*/][0 /*3*/] = {411.4076f, -1869.433f, 25.5691f};
	(*uParam0)[10 /*28*/][1 /*3*/] = {416.1884f, -1862.589f, 26.0458f};
	(*uParam0)[10 /*28*/].f_27 = 2;
	(*uParam0)[10 /*28*/].f_23 = {412.9648f, -1876.901f, 25.3104f};
	(*uParam0)[10 /*28*/].f_26 = 135.5291f;
	(*uParam0)[10 /*28*/].f_10[0 /*3*/] = {418.299f, -1872.54f, 25.6552f};
	(*uParam0)[10 /*28*/].f_10[1 /*3*/] = {419.0923f, -1869.039f, 25.6907f};
	(*uParam0)[11 /*28*/][0 /*3*/] = {500.9577f, -1664.881f, 28.7134f};
	(*uParam0)[11 /*28*/][1 /*3*/] = {501.1261f, -1668.809f, 28.7152f};
	(*uParam0)[11 /*28*/].f_27 = 2;
	(*uParam0)[11 /*28*/].f_23 = {503.8388f, -1661.237f, 28.4841f};
	(*uParam0)[11 /*28*/].f_26 = 50.8842f;
	(*uParam0)[11 /*28*/].f_10[0 /*3*/] = {507.0525f, -1670.254f, 28.7152f};
	(*uParam0)[11 /*28*/].f_10[1 /*3*/] = {507.7841f, -1665.116f, 28.4902f};
	(*uParam0)[12 /*28*/][0 /*3*/] = {-208.9247f, -660.1125f, 32.629f};
	(*uParam0)[12 /*28*/][1 /*3*/] = {-204.0615f, -660.8978f, 32.7011f};
	(*uParam0)[12 /*28*/][2 /*3*/] = {-198.1905f, -664.2867f, 32.8159f};
	(*uParam0)[12 /*28*/].f_27 = 3;
	(*uParam0)[12 /*28*/].f_23 = {-213.0429f, -666.7334f, 32.6039f};
	(*uParam0)[12 /*28*/].f_26 = 70.1131f;
	(*uParam0)[12 /*28*/].f_10[0 /*3*/] = {-210.6179f, -667.8796f, 32.6494f};
	(*uParam0)[12 /*28*/].f_10[1 /*3*/] = {-204.9018f, -667.8836f, 32.6425f};
	(*uParam0)[13 /*28*/][0 /*3*/] = {-310.1606f, -869.7873f, 30.6891f};
	(*uParam0)[13 /*28*/][1 /*3*/] = {-315.0338f, -869.8134f, 30.6555f};
	(*uParam0)[13 /*28*/][2 /*3*/] = {-319.5981f, -868.6276f, 30.6449f};
	(*uParam0)[13 /*28*/].f_27 = 3;
	(*uParam0)[13 /*28*/].f_23 = {-309.987f, -864.1183f, 30.6228f};
	(*uParam0)[13 /*28*/].f_26 = 261.3995f;
	(*uParam0)[13 /*28*/].f_10[0 /*3*/] = {-316.0121f, -862.7733f, 30.6267f};
	(*uParam0)[13 /*28*/].f_10[1 /*3*/] = {-317.526f, -863.8655f, 30.5453f};
	(*uParam0)[14 /*28*/][0 /*3*/] = {407.2907f, -1479.637f, 28.2895f};
	(*uParam0)[14 /*28*/][1 /*3*/] = {404.6483f, -1483.57f, 28.2895f};
	(*uParam0)[14 /*28*/].f_27 = 2;
	(*uParam0)[14 /*28*/].f_23 = {403.5326f, -1475.197f, 28.2951f};
	(*uParam0)[14 /*28*/].f_26 = 301.9695f;
	(*uParam0)[14 /*28*/].f_10[0 /*3*/] = {399.232f, -1477.783f, 28.2928f};
	(*uParam0)[14 /*28*/].f_10[1 /*3*/] = {401.2551f, -1479.737f, 28.1369f};
	(*uParam0)[15 /*28*/][0 /*3*/] = {-686.6597f, -851.2509f, 22.9054f};
	(*uParam0)[15 /*28*/][1 /*3*/] = {-696.9954f, -852.1266f, 22.6746f};
	(*uParam0)[15 /*28*/].f_27 = 2;
	(*uParam0)[15 /*28*/].f_23 = {-674.3848f, -844.9825f, 23.1517f};
	(*uParam0)[15 /*28*/].f_26 = 269.1391f;
	(*uParam0)[15 /*28*/].f_10[0 /*3*/] = {-692.3451f, -845.8392f, 22.7217f};
	(*uParam0)[15 /*28*/].f_10[1 /*3*/] = {-692.3451f, -845.8392f, 22.7217f};
}

// Position - 0x3BF9B
void func_511(var *uParam0) {
	(*uParam0)[0 /*23*/].f_1 = {123.999f, -1081.618f, 28.1919f};
	(*uParam0)[0 /*23*/].f_4 = 180.477f;
	(*uParam0)[0 /*23*/].f_6 = {97.7377f, -1072.493f, 28.2717f};
	(*uParam0)[0 /*23*/].f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(*uParam0)[1 /*23*/].f_1 = {123.999f, -1081.618f, 28.1919f};
	(*uParam0)[1 /*23*/].f_4 = 180.477f;
	(*uParam0)[1 /*23*/].f_6 = {97.7377f, -1072.493f, 28.2717f};
	(*uParam0)[1 /*23*/].f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(*uParam0)[2 /*23*/].f_1 = {-301.9741f, -898.8075f, 30.0813f};
	(*uParam0)[2 /*23*/].f_4 = 168.6079f;
	(*uParam0)[2 /*23*/].f_6 = {-301.0894f, -934.515f, 30.0813f};
	(*uParam0)[2 /*23*/].f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(*uParam0)[3 /*23*/].f_1 = {-359.0859f, -965.5469f, 30.0701f};
	(*uParam0)[3 /*23*/].f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(*uParam0)[4 /*23*/].f_1 = {4.5819f, -1762.495f, 28.2918f};
	(*uParam0)[4 /*23*/].f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(*uParam0)[5 /*23*/].f_1 = {260.5293f, -1872.327f, 25.8171f};
	(*uParam0)[5 /*23*/].f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(*uParam0)[5 /*23*/].f_6 = {209.1288f, -2149.055f, 13.3765f};
	(*uParam0)[5 /*23*/].f_5 = 1;
	(*uParam0)[5 /*23*/].f_13 = {331.456f, -1789.7f, 26.817f};
	(*uParam0)[5 /*23*/].f_16 = {190.235f, -1957.1f, 26.816f};
	(*uParam0)[5 /*23*/].f_19 = 7.2f;
	(*uParam0)[6 /*23*/].f_1 = {967.3045f, -1873.789f, 30.1425f};
	(*uParam0)[6 /*23*/].f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(*uParam0)[7 /*23*/].f_1 = {-607.5065f, -1216.34f, 13.4082f};
	(*uParam0)[7 /*23*/].f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(*uParam0)[8 /*23*/].f_1 = {432.3639f, -619.0512f, 27.5112f};
	(*uParam0)[8 /*23*/].f_4 = 263.5155f;
	(*uParam0)[8 /*23*/].f_6 = {435.9689f, -662.4229f, 27.8383f};
	(*uParam0)[8 /*23*/].f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(*uParam0)[9 /*23*/].f_1 = {-136.0945f, -785.4554f, 31.4112f};
	(*uParam0)[9 /*23*/].f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(*uParam0)[10 /*23*/].f_1 = {-32.488f, -1354.867f, 28.1676f};
	(*uParam0)[10 /*23*/].f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(*uParam0)[11 /*23*/].f_1 = {-33.8858f, -1602.918f, 28.2902f};
	(*uParam0)[11 /*23*/].f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(*uParam0)[11 /*23*/].f_6 = {216.8692f, -1814.255f, 24.6812f};
	(*uParam0)[11 /*23*/].f_5 = 0;
	(*uParam0)[11 /*23*/].f_13 = {-111.725f, -1538.781f, -29.292f};
	(*uParam0)[11 /*23*/].f_16 = {41.484f, -1667.339f, 29.292f};
	(*uParam0)[11 /*23*/].f_19 = 7.8f;
	(*uParam0)[12 /*23*/].f_1 = {220.6214f, -852.1f, 29.1084f};
	(*uParam0)[12 /*23*/].f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(*uParam0)[13 /*23*/].f_1 = {337.0184f, -1156.93f, 28.2919f};
	(*uParam0)[13 /*23*/].f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(*uParam0)[14 /*23*/].f_1 = {953.1846f, -2113.256f, 29.5516f};
	(*uParam0)[14 /*23*/].f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(*uParam0)[15 /*23*/].f_1 = {-88.9769f, -2003.448f, 17.0168f};
	(*uParam0)[15 /*23*/].f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(*uParam0)[16 /*23*/].f_1 = {211.0682f, -791.7485f, 29.9f};
	(*uParam0)[16 /*23*/].f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(*uParam0)[17 /*23*/].f_1 = {-327.4179f, -1529.127f, 26.5696f};
	(*uParam0)[17 /*23*/].f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(*uParam0)[18 /*23*/].f_1 = {-596.5739f, -889.578f, 24.4759f};
	(*uParam0)[18 /*23*/].f_4 = 269.5022f;
	(*uParam0)[18 /*23*/].f_6 = {-584.4996f, -872.2784f, 24.8909f};
	(*uParam0)[18 /*23*/].f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(*uParam0)[19 /*23*/].f_1 = {408.6235f, -989.5519f, 28.2665f};
	(*uParam0)[19 /*23*/].f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(*uParam0)[20 /*23*/].f_1 = {-33.8858f, -1602.918f, 28.2902f};
	(*uParam0)[20 /*23*/].f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(*uParam0)[20 /*23*/].f_6 = {216.8692f, -1814.255f, 24.6812f};
	(*uParam0)[20 /*23*/].f_5 = 0;
	(*uParam0)[20 /*23*/].f_13 = {-111.725f, -1538.781f, -29.292f};
	(*uParam0)[20 /*23*/].f_16 = {41.484f, -1667.339f, 29.292f};
	(*uParam0)[20 /*23*/].f_19 = 7.8f;
	(*uParam0)[21 /*23*/].f_1 = {432.3639f, -619.0512f, 27.5112f};
	(*uParam0)[21 /*23*/].f_4 = 263.5155f;
	(*uParam0)[21 /*23*/].f_6 = {435.9689f, -662.4229f, 27.8383f};
	(*uParam0)[21 /*23*/].f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(*uParam0)[22 /*23*/].f_1 = {-310.2984f, -686.4995f, 32.1219f};
	(*uParam0)[22 /*23*/].f_4 = 269.6159f;
	(*uParam0)[22 /*23*/].f_6 = {-373.468f, -672.849f, 30.4925f};
	(*uParam0)[22 /*23*/].f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(*uParam0)[23 /*23*/].f_1 = {-316.4254f, -895.1236f, 30.0701f};
	(*uParam0)[23 /*23*/].f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(*uParam0)[24 /*23*/].f_1 = {53.578f, -1417.226f, 28.3517f};
	(*uParam0)[24 /*23*/].f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(*uParam0)[25 /*23*/].f_1 = {401.6395f, -2054.658f, 20.575f};
	(*uParam0)[25 /*23*/].f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(*uParam0)[26 /*23*/].f_1 = {146.2919f, -2051.071f, 17.3217f};
	(*uParam0)[26 /*23*/].f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(*uParam0)[26 /*23*/].f_6 = {339.577f, -1779.002f, 28.1454f};
	(*uParam0)[26 /*23*/].f_5 = 0;
	(*uParam0)[26 /*23*/].f_13 = {149.063f, -2005.992f, -18.327f};
	(*uParam0)[26 /*23*/].f_16 = {144.98f, -2095.9f, 18.327f};
	(*uParam0)[26 /*23*/].f_19 = 8.5f;
	(*uParam0)[27 /*23*/].f_1 = {363.1678f, -1749.957f, 28.2073f};
	(*uParam0)[27 /*23*/].f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(*uParam0)[27 /*23*/].f_6 = {150.5184f, -2010.497f, 17.7098f};
	(*uParam0)[27 /*23*/].f_5 = 1;
	(*uParam0)[27 /*23*/].f_13 = {428.271f, -1674.163f, -29.211f};
	(*uParam0)[27 /*23*/].f_16 = {299.18f, -1826.923f, 29.211f};
	(*uParam0)[27 /*23*/].f_19 = 9f;
	(*uParam0)[28 /*23*/].f_1 = {171.3444f, -1776.831f, 28.0622f};
	(*uParam0)[28 /*23*/].f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(*uParam0)[28 /*23*/].f_6 = {-92.782f, -1554.607f, 32.2626f};
	(*uParam0)[28 /*23*/].f_5 = 1;
	(*uParam0)[28 /*23*/].f_13 = {94.446f, -1712.766f, -29.071f};
	(*uParam0)[28 /*23*/].f_16 = {248.549f, -1840.251f, 29.211f};
	(*uParam0)[28 /*23*/].f_19 = 8f;
	(*uParam0)[29 /*23*/].f_1 = {421.2757f, -1277.618f, 29.2671f};
	(*uParam0)[29 /*23*/].f_4 = 359.101f;
	(*uParam0)[29 /*23*/].f_6 = {455.9831f, -1267.655f, 29.0609f};
	(*uParam0)[29 /*23*/].f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(*uParam0)[30 /*23*/].f_1 = {211.0559f, -1371.688f, 29.5776f};
	(*uParam0)[30 /*23*/].f_4 = 52.932f;
	(*uParam0)[30 /*23*/].f_6 = {209.6618f, -1406.521f, 28.2921f};
	(*uParam0)[30 /*23*/].f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(*uParam0)[31 /*23*/].f_1 = {-219.3074f, -1491.846f, 30.2593f};
	(*uParam0)[31 /*23*/].f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(*uParam0)[31 /*23*/].f_6 = {-177.2324f, -1506.01f, 31.6696f};
	(*uParam0)[32 /*23*/].f_1 = {538.7713f, -1524.826f, 28.168f};
	(*uParam0)[32 /*23*/].f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(*uParam0)[32 /*23*/].f_6 = {535.2374f, -1093.33f, 27.4652f};
	(*uParam0)[32 /*23*/].f_5 = 0;
	(*uParam0)[32 /*23*/].f_13 = {557.229f, -1501.367f, -29.273f};
	(*uParam0)[32 /*23*/].f_16 = {518.983f, -1547.597f, 29.273f};
	(*uParam0)[32 /*23*/].f_19 = 8.2f;
	(*uParam0)[33 /*23*/].f_1 = {497.2474f, -1199.327f, 28.3046f};
	(*uParam0)[33 /*23*/].f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(*uParam0)[33 /*23*/].f_6 = {516.6573f, -926.7039f, 14.6979f};
	(*uParam0)[33 /*23*/].f_5 = 0;
	(*uParam0)[33 /*23*/].f_13 = {512.849f, -1198.747f, -29.311f};
	(*uParam0)[33 /*23*/].f_16 = {483.086f, -1202.507f, 29.311f};
	(*uParam0)[33 /*23*/].f_19 = 8f;
	(*uParam0)[34 /*23*/].f_1 = {576.4442f, -1705.259f, 28.0895f};
	(*uParam0)[34 /*23*/].f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(*uParam0)[34 /*23*/].f_20 = joaat("tailgater");
	(*uParam0)[34 /*23*/].f_21 = 0;
	(*uParam0)[34 /*23*/].f_22 = 0;
	(*uParam0)[34 /*23*/].f_10 = {585.9758f, -1707.779f, 28.2677f};
	(*uParam0)[35 /*23*/].f_1 = {233.0704f, -1138.882f, 28.2302f};
	(*uParam0)[35 /*23*/].f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(*uParam0)[35 /*23*/].f_20 = joaat("emperor");
	(*uParam0)[35 /*23*/].f_21 = 0;
	(*uParam0)[35 /*23*/].f_22 = 1;
	(*uParam0)[36 /*23*/].f_1 = {-100.5493f, -1724.973f, 28.3857f};
	(*uParam0)[36 /*23*/].f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(*uParam0)[36 /*23*/].f_20 = joaat("intruder");
	(*uParam0)[36 /*23*/].f_21 = 1;
	(*uParam0)[36 /*23*/].f_22 = 2;
	(*uParam0)[36 /*23*/].f_10 = {-92.7179f, -1721.093f, 28.3288f};
	(*uParam0)[37 /*23*/].f_1 = {-114.5507f, -1318.912f, 28.1481f};
	(*uParam0)[37 /*23*/].f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(*uParam0)[37 /*23*/].f_20 = joaat("asterope");
	(*uParam0)[37 /*23*/].f_21 = 0;
	(*uParam0)[37 /*23*/].f_22 = 3;
	(*uParam0)[37 /*23*/].f_10 = {-111.4177f, -1293.568f, 28.2889f};
	(*uParam0)[38 /*23*/].f_1 = {303.2563f, -1699.098f, 28.1861f};
	(*uParam0)[38 /*23*/].f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(*uParam0)[38 /*23*/].f_20 = joaat("emperor2");
	(*uParam0)[38 /*23*/].f_21 = 0;
	(*uParam0)[38 /*23*/].f_22 = 4;
	(*uParam0)[38 /*23*/].f_10 = {284.1822f, -1679.657f, 28.3083f};
	(*uParam0)[39 /*23*/].f_1 = {784.1456f, -2046.703f, 28.1368f};
	(*uParam0)[39 /*23*/].f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(*uParam0)[39 /*23*/].f_20 = joaat("blista");
	(*uParam0)[39 /*23*/].f_21 = 1;
	(*uParam0)[39 /*23*/].f_22 = 5;
	(*uParam0)[39 /*23*/].f_10 = {784.365f, -2070.999f, 28.3414f};
	(*uParam0)[40 /*23*/].f_1 = {29.4785f, -980.7521f, 28.4051f};
	(*uParam0)[40 /*23*/].f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(*uParam0)[40 /*23*/].f_20 = joaat("emperor");
	(*uParam0)[40 /*23*/].f_21 = 0;
	(*uParam0)[40 /*23*/].f_22 = 6;
	(*uParam0)[40 /*23*/].f_10 = {10.3525f, -970.0844f, 28.4022f};
	(*uParam0)[41 /*23*/].f_1 = {101.5021f, -1529.546f, 28.2147f};
	(*uParam0)[41 /*23*/].f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(*uParam0)[41 /*23*/].f_20 = joaat("premier");
	(*uParam0)[41 /*23*/].f_21 = 1;
	(*uParam0)[41 /*23*/].f_22 = 7;
	(*uParam0)[41 /*23*/].f_10 = {117.6439f, -1547.885f, 28.2914f};
	(*uParam0)[42 /*23*/].f_1 = {360.6348f, -867.98f, 28.1345f};
	(*uParam0)[42 /*23*/].f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(*uParam0)[42 /*23*/].f_20 = joaat("buffalo");
	(*uParam0)[42 /*23*/].f_21 = 0;
	(*uParam0)[42 /*23*/].f_22 = 8;
	(*uParam0)[42 /*23*/].f_10 = {324.7404f, -864.9786f, 28.2923f};
	(*uParam0)[43 /*23*/].f_1 = {261.1898f, -2035.051f, 17.2895f};
	(*uParam0)[43 /*23*/].f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(*uParam0)[43 /*23*/].f_20 = joaat("premier");
	(*uParam0)[43 /*23*/].f_21 = 1;
	(*uParam0)[43 /*23*/].f_22 = 9;
	(*uParam0)[43 /*23*/].f_10 = {279.2888f, -2017.846f, 18.4895f};
	(*uParam0)[44 /*23*/].f_1 = {418.623f, -1867.903f, 25.6724f};
	(*uParam0)[44 /*23*/].f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(*uParam0)[44 /*23*/].f_20 = joaat("intruder");
	(*uParam0)[44 /*23*/].f_21 = 0;
	(*uParam0)[44 /*23*/].f_22 = 10;
	(*uParam0)[44 /*23*/].f_10 = {443.8106f, -1847.293f, 26.8106f};
	(*uParam0)[45 /*23*/].f_1 = {507.4709f, -1668.593f, 28.6539f};
	(*uParam0)[45 /*23*/].f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(*uParam0)[45 /*23*/].f_20 = joaat("tailgater");
	(*uParam0)[45 /*23*/].f_21 = 1;
	(*uParam0)[45 /*23*/].f_22 = 11;
	(*uParam0)[45 /*23*/].f_10 = {525.0562f, -1678.781f, 28.4452f};
	(*uParam0)[46 /*23*/].f_1 = {-203.7249f, -667.237f, 32.6054f};
	(*uParam0)[46 /*23*/].f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(*uParam0)[46 /*23*/].f_20 = joaat("asterope");
	(*uParam0)[46 /*23*/].f_21 = 0;
	(*uParam0)[46 /*23*/].f_22 = 12;
	(*uParam0)[46 /*23*/].f_10 = {-179.7505f, -678.1224f, 33.1625f};
	(*uParam0)[47 /*23*/].f_1 = {-318.031f, -865.0022f, 30.482f};
	(*uParam0)[47 /*23*/].f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(*uParam0)[47 /*23*/].f_20 = joaat("emperor2");
	(*uParam0)[47 /*23*/].f_21 = 0;
	(*uParam0)[47 /*23*/].f_22 = 13;
	(*uParam0)[47 /*23*/].f_10 = {-338.2523f, -859.7131f, 30.5587f};
	(*uParam0)[48 /*23*/].f_1 = {401.2838f, -1480.87f, 28.3058f};
	(*uParam0)[48 /*23*/].f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(*uParam0)[48 /*23*/].f_20 = joaat("blista");
	(*uParam0)[48 /*23*/].f_21 = 2;
	(*uParam0)[48 /*23*/].f_22 = 14;
	(*uParam0)[48 /*23*/].f_10 = {369.6188f, -1495.73f, 28.2385f};
	(*uParam0)[49 /*23*/].f_1 = {2912.906f, 4410.625f, 47.9319f};
	(*uParam0)[49 /*23*/].f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(*uParam0)[49 /*23*/].f_20 = joaat("emperor2");
	(*uParam0)[49 /*23*/].f_21 = 0;
	(*uParam0)[49 /*23*/].f_22 = 15;
	(*uParam0)[49 /*23*/].f_10 = {2929.237f, 4389.601f, 49.1801f};
	(*uParam0)[50 /*23*/].f_1 = {1684.671f, 4789.85f, 40.9384f};
	(*uParam0)[50 /*23*/].f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(*uParam0)[50 /*23*/].f_20 = joaat("tailgater");
	(*uParam0)[50 /*23*/].f_21 = 1;
	(*uParam0)[50 /*23*/].f_22 = 16;
	(*uParam0)[50 /*23*/].f_10 = {1677.444f, 4772.696f, 40.9936f};
	(*uParam0)[51 /*23*/].f_1 = {217.386f, -2545.061f, 5.1932f};
	(*uParam0)[51 /*23*/].f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(*uParam0)[51 /*23*/].f_6 = {150.731f, -2066.663f, 17.2342f};
	(*uParam0)[51 /*23*/].f_5 = 0;
	(*uParam0)[51 /*23*/].f_13 = {217.8829f, -2593.548f, 4.174078f};
	(*uParam0)[51 /*23*/].f_16 = {217.1816f, -2499.779f, 12.43667f};
	(*uParam0)[51 /*23*/].f_19 = 8f;
	(*uParam0)[52 /*23*/].f_1 = {-692.027f, -847.6826f, 22.6477f};
	(*uParam0)[52 /*23*/].f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(*uParam0)[52 /*23*/].f_20 = joaat("tailgater");
	(*uParam0)[52 /*23*/].f_21 = 0;
	(*uParam0)[52 /*23*/].f_22 = 15;
	(*uParam0)[52 /*23*/].f_10 = {-723.7541f, -844.7679f, 21.9551f};
}

// Position - 0x3D181
void func_512() {
	if (!iLocal_3341) {
		if (iLocal_511) {
			pathfind::set_roads_back_to_original_in_angled_area(132.1304f, -2597.912f, 0.004743f, 340.5726f, -2511.293f,
																11.7885f, 70f, 1);
			vehicle::_0x1033371FC8E842A7(iLocal_3343);
			vehicle::_0x1033371FC8E842A7(iLocal_3344);
			iLocal_3341 = 1;
		}
	}
}

// Position - 0x3D1D2
void func_513() {
	if (func_515(&iLocal_3330, 0, 0)) {
		if (!player::is_player_wanted_level_greater(player::get_player_index(), 0)) {
			ui::clear_prints();
		}
		iLocal_3318 = 2;
	}
	switch (iLocal_3318) {
	case 0:
		if (!player::is_player_wanted_level_greater(player::get_player_index(), 0)) {
			if (func_584(0)) {
				if (cam::is_screen_faded_out()) {
					cam::do_screen_fade_in(500);
				}
			}
			func_382(0, "towing_tonya_franklin_travel", 0, 0, 0, 1);
			func_514("TOW_TUT_INTRUCK", 7500, 1);
			streaming::request_model(joaat("towtruck"));
			if (!func_212(&uLocal_2565)) {
				func_508(&uLocal_2565);
			}
			else {
				func_379(&uLocal_2565);
			}
			iLocal_3318 = 1;
		}
		break;

	case 1:
		if (!entity::does_entity_exist(iLocal_469)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iLocal_469 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					entity::set_entity_as_mission_entity(iLocal_469, 1, 1);
					vehicle::set_players_last_vehicle(iLocal_469);
				}
			}
		}
		if (!entity::does_entity_exist(iLocal_3330)) {
			streaming::request_model(joaat("towtruck"));
			vehicle::request_vehicle_asset(joaat("towtruck"), 3);
			if (streaming::has_model_loaded(joaat("towtruck"))) {
				if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_3332, 50f, 50f, 50f, 0, 1, 0)) {
					iLocal_3330 = vehicle::create_vehicle(joaat("towtruck"), vLocal_2574, fLocal_2577, 1, 1);
					iLocal_2934 = iLocal_3330;
					entity::set_entity_as_mission_entity(iLocal_2934, 1, 0);
					audio::set_veh_radio_station(iLocal_2934, "RADIO_03_HIPHOP_NEW");
					gameplay::clear_area(vLocal_2574, 25f, 1, 0, 0, 0);
				}
				else {
					iLocal_3330 = vehicle::create_vehicle(joaat("towtruck"), vLocal_3332, fLocal_3335, 1, 1);
					iLocal_2934 = iLocal_3330;
					entity::set_entity_as_mission_entity(iLocal_2934, 1, 0);
					audio::set_veh_radio_station(iLocal_2934, "RADIO_03_HIPHOP_NEW");
					gameplay::clear_area(vLocal_3332, 25f, 1, 1, 0, 0);
				}
				if (entity::does_entity_exist(iLocal_3330)) {
					iLocal_2767 = ui::add_blip_for_entity(iLocal_3330);
					ui::set_blip_colour(iLocal_2767, 3);
					ui::set_blip_route(iLocal_2767, 1);
					streaming::set_model_as_no_longer_needed(joaat("towtruck"));
				}
			}
		}
		if (!entity::is_entity_dead(iLocal_3330, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(iLocal_3330, -1, 0) == player::player_ped_id() ||
				func_515(&iLocal_3330, 0, 0)) {
				iLocal_3318 = 2;
			}
		}
		else if (entity::does_entity_exist(iLocal_3330)) {
			iLocal_2885 = 2;
			func_491();
		}
		break;

	case 2:
		if (!iLocal_504) {
			if (func_553(217.386f, -2545.061f, 5.1932f, 1) < 150f) {
				iLocal_2647 = 28;
				Global_101700.f_18932.f_9 = iLocal_2647;
				func_551(&Global_101700.f_18932.f_1, 4194304);
			}
			if (ui::does_blip_exist(iLocal_2767)) {
				ui::remove_blip(&iLocal_2767);
			}
			iLocal_3317 = 3;
			iLocal_3318 = 0;
		}
		break;
	}
}

// Position - 0x3D469
void func_514(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 0);
}

// Position - 0x3D482
bool func_515(int *iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
			ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (entity::does_entity_exist(iVar0) && !entity::is_entity_dead(iVar0, 0)) {
				if (entity::get_entity_model(iVar0) == joaat("towtruck") ||
					entity::get_entity_model(iVar0) == joaat("towtruck2")) {
					if (iParam1) {
						if (entity::does_entity_exist(iParam2) && !entity::is_entity_dead(iParam2, 0) &&
							!entity::is_entity_dead(iVar0, 0)) {
							if (ped::is_ped_in_vehicle(iParam2, iVar0, 0) &&
								ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
								if (entity::does_entity_exist(*iParam0)) {
									if (entity::is_entity_occluded(*iParam0)) {
										vehicle::delete_vehicle(iParam0);
									}
									else {
										entity::set_vehicle_as_no_longer_needed(iParam0);
									}
								}
								*iParam0 = iVar0;
								return true;
							}
						}
					}
					else {
						if (entity::does_entity_exist(*iParam0)) {
							if (entity::is_entity_occluded(*iParam0)) {
								vehicle::delete_vehicle(iParam0);
							}
							else {
								entity::set_vehicle_as_no_longer_needed(iParam0);
							}
						}
						*iParam0 = iVar0;
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x3D592
void func_516() {
	ui::request_additional_text("TOW", 2);
	ui::request_additional_text("DTRSHRD", 3);
	while (!ui::has_additional_text_loaded(2) || !ui::has_additional_text_loaded(3)) {
		system::wait(0);
	}
	if (func_557()) {
		iLocal_3342 = func_556();
		if (Global_86001) {
			if (iLocal_3342 <= 1) {
				iLocal_3342++;
			}
		}
		if (iLocal_3342 == 0) {
			func_549();
		}
		else if (iLocal_3342 == 1) {
			func_520();
		}
		else if (iLocal_3342 == 2) {
			func_517();
		}
	}
	else {
		iLocal_3317 = 2;
	}
}

// Position - 0x3D61B
void func_517() {
	if (cam::is_screen_faded_out()) {
		audio::stop_scripted_conversation(0);
		ui::clear_prints();
		ui::clear_help(1);
		func_278(835);
		gameplay::clear_area(vLocal_3345, 8f, 1, 0, 0, 0);
		func_518(iLocal_2934, -1, 1);
		vLocal_2854 = {vLocal_2854};
		fLocal_2857 = fLocal_2857;
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::do_screen_fade_in(500);
		iLocal_3317 = 5;
	}
}

// Position - 0x3D688
void func_518(int iParam0, int iParam1, int iParam2) {
	if (func_557() && func_519()) {
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
		func_15(0);
	}
}

// Position - 0x3D74C
bool func_519() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x3D760
void func_520() {
	if (cam::is_screen_faded_out()) {
		func_521();
		gameplay::clear_area(vLocal_3345, 8f, 1, 0, 0, 0);
		func_518(iLocal_2934, -1, 1);
		cam::set_gameplay_cam_relative_heading(-138.0317f);
		cam::set_gameplay_cam_relative_pitch(-0.119f, 1065353216);
		cam::do_screen_fade_in(500);
		iLocal_3317 = 3;
	}
}

// Position - 0x3D7B3
void func_521() {
	func_522(405.7806f, -1652.369f, 28.2928f, 139.8366f);
	streaming::request_model(joaat("towtruck"));
	while (!streaming::has_model_loaded(joaat("towtruck"))) {
		system::wait(0);
	}
	if (!entity::does_entity_exist(iLocal_2934)) {
		iLocal_2934 = vehicle::create_vehicle(joaat("towtruck"), vLocal_3332, fLocal_3335, 1, 1);
		vehicle::set_vehicle_on_ground_properly(iLocal_2934, 1084227584);
		vehicle::set_vehicle_colour_combination(iLocal_2934, 1);
	}
}

// Position - 0x3D827
void func_522(vector3 vParam0, float fParam3) {
	int iVar0;

	if (func_548()) {
		bLocal_2720 = true;
	}
	if (bLocal_2720) {
		func_546();
		while (!func_545()) {
			system::wait(0);
		}
	}
	if (bLocal_2720) {
		iVar0 = func_523(vParam0, fParam3);
		if (!vehicle::is_this_model_a_boat(entity::get_entity_model(iVar0)) &&
			!vehicle::is_this_model_a_plane(entity::get_entity_model(iVar0)) &&
			!vehicle::is_this_model_a_heli(entity::get_entity_model(iVar0)) &&
			entity::get_entity_model(iVar0) != joaat("towtruck")) {
			vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
		}
		else {
			if (entity::get_entity_model(iVar0) != joaat("towtruck")) {
			}
			vehicle::delete_vehicle(&iVar0);
		}
	}
}

// Position - 0x3D8CB
int func_523(vector3 vParam0, float fParam3) { return func_524(&Global_96040.f_2311, vParam0, fParam3, 0); }

// Position - 0x3D8E5
int func_524(var *uParam0, vector3 vParam1, float fParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_544(uParam0)) {
		if (func_372(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {*uParam0};
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall")) {
			if (object::is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f,
												75.27323f, 6.5f, 0, 1)) {
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_543(uParam0)) {
			gameplay::clear_area(vParam1, 5f, 1, 0, 0, 0);
			func_542(vParam1, 5f, 0);
			iVar0 = vehicle::create_vehicle(uParam0->f_12.f_66, vParam1, fParam4, 1, 1);
			if (entity::does_entity_exist(iVar0)) {
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
				if (system::vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f) {
					entity::set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_534(iVar0, &uParam0->f_12, 0, 1);
				bVar4 = true;
				if (vehicle::is_this_model_a_boat(uParam0->f_12.f_66) ||
					vehicle::_is_this_model_an_emergency_boat(uParam0->f_12.f_66)) {
					if (!water::test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y,
														 vParam1.z - 30f, &uVar5)) {
						bVar4 = false;
					}
				}
				if (bVar4) {
					vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1) {
					if (iParam5) {
						if (vehicle::is_this_model_a_car(entity::get_entity_model(iVar0))) {
							func_533(uParam0->f_11, 1);
						}
						else if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar0))) {
							func_533(uParam0->f_11, 2);
						}
					}
					vehicle::_0xAB04325045427AAE(iVar0, 0);
					vehicle::_0x428BACCDF5E26EAD(iVar0, 0);
					vehicle::set_vehicle_has_strong_axles(iVar0, 1);
					func_532(iVar0, uParam0->f_11);
				}
				else if (!func_529(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10 &&
						 gameplay::are_strings_equal(script::get_this_script_name(), "startup_positioning")) {
					iVar8 = func_528(iVar0);
					if (iVar8 == -1) {
						uParam0->f_10 = 0;
					}
					else {
						func_525(iVar8);
					}
				}
				if (Global_91491 != 13 && Global_91491 != 10 && Global_91491 != 11 && Global_91491 != 12) {
					if (gameplay::get_hash_key(&Global_91491.f_3) == Global_69519) {
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66) {
							func_180(24, 0);
							func_525(24);
						}
					}
				}
				if (uParam0->f_9 == 1) {
					func_335(iVar0, uParam0->f_11);
				}
				streaming::set_model_as_no_longer_needed(uParam0->f_12.f_66);
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

// Position - 0x3DB97
void func_525(int iParam0) {
	bool bVar0;

	if (iParam0 == -1) {
		return;
	}
	if (func_365(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			bVar0 = true;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
				vehicle::delete_vehicle(&Global_68531.f_139[iParam0]);
			}
		}
		Global_68531[iParam0] = 1;
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			if (iParam0 == 24 && func_182(iParam0, 0) && Global_69440.f_66 == 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3 &&
				(!func_526(0, Global_68531.f_555[0 /*21*/].f_12) || !func_526(1, Global_68531.f_555[0 /*21*/].f_12))) {
				func_369(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_180(iParam0, 0);
		}
	}
}

// Position - 0x3DD09
int func_526(int iParam0, int iParam1) {
	int iVar0;

	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_527(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return 0;
	}
	return func_338(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

// Position - 0x3DD7B
int func_527(var *uParam0) { return *uParam0; }

// Position - 0x3DD86
int func_528(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0]) &&
			!entity::is_entity_dead(Global_68531.f_484[iVar0], 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[iVar0], 0)) {
			vehicle::get_vehicle_colours(iParam0, &iVar1, &iVar2);
			vehicle::get_vehicle_colours(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (entity::get_entity_model(iParam0) == entity::get_entity_model(Global_68531.f_484[iVar0]) &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[iVar0]) &&
				iVar1 == iVar2 && iVar3 == iVar4) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x3DE49
int func_529(int iParam0, vector3 vParam1, bool bParam4) {
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("cargobob"):
		if (func_531(iParam0, Global_68531.f_139[38], 0)) {
			func_525(38);
			return 1;
		}
		break;

	case joaat("firetruk"):
		if (func_531(iParam0, Global_68531.f_139[43], 1)) {
			func_525(43);
			return 1;
		}
		break;

	case joaat("cuban800"):
		iVar5 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar1);
		iVar6 = 0;
		while (iVar6 <= iVar5 - 1) {
			if (func_531(iParam0, uVar1[iVar6], 1) &&
				func_530(entity::get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)) {
				if (!bParam4 || func_372(vParam1, 0f, 0f, 0f, 0) ||
					gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1),
														  entity::get_entity_coords(uVar1[iVar6], 1), 1) < 10f) {
					vehicle::delete_vehicle(&iParam0);
					return 1;
				}
				else {
					return 0;
				}
			}
			iVar6++;
		}
		break;

	case joaat("luxor2"):
		if (entity::does_entity_exist(Global_68531.f_484[14]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[14], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[14]) == joaat("luxor2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[14])) {
				func_525(14);
				return 1;
			}
		}
		break;

	case joaat("swift2"):
		if (entity::does_entity_exist(Global_68531.f_484[20]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[20], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[20]) == joaat("swift2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[20])) {
				func_525(20);
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x3E051
int func_530(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
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

// Position - 0x3E0CC
bool func_531(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam1) && !entity::is_entity_dead(iParam1, 0) &&
		vehicle::is_vehicle_driveable(iParam1, 0)) {
		if (iParam2) {
			vehicle::get_vehicle_colours(iParam0, &iVar0, &iVar1);
			vehicle::get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3) {
				return true;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x3E12D
void func_532(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (!entity::does_entity_exist(Global_89155[iVar0])) {
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = entity::get_entity_model(iParam0);
			if (vehicle::is_this_model_a_car(Global_89175[iVar0])) {
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else {
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8) {
		}
		iVar0++;
	}
}

// Position - 0x3E1AF
void func_533(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0) {
				if (iParam1 == 0 || entity::get_entity_model(Global_89155[iVar0]) == func_366(iParam0, iParam1)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), Global_89155[iVar0], 0)) {
						entity::set_entity_as_mission_entity(Global_89155[iVar0], 0, 1);
						vehicle::delete_vehicle(&Global_89155[iVar0]);
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x3E24D
void func_534(int iParam0, var *uParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (gameplay::get_hash_key(&uParam1->f_1) != 0) {
			vehicle::set_vehicle_number_plate_text(iParam0, &uParam1->f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < vehicle::get_number_of_vehicle_number_plates()) {
			vehicle::set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign")) {
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco")) {
			iVar0 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_374(iVar0 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_374(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2")) {
			iVar1 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_374(iVar1 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_374(iVar1 + 1));
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 13)) {
			vehicle::set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_primary_colour(iParam0);
		}
		if (gameplay::is_bit_set(uParam1->f_77, 12)) {
			vehicle::set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_secondary_colour(iParam0);
		}
		vehicle::set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0) {
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0) {
			uParam1->f_8 = 0;
		}
		vehicle::set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (gameplay::is_bit_set(uParam1->f_77, 15) || func_541(iParam0) ||
			uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
			&&func_540() {
				uParam1->f_62 = 0;
				uParam1->f_63 = 0;
				uParam1->f_64 = 0;
			}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0) {
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		vehicle::set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			vehicle::set_vehicle_window_tint(iParam0, 0);
		}
		else {
			vehicle::set_vehicle_window_tint(iParam0, 0);
			vehicle::set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		vehicle::set_vehicle_tyres_can_burst(iParam0, !gameplay::is_bit_set(uParam1->f_77, 9));
		if (iParam2) {
			vehicle::set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		vehicle::_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 2, gameplay::is_bit_set(uParam1->f_77, 28));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 3, gameplay::is_bit_set(uParam1->f_77, 29));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 0, gameplay::is_bit_set(uParam1->f_77, 30));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 1, gameplay::is_bit_set(uParam1->f_77, 31));
		vehicle::set_vehicle_is_stolen(iParam0, gameplay::is_bit_set(uParam1->f_77, 10));
		if (vehicle::get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0) {
			vehicle::set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255) {
			if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iParam0))) {
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
					if (uParam1->f_69 == 6) {
						func_539(iParam0, uParam1->f_69);
					}
				}
				else {
					func_539(iParam0, uParam1->f_69);
				}
			}
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5) {
				vehicle::raise_convertible_roof(iParam0, 1);
			}
			else {
				vehicle::lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3) {
			func_535(&iParam0, &uParam1->f_9, &uParam1->f_59);
		}
		if (!vehicle::is_this_model_a_heli(uParam1->f_66) && !vehicle::is_this_model_a_boat(uParam1->f_66)) {
			iVar2 = 0;
			while (iVar2 <= 11) {
				if (gameplay::is_bit_set(uParam1->f_77, func_374(iVar2 + 1))) {
					if (!vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
						vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 0);
					}
				}
				else if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
					vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (entity::get_entity_model(iParam0) == joaat("sheava") ||
			entity::get_entity_model(iParam0) == joaat("omnis") || entity::get_entity_model(iParam0) == joaat("le7b")) {
			if (vehicle::get_vehicle_mod(iParam0, 0) == -1) {
				vehicle::set_vehicle_extra(iParam0, 1, 0);
			}
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (!gameplay::is_bit_set(uParam1->f_77, 23)) {
				if (gameplay::is_bit_set(uParam1->f_77, 22)) {
					vehicle::control_landing_gear(iParam0, 2);
				}
				else {
					vehicle::control_landing_gear(iParam0, 3);
				}
			}
			else {
				vehicle::control_landing_gear(iParam0, 4);
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 27)) {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

// Position - 0x3E6FD
int func_535(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	vehicle::set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			vehicle::toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (vehicle::get_vehicle_mod(*iParam0, iVar1) != (*uParam1)[iVar0] - 1) {
			vehicle::remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0) {
				if (iVar0 == 23) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[1] > 0);
				}
				else {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_538(entity::get_entity_model(*iParam0), 1) &&
		vehicle::get_vehicle_mod(*iParam0, 24) != func_537(*iParam0, (*uParam1)[38] - 1)) {
		vehicle::set_vehicle_mod(*iParam0, 24, func_537(*iParam0, (*uParam1)[38] - 1), 0);
	}
	if (func_536(*iParam0)) {
		vehicle::set_vehicle_strong(*iParam0, 1);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
	}
	return 1;
}

// Position - 0x3E875
bool func_536(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49) {
			iVar1 = iVar0;
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			}
			else if (vehicle::get_vehicle_mod(iParam0, iVar1) != -1) {
				StringCopy(&cVar3,
						   vehicle::get_mod_text_label(iParam0, iVar1, vehicle::get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = gameplay::get_hash_key(&cVar3);
				if (iVar2 != 0) {
					if (iVar2 == gameplay::get_hash_key("MNU_CAGE") || iVar2 == gameplay::get_hash_key("SABRE_CAG")) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x3E953
int func_537(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (entity::get_entity_model(iParam0)) {
		case joaat("tornado5"):
			switch (iParam1) {
			case 0: return 0;

			case 1: return 1;

			case 2: return 2;

			case 3: return 3;

			case 4: return 4;

			case 5: return 4;
			}
			break;

		case joaat("faction3"): return 3;
		}
		iVar0 = vehicle::get_num_vehicle_mods(iParam0, 38);
		iVar1 = vehicle::get_num_vehicle_mods(iParam0, 24);
		fVar2 = system::to_float(iParam1 + 1) / system::to_float(iVar0);
		iVar3 = system::floor(system::to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0) {
			iVar3 = 0;
		}
		if (iVar3 >= iVar0) {
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

// Position - 0x3EA38
int func_538(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("faction2"):
	case joaat("buccaneer2"):
	case joaat("chino2"):
	case joaat("moonbeam2"):
	case joaat("primo2"):
	case joaat("voodoo"): return 1;

	case joaat("sabregt2"):
		if (!Global_262145.f_12339) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("tornado5"):
		if (!Global_262145.f_12340) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("virgo2"):
		if (!Global_262145.f_12338) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("minivan2"):
		if (!Global_262145.f_12341) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("slamvan3"):
		if (!Global_262145.f_12343) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("faction3"):
		if (!Global_262145.f_12342) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("sultanrs"):
	case joaat("banshee2"):
		if ((iParam1 & 1) != 0) {
			return 0;
		}
		return 1;

	case joaat("comet3"):
		if (Global_262145.f_16780) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("diablous2"):
		if (Global_262145.f_16782) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("fcr2"):
		if (Global_262145.f_16786) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("elegy"):
		if (Global_262145.f_16783) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("nero2"):
		if (Global_262145.f_16790) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("italigtb2"):
		if (Global_262145.f_16788) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("specter2"):
		if (Global_262145.f_16793) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x3EC5D
void func_539(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = vehicle::get_vehicle_mod(iParam0, 24);
		iVar1 = vehicle::get_vehicle_mod_variation(iParam0, 24);
		vehicle::set_vehicle_wheel_type(iParam0, iParam1);
		if (entity::get_entity_model(iParam0) == joaat("tornado6")) {
			return;
		}
		if (iVar0 == -1) {
			vehicle::remove_vehicle_mod(iParam0, 24);
		}
		else {
			vehicle::set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

// Position - 0x3ECC2
var func_540() { return dlc2::is_dlc_present(-1691188696); }

// Position - 0x3ECD3
int func_541(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (decorator::decor_is_registered_as_type("MPBitset", 3)) {
				if (decorator::decor_exist_on(iParam0, "MPBitset")) {
					iVar0 = decorator::decor_get_int(iParam0, "MPBitset");
				}
				return gameplay::is_bit_set(iVar0, 4);
			}
		}
	}
	return 0;
}

// Position - 0x3ED21
void func_542(vector3 vParam0, float fParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (func_365(&Global_68531.f_555[0 /*21*/], iVar0)) {
			if (gameplay::get_distance_between_coords(vParam0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3) {
				func_525(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0x3ED71
bool func_543(var *uParam0) {
	if (func_544(uParam0)) {
		if (streaming::has_model_loaded(uParam0->f_12.f_66)) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x3EDA6
bool func_544(var *uParam0) {
	if (uParam0->f_12.f_66 == 0) {
		return false;
	}
	if (!func_338(uParam0->f_12.f_66, 0)) {
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_530(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)) {
		return false;
	}
	return true;
}

// Position - 0x3EE05
int func_545() { return func_543(&Global_96040.f_2311); }

// Position - 0x3EE18
void func_546() { func_547(&Global_96040.f_2311); }

// Position - 0x3EE2B
void func_547(var *uParam0) {
	if (func_544(uParam0)) {
		streaming::request_model(uParam0->f_12.f_66);
	}
}

// Position - 0x3EE49
bool func_548() { return func_544(&Global_96040.f_2311); }

// Position - 0x3EE5C
void func_549() {
	if (cam::is_screen_faded_out()) {
		func_550();
		gameplay::clear_area(vLocal_3345, 8f, 1, 0, 0, 0);
		func_518(0, -1, 1);
		cam::do_screen_fade_in(500);
		iLocal_3317 = 2;
	}
}

// Position - 0x3EE93
void func_550() {
	func_522(vLocal_2574, fLocal_2577);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!func_519()) {
			entity::set_entity_coords(player::player_ped_id(), vLocal_3345, 1, 0, 0, 1);
			entity::set_entity_heading(player::player_ped_id(), fLocal_3348);
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	}
}

// Position - 0x3EEE7
void func_551(var *uParam0, int iParam1) { func_552(uParam0, iParam1); }

// Position - 0x3EEF7
void func_552(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x3EF08
float func_553(vector3 vParam0, int iParam3) {
	return func_469(player::get_player_ped(player::get_player_index()), vParam0, iParam3);
}

// Position - 0x3EF22
bool func_554(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x3EF31
void func_555(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_557()) {
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
		func_15(1);
	}
}

// Position - 0x3EFC6
int func_556() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x3EFF0
bool func_557() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x3F014
void func_558(var *uParam0, var uParam1, var *uParam2, int iParam3, int *iParam4, int iParam5, int iParam6,
			  int iParam7) {
	uParam1 = uParam1;
	if (!iLocal_504) {
		if (player::is_player_wanted_level_greater(player::get_player_index(), 0)) {
			if (func_499()) {
				func_561();
			}
			if (iParam7 != 0) {
				if (!entity::is_entity_dead(iParam7, 0)) {
					func_559(iParam7, "GET_WANTED_LEVEL", "TONYA", 34);
				}
			}
			if (ui::does_blip_exist((*uParam0)[0 /*20*/].f_8)) {
				ui::remove_blip(&(*uParam0)[0 /*20*/].f_8);
			}
			if (ui::does_blip_exist((*uParam0)[0 /*20*/].f_9)) {
				ui::remove_blip(&(*uParam0)[0 /*20*/].f_9);
			}
			if (ui::does_blip_exist(*iParam3)) {
				ui::remove_blip(iParam3);
			}
			if (ui::does_blip_exist(*uParam4)) {
				ui::remove_blip(uParam4);
			}
			iLocal_504 = 1;
			func_378("TOW_OBJ_06", 7500, 1);
		}
	}
	else if (!player::is_player_wanted_level_greater(player::get_player_index(), 0) && iLocal_504) {
		if (func_237("TOW_OBJ_06", 0, 0)) {
			ui::clear_prints();
		}
		if (!ui::does_blip_exist((*uParam0)[0 /*20*/].f_8)) {
			if (iParam6 > 1) {
				if (bLocal_510) {
					*iParam3 = ui::add_blip_for_entity(*iParam5);
					ui::set_blip_colour(*iParam3, 3);
					return;
				}
				if (iParam6 >= 9 && iParam6 < 11) {
					if (!entity::is_entity_dead(*iParam5, 0) && !entity::is_entity_dead((*uParam0)[0 /*20*/].f_6, 0) &&
						vehicle::is_vehicle_attached_to_tow_truck(*iParam5, (*uParam0)[0 /*20*/].f_6)) {
						func_274(*iParam4);
						*iParam4 = ui::add_blip_for_coord((*uParam2)[0 /*3*/]);
						ui::set_blip_colour(*iParam4, 5);
						ui::set_blip_route(*iParam4, 1);
					}
					else {
						(*uParam0)[0 /*20*/].f_8 = ui::add_blip_for_entity((*uParam0)[0 /*20*/].f_6);
						ui::set_blip_colour((*uParam0)[0 /*20*/].f_8, 3);
						ui::set_blip_route((*uParam0)[0 /*20*/].f_8, 1);
					}
				}
				else if (iParam6 < 11) {
					(*uParam0)[0 /*20*/].f_8 = ui::add_blip_for_coord((*uParam2)[0 /*3*/]);
					ui::set_blip_colour((*uParam0)[0 /*20*/].f_8, 3);
					ui::set_blip_route((*uParam0)[0 /*20*/].f_8, 1);
				}
			}
			else if (!ui::does_blip_exist(*iParam3)) {
				*iParam3 = ui::add_blip_for_entity(*iParam5);
				ui::set_blip_colour(*iParam3, 3);
				ui::set_blip_route(*iParam3, 1);
			}
		}
		fLocal_473 = func_553((*uParam2)[0 /*3*/], 0);
		iLocal_504 = 0;
	}
}

// Position - 0x3F221
void func_559(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_560(iParam3), 0);
}

// Position - 0x3F23A
int func_560(int iParam0) {
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

// Position - 0x3F454
void func_561() {
	Global_14611 = 0;
	func_562();
}

// Position - 0x3F464
void func_562() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x3F485
bool func_563() {
	if (iLocal_3317 != 4) {
		if (bLocal_2688) {
			sLocal_3320 = sLocal_2651;
			return true;
		}
	}
	return false;
}

// Position - 0x3F4A5
void func_564(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_69956 != 6) {
		if (Global_69958 == -1) {
			if (func_575(1, Param0)) {
				if (Global_69959 == 3) {
					fVar0 = 1.5f;
				}
				else {
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0) {
					Global_69958 = gameplay::get_game_timer();
					vLocal_22 = {ui::get_hud_component_position(15)};
					fLocal_21 = 0f;
				}
				else {
					fLocal_21 += gameplay::get_frame_time();
				}
			}
			else {
				fLocal_21 = 0f;
			}
		}
		else {
			if (!func_575(0, Param0)) {
				Global_69958 = gameplay::get_game_timer() - 9000;
			}
			ui::hide_hud_component_this_frame(7);
			ui::hide_hud_component_this_frame(6);
			ui::hide_hud_component_this_frame(8);
			ui::hide_hud_component_this_frame(9);
			iVar1 = gameplay::get_game_timer() - Global_69958;
			if (iVar1 < 9000 && !cam::is_screen_faded_out()) {
				iVar2 = 255;
				if (iVar1 < 1000) {
					iVar2 = system::ceil(system::to_float(iVar1) / 1000f * 255f);
				}
				else {
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000) {
						iVar2 = system::ceil(system::to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69956) {
				case 3:
				case 5:
					if (iParam6 == 1) {
						fVar6 = 0f;
						fVar7 = -0.07f;
					}
					else if (iParam7 == 1) {
						fVar6 = 0f;
						fVar7 = -0.077f;
					}
					else if (iParam8 == 1) {
						fVar6 = 0f;
						fVar7 = -0.05f;
					}
					else if (iParam9 == 1) {
						fVar6 = 0f;
						fVar7 = -0.035f;
					}
					else {
						fVar6 = 0f;
						fVar7 = -0.014f;
					}
					break;

				default:
					fVar6 = 0f;
					fVar7 = -0.014f;
					break;
				}
				graphics::_set_screen_draw_position(82, 66);
				ui::set_text_font(1);
				ui::set_text_justification(2);
				iVar12 = func_226();
				if (Global_69959 == 1 && Global_69957 == 62) {
					iVar12 = Global_101700.f_2095.f_539.f_3550;
				}
				switch (iVar12) {
				case 0: ui::get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 1: ui::get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 2: ui::get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11); break;

				default:
					iVar8 = 240;
					iVar9 = 200;
					iVar10 = 80;
				}
				ui::set_text_colour(iVar8, iVar9, iVar10, iVar2);
				ui::set_text_drop_shadow();
				Var4 = {func_566(Global_69957, Global_69959, iParam10)};
				if (fVar7 == -0.014f) {
				}
				graphics::_screen_draw_position_ratio(fVar6, fVar7, 0f, 0.01f);
				ui::set_text_scale(0.67f, 0.67f);
				if (!graphics::get_is_widescreen() && !graphics::get_is_hidef()) {
					fLocal_26 = 0.14f;
				}
				else {
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f) {
					if (func_565(&Var4) > fLocal_26) {
						if (ui::is_hud_component_active(15)) {
							ui::set_hud_component_position(15, vLocal_22.x, vLocal_22.y + fLocal_25);
							Global_69961 = 1;
						}
					}
				}
				ui::begin_text_command_display_text(&Var4);
				ui::end_text_command_display_text(fVar6, fVar7, 0);
				graphics::_screen_draw_position_end();
				if (Global_69960 == 1) {
					func_171();
					fLocal_21 = 0f;
				}
			}
			else {
				func_171();
				fLocal_21 = 0f;
			}
		}
	}
}

// Position - 0x3F78A
float func_565(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x3F79D
struct<2> func_566(int iParam0, int iParam1, int iParam2) {
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1) {
	case 1: Var0 = {func_574(iParam0)}; break;

	case 7: Var0 = {func_157(iParam0)}; break;

	case 3:
		iVar2 = iParam0;
		switch (iVar2) {
		case 0: Var0 = {func_573(iParam2)}; break;

		case 8: Var0 = {func_572(iParam2)}; break;

		case 7: Var0 = {func_571(iParam2)}; break;

		case 10: Var0 = {func_570(iParam2)}; break;

		case 5: Var0 = {func_569(iParam2)}; break;

		case 4: Var0 = {func_568(iParam2)}; break;

		default: StringCopy(&Var0, func_567(iVar2), 8); break;
		}
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x3F872
char *
func_567(int iParam0) {
	switch (iParam0) {
	case 0: return "MG_BJUM";

	case 1: return "MG_DART";

	case 2: return "MG_GOLF";

	case 3: return "MG_HUNT";

	case 4: return "MG_OFFR";

	case 5: return "MG_PILO";

	case 6: return "MG_RMPG";

	case 7: return "MG_SERA";

	case 8: return "MG_SRAC";

	case 9: return "MG_STRP";

	case 10: return "MG_STNT";

	case 11: return "MG_SHTR";

	case 12: return "MG_TAXI";

	case 13: return "MG_TENN";

	case 14: return "MG_TOWI";

	case 15: return "MG_TRFA";

	case 16: return "MG_TRFG";

	case 17: return "MG_TRIA";

	case 18: return "MG_YOGA";

	case 19: return "MG_CRCE";
	}
	return "INVALID!";
}

// Position - 0x3F9DA
struct<2> func_568(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FA0D
struct<2>
func_569(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FA40
struct<2>
func_570(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FA73
struct<2>
func_571(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FAA6
struct<2>
func_572(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2) || iParam0 == 3) {
	}
	else {
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FAE3
struct<2>
func_573(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3FB16
struct<2>
func_574(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x3FB83
bool func_575(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_577(0) || Global_69971 || Global_69960 == 1 || !cam::is_screen_faded_in()) {
		return false;
	}
	switch (Global_69956) {
	case 0:
		if (gameplay::are_strings_equal(&uParam1, "NONE") || gameplay::is_string_null_or_empty(&uParam1)) {
			Global_69956 = 3;
		}
		else {
			Global_69956 = 1;
		}
		break;

	case 1:
		if (cutscene::has_cutscene_loaded()) {
			Global_69956 = 2;
		}
		break;

	case 2:
		if (cutscene::is_cutscene_playing()) {
			Global_69956 = 4;
			return true;
		}
		else if (!cutscene::is_cutscene_active()) {
			Global_69956 = 3;
		}
		break;

	case 3:
		if (cutscene::is_cutscene_playing()) {
		}
		else {
			Global_69956 = 5;
			return true;
		}
		break;

	case 4:
		if (cutscene::is_cutscene_playing()) {
			return true;
		}
		else if (iParam0 == 1) {
			Global_69956 = 5;
		}
		break;

	case 5:
		if (cutscene::is_cutscene_playing() || func_442(0) || func_576(1)) {
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3FC9C
bool func_576(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x3FCC5
int func_577(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_578(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x3FCE7
bool func_578(int iParam0) { return func_579(iParam0, Global_35781); }

// Position - 0x3FCF8
int func_579(int iParam0, int iParam1) {
	if (iParam1 == 15) {
		return 1;
	}
	if (iParam0 == 15) {
		return 0;
	}
	switch (iParam0) {
	case 16:
		switch (iParam1) {
		case 9:
		case 10:
		case 7:
		case 13:
		case 14: return 0;
		}
		return 1;

	case 0:
		switch (iParam1) {
		case 5:
		case 17: return 1;
		}
		break;

	case 2:
	case 3:
		switch (iParam1) {
		case 5:
		case 6:
		case 8:
		case 17: return 1;
		}
		break;

	case 4:
		if (iParam1 == 17) {
			return 1;
		}
		break;

	case 5: break;

	case 6:
	case 8:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 7:
		if (iParam1 == 6) {
			return 1;
		}
		break;

	case 9:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 10:
		switch (iParam1) {
		case 5:
		case 6:
		case 17: return 1;
		}
		break;

	case 11:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 17:
		switch (iParam1) {
		case 17:
		case 12:
		case 5: return 1;
		}
		break;

	case 18:
	case 12:
		switch (iParam1) {
		case 5:
		case 6:
		case 8: return 1;
		}
		break;

	case 13:
		switch (iParam1) {
		case 5: return 1;
		}
		break;

	case 14:
		switch (iParam1) {
		case 5: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x3FED9
void func_580(var *uParam0) {
	int iVar0;

	if (uParam0->f_271) {
		if (gameplay::get_frame_count() >= uParam0->f_272 + uParam0->f_273 ||
			gameplay::is_bit_set(Global_91491.f_20, 2) || gameplay::is_bit_set(Global_91491.f_20, 13)) {
			iVar0 = 0;
			while (iVar0 < 15) {
				if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
					if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 29)) {
						func_581(&(*uParam0)[iVar0 /*18*/]);
						uParam0->f_272 = gameplay::get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

// Position - 0x3FF67
void func_581(int *iParam0) { func_582(iParam0, &iParam0->f_2, iParam0->f_1); }

// Position - 0x3FF7D
void func_582(int *iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(*iParam0, 30)) {
		switch (func_319(*iParam0)) {
		case 0: streaming::request_model(iParam2); break;

		case 1: streaming::request_anim_dict(sParam1); break;

		case 2: streaming::request_clip_set(sParam1); break;

		case 3: graphics::request_streamed_texture_dict(sParam1, gameplay::is_bit_set(*iParam0, 28)); break;

		case 4: vehicle::request_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::request_waypoint_recording(sParam1); break;

		case 6: audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(*iParam0, 27), -1); break;

		case 7: script::request_script_with_name_hash(iParam2); break;

		case 8: ui::request_additional_text(sParam1, iParam2); break;

		case 9: streaming::request_ptfx_asset(); break;

		default: break;
		}
		gameplay::set_bit(iParam0, 29);
	}
}

// Position - 0x4005B
void func_583() {}

// Position - 0x40063
bool func_584(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x4008E
void func_585(int iParam0) {
	if (iParam0 < 63) {
		func_171();
		Global_69957 = iParam0;
		Global_69956 = 0;
		Global_69959 = 7;
	}
}

// Position - 0x400B4
void func_586() {
	func_171();
	if (func_602()) {
	}
	func_588(&Local_2982, 1, 0, 0);
	func_587(&iLocal_3330);
	if (ui::does_blip_exist(iLocal_2767)) {
		ui::remove_blip(&iLocal_2767);
	}
	pathfind::set_roads_back_to_original_in_angled_area(132.1304f, -2597.912f, 0.004743f, 340.5726f, -2511.293f,
														11.7885f, 70f, 1);
	vehicle::_0x1033371FC8E842A7(iLocal_3343);
	vehicle::_0x1033371FC8E842A7(iLocal_3344);
	ped::remove_scenario_blocking_area(iLocal_2937, 0);
	ped::remove_scenario_blocking_area(iLocal_2938, 0);
	ped::remove_scenario_blocking_area(iLocal_2939, 0);
	func_603(&uLocal_3043, 1);
	script::terminate_this_thread();
}

// Position - 0x40145
void func_587(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x4017D
void func_588(var *uParam0, int iParam1, int iParam2, int iParam3) {
	func_598(uParam0, iParam1);
	func_593(uParam0, iParam2);
	func_589(uParam0, iParam3);
}

// Position - 0x4019D
void func_589(var *uParam0, bool bParam1) { func_590(&uParam0->f_41, bParam1); }

// Position - 0x401AF
void func_590(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_592(&(*uParam0)[iVar0]);
		}
		else {
			func_591(&(*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0x401ED
void func_591(int *iParam0, int iParam1) {
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

// Position - 0x40228
void func_592(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x40253
void func_593(var *uParam0, bool bParam1) { func_594(&uParam0->f_35, bParam1); }

// Position - 0x40265
void func_594(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_595(&(*uParam0)[iVar0]);
		}
		else {
			func_587(&(*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x402A2
void func_595(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_597(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_596(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_596(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x4033E
bool func_596(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4035F
bool func_597(int iParam0) {
	if (func_596(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x40389
void func_598(var *uParam0, int iParam1) { func_599(&uParam0->f_28, iParam1); }

// Position - 0x4039B
void func_599(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (iParam1 == 1) {
			func_601(&(*uParam0)[iVar0]);
		}
		else {
			func_600(&(*uParam0)[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

// Position - 0x403DC
void func_600(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0x4042B
void func_601(int iParam0) {
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

// Position - 0x4046B
bool func_602() {
	int iVar0;

	iVar0 = func_202();
	if (iVar0 == -1) {
		return false;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return false;
	}
	Global_100787[iVar0 /*10*/].f_4 = 0;
	ui::clear_additional_text(0, 1);
	ui::clear_additional_text(3, 1);
	ui::clear_additional_text(2, 1);
	if (!func_584(0)) {
		if (Global_100787[iVar0 /*10*/].f_5 && Global_100787[iVar0 /*10*/].f_6) {
			Global_100787[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100787[iVar0 /*10*/].f_6 && !Global_100787[iVar0 /*10*/].f_5) {
			Global_100787[iVar0 /*10*/].f_6 = 1;
		}
	}
	return true;
}

// Position - 0x4050C
void func_603(var *uParam0, int iParam1) {
	int iVar0;

	ui::clear_help(1);
	if (!entity::is_entity_dead(iLocal_2934, 0)) {
		vehicle::set_vehicle_doors_locked(iLocal_2934, 1);
		vehicle::set_vehicle_siren(iLocal_2934, 0);
	}
	vehicle::_0x1033371FC8E842A7(iLocal_2831);
	vehicle::_0x1033371FC8E842A7(iLocal_2832);
	ped::remove_scenario_blocking_area(iLocal_2937, 0);
	ped::remove_scenario_blocking_area(iLocal_2938, 0);
	vehicle::set_all_vehicle_generators_active_in_area(vLocal_2848 - Vector(15f, 15f, 15f),
													   vLocal_2848 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1) {
		vehicle::_0x1033371FC8E842A7(Local_2779[iVar0 /*20*/].f_17);
		vehicle::_0x1033371FC8E842A7(Local_2779[iVar0 /*20*/].f_18);
		vehicle::_0x1033371FC8E842A7(Local_2779[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_215(Local_1913[func_505() /*28*/].f_17)) {
		func_461(uLocal_2390, Local_1913[func_505() /*28*/].f_17, Local_1913[func_505() /*28*/].f_20);
	}
	entity::set_vehicle_as_no_longer_needed(&Local_2779[0 /*20*/].f_6);
	if (!entity::is_entity_dead(iLocal_2766, 0)) {
		if (entity::does_entity_exist(iLocal_2766)) {
			if (ped::is_ped_in_group(iLocal_2766)) {
				ped::remove_ped_from_group(iLocal_2766);
			}
		}
		if (iParam1) {
			ped::set_ped_keep_task(iLocal_2766, 1);
			entity::set_ped_as_no_longer_needed(&iLocal_2766);
		}
	}
	if (!entity::is_entity_dead(Local_2779[0 /*20*/], 0)) {
		entity::set_ped_as_no_longer_needed(&Local_2779[0 /*20*/]);
		if (entity::does_entity_exist(Local_2779[0 /*20*/])) {
			if (ped::is_ped_in_group(Local_2779[0 /*20*/])) {
				ped::remove_ped_from_group(Local_2779[0 /*20*/]);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_2765)) {
		if (!entity::is_entity_dead(iLocal_2765, 0)) {
			entity::set_ped_as_no_longer_needed(&iLocal_2765);
		}
	}
	if (!entity::is_entity_dead(iLocal_2934, 0)) {
		entity::set_entity_as_mission_entity(iLocal_2934, 1, 1);
		entity::set_vehicle_as_no_longer_needed(&iLocal_2934);
	}
	if (iLocal_2715) {
		vehicle::set_all_vehicle_generators_active_in_area(vLocal_2666, vLocal_2669, 1, 1);
	}
	if (entity::does_entity_exist(Local_2779[0 /*20*/].f_7) && !entity::is_entity_dead(Local_2779[0 /*20*/].f_7, 0)) {
		vehicle::_0x1CF38D529D7441D9(Local_2779[0 /*20*/].f_7, 1);
		vehicle::set_mission_train_as_no_longer_needed(&Local_2779[0 /*20*/].f_7, 0);
	}
	if (iLocal_463 == 1) {
		vehicle::set_random_trains(1);
		func_185(0, 1);
		func_185(1, 0);
		func_185(2, 0);
		func_185(3, 1);
		func_185(4, 0);
		func_185(5, 0);
		func_185(6, 0);
		func_185(7, 0);
		func_185(8, 0);
		func_185(9, 0);
		func_185(10, 0);
		func_185(11, 0);
	}
	func_302(&iLocal_2639);
	func_302(&iLocal_2640);
	func_472(&uLocal_2953);
	func_302(&iLocal_2641);
	func_433(&iLocal_442, 0, 0);
	if (cam::does_cam_exist(Local_2776)) {
		func_468(&Local_2776);
	}
	func_606(uParam0, 0);
	func_604();
	player::set_wanted_level_multiplier(1f);
	vehicle::set_vehicle_model_is_suppressed(joaat("towtruck"), 0);
	if (iParam1) {
		script::terminate_this_thread();
	}
}

// Position - 0x407B7
void func_604() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (Global_88757[iVar0 /*17*/] && !Global_88757[iVar0 /*17*/].f_1) {
			if (Global_88757[iVar0 /*17*/].f_3 == 0) {
				if (Global_88757[iVar0 /*17*/].f_5 != 88 && Global_88757[iVar0 /*17*/].f_5 != 89 &&
					Global_88757[iVar0 /*17*/].f_5 != 92) {
					func_605(Global_88757[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x4083E
void func_605(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x4087C
void func_606(var *uParam0, int iParam1) {
	int iVar0;

	if (!iParam1) {
		func_608(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		func_607(&(*uParam0)[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

// Position - 0x408BF
void func_607(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&uParam0->f_2, "NULL", 64);
}

// Position - 0x408D8
void func_608(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			func_609(&(*uParam0)[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

// Position - 0x40912
void func_609(var *uParam0) { func_610(*uParam0, &uParam0->f_2, uParam0->f_1); }

// Position - 0x40929
void func_610(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		switch (func_319(iParam0)) {
		case 0: streaming::set_model_as_no_longer_needed(iParam2); break;

		case 1: streaming::remove_anim_dict(sParam1); break;

		case 2: streaming::remove_clip_set(sParam1); break;

		case 3: graphics::set_streamed_texture_dict_as_no_longer_needed(sParam1); break;

		case 4: vehicle::remove_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::remove_waypoint_recording(sParam1); break;

		case 6: audio::release_script_audio_bank(); break;

		case 7: script::set_script_with_name_hash_as_no_longer_needed(iParam2); break;

		case 8: ui::clear_additional_text(iParam2, gameplay::is_bit_set(iParam0, 26)); break;

		case 9: streaming::remove_ptfx_asset(); break;

		default: break;
		}
	}
}

// Position - 0x409E9
void func_611(int iParam0) {
	int iVar0;

	func_628();
	if (!func_627()) {
		iVar0 = func_202();
		if (iVar0 == -1) {
			return;
		}
		if (!Global_100787[iVar0 /*10*/].f_4) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_5) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_6) {
			return;
		}
		if (Global_85999 == Global_91528) {
			Global_101700.f_17533[iVar0 /*6*/].f_4++;
		}
		Global_85999 = Global_91528;
		if (iParam0) {
			func_161(iVar0, 1, 0);
			func_612(script::get_this_script_name(), iVar0);
		}
		else {
			if (Global_100787[iVar0 /*10*/].f_9 == -1) {
			}
			else {
				func_172(&Global_100787[iVar0 /*10*/].f_9);
			}
			func_160(iVar0, 1, 1, 0);
		}
		Global_100787[iVar0 /*10*/].f_6 = 1;
	}
}

// Position - 0x40AB9
void func_612(char *sParam0, int iParam1) {
	if (Global_91491 != 12) {
		if (func_613(sParam0, 6, iParam1)) {
			Global_91491.f_1 = iParam1;
		}
	}
}

// Position - 0x40AE1
bool func_613(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<32> Var1;
	int iVar33;

	func_19();
	func_626();
	Global_91491 = 0;
	StringCopy(&Global_91491.f_3, sParam0, 32);
	Global_91491.f_11 = iParam1;
	gameplay::_disable_automatic_respawn(1);
	gameplay::set_fade_out_after_arrest(0);
	gameplay::set_fade_out_after_death(0);
	func_624(1);
	func_622(1);
	func_619(0);
	func_618(1);
	gameplay::clear_bit(&Global_91491.f_20, 9);
	gameplay::clear_bit(&Global_91491.f_20, 6);
	gameplay::clear_bit(&Global_91491.f_20, 20);
	gameplay::clear_bit(&Global_91491.f_20, 21);
	gameplay::clear_bit(&Global_91491.f_20, 5);
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::is_entity_upsidedown(iVar0)) {
					gameplay::set_bit(&Global_91491.f_20, 5);
				}
			}
		}
	}
	ui::clear_help(1);
	ui::clear_prints();
	func_617(0);
	func_22(1);
	Global_91491.f_2 = Global_91528;
	if (func_616()) {
		if (func_615()) {
			if (Global_91528 >= func_614()) {
				if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 16)) {
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2) {
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6) {
			func_163(iParam2, &Var1);
			if (Var1.f_31 == 1) {
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2) {
					Global_86000 = 1;
				}
			}
		}
		else {
			iVar33 = func_418(script::get_this_script_name());
			if (iVar33 > -1) {
				if (Global_101700.f_23945.f_4[iVar33] >= 2) {
					Global_86000 = 1;
				}
			}
		}
	}
	return true;
}

// Position - 0x40C73
int func_614() {
	int iVar0;
	int iVar1;

	iVar0 = func_421(&Global_91491.f_3, 0);
	iVar1 = 0;
	if (iVar0 == 53) {
		iVar1 = 1;
	}
	return iVar1;
}

// Position - 0x40C97
bool func_615() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 3 ||
		Global_91491.f_11 == 4) {
		return true;
	}
	return false;
}

// Position - 0x40CE7
bool func_616() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 6 ||
		Global_91491.f_11 == 3) {
		return true;
	}
	if (Global_91491.f_11 == 5) {
		if (func_418(&Global_91491.f_3) > -1) {
			return true;
		}
	}
	return false;
}

// Position - 0x40D53
void func_617(int iParam0) {
	ui::display_hud(iParam0);
	ui::display_radar(iParam0);
}

// Position - 0x40D67
void func_618(int iParam0) {
	if (iParam0 == 1) {
		ui::_0xFDB423997FA30340();
		gameplay::set_bit(&Global_91491.f_20, 3);
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 3)) {
		ui::_0xE1CD1E48E025E661();
		gameplay::clear_bit(&Global_91491.f_20, 3);
	}
}

// Position - 0x40DA4
void func_619(int iParam0) {
	if (iParam0 == 1) {
		if (gameplay::is_bit_set(Global_91491.f_20, 4)) {
			func_621();
			gameplay::clear_bit(&Global_91491.f_20, 4);
		}
	}
	else {
		func_620();
		gameplay::set_bit(&Global_91491.f_20, 4);
	}
}

// Position - 0x40DE1
void func_620() { Global_17151.f_5 = 1; }

// Position - 0x40DEF
void func_621() { Global_17151.f_5 = 0; }

// Position - 0x40DFD
void func_622(int iParam0) {
	if (iParam0) {
		func_623();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&G_SleepModeOffOn11, 16);
		}
		Global_14443.f_1 = 1;
		if (func_442(0)) {
			func_624(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x40E60
void func_623() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x40E89
void func_624(int iParam0) {
	if (Global_14604) {
		func_625(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_223()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x40EF9
void func_625(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_442(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x40F6D
void func_626() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0x40F7F
int func_627() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x40FBD
void func_628() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_226()) {
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
			switch (func_226()) {
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

// Position - 0x410AE
void func_629(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0x410C0
void func_630() {
	int iVar0;

	iVar0 = func_202();
	if (iVar0 == -1) {
		return;
	}
	Global_100787[iVar0 /*10*/] = 1;
}

// Position - 0x410E0
void func_631(var *uParam0) {
	func_632(&uParam0->f_28);
	func_632(&uParam0->f_35);
	func_632(&uParam0->f_41);
}

// Position - 0x41100
void func_632(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (entity::does_entity_exist((*uParam0)[iVar0])) {
			entity::set_entity_as_mission_entity((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}
