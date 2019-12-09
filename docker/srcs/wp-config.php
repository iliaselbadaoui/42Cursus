<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'wordpress' );

/** MySQL database username */
define( 'DB_USER', 'emperor' );

/** MySQL database password */
define( 'DB_PASSWORD', 'aitfaska98' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         'nZC<v{)mc_eF<M%/=w9MXn+bTL$09RVgmSgCwd&=kL/*L5EJOZ$ptPzE31z|@u}[' );
define( 'SECURE_AUTH_KEY',  '^RV$%0~w:v% <Ab/_8P|_uLvdx$m/xi,%c[u[?bR]Q7_7=>R!C<,,4);iz##[Bos' );
define( 'LOGGED_IN_KEY',    'Fzbt%A<ylor}5BadN`eMjq0>mM}N*]|oMgFrit4V<?iwa80:~TUQ5D@{$5LQ>Rd!' );
define( 'NONCE_KEY',        ',z</]o~+Kh{lI@.BLhz]!s?TK[4^SoM^wLXcG6< 53cq?`<$5w&A6`WR#~Xd6`k>' );
define( 'AUTH_SALT',        'H^~JxQyq;>qrC;_SF3j3h6|H6z|qJ6&sZL5{P@,3MG=%,0Tv}zV1e-WC8/,oa D&' );
define( 'SECURE_AUTH_SALT', '(8Pa+!bbCNwOMhwkX>~eKW2TtI<$K{=g.Ze{oBjY$/WI`Xt~P!<o}P7pTz@t`=pt' );
define( 'LOGGED_IN_SALT',   '*G+gwh/s!Zc0(0nq&^`}%+9_w&y^cE&k:|Bb^{fmyxS-?36bDxhj1|;=Ecbuy9 N' );
define( 'NONCE_SALT',       '1_0)];[m(n]h,xq04M24UU:>&$b2tgimW)Aan9%o9bC-E8l+Aa2BHni4nIsAK3ob' );

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
