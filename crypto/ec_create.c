#include "hblk_crypto.h"

/**
* ec_create - creates a new EC key pair
* Return: return a pointer to an EC_KEY structure, containing
* both the public and private keys, or NULL upon failure
*/
EC_KEY *ec_create(void)
{
	EC_KEY *my_ecc_pair  = NULL;

	my_ecc_pair = EC_KEY_new_by_curve_name(EC_CURVE);

	if (!(EC_KEY_generate_key(my_ecc_pair)))
		return (NULL);
	return (my_ecc_pair);
}
